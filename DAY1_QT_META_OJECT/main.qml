import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Dialogs 1.3

ApplicationWindow {

    visible: true

    width: 1920

    height: 1080

    // Mục Album (Bên trái)

    Rectangle {

        id: albumSection

        width: parent.width * 0.4

        height: parent.height

        color: "#ffffff"

        anchors.left: parent.left

        Text {

            text: "Album"

            anchors.centerIn: parent

            font.pixelSize: 48

        }

    }

    // Phần thông tin bài hát (Bên phải)

    Rectangle {

        id: songInfoSection

        width: parent.width * 0.6

        height: parent.height

        color: "#ffffff"

        anchors.right: parent.right

        Column {

            anchors.fill: parent

            spacing: 20

            // Tên bài hát và nghệ sĩ

            Rectangle {

                width: parent.width

                height: parent.height * 0.3

                color: "#e0e0e0"

                Text {

                    text: audioPlayer.songTitle + audioPlayer.artistName

                    anchors.centerIn: parent

                    font.pixelSize: 48

                }

            }

            // Thanh tiến trình

            Rectangle {

                width: parent.width

                height: 10

                color: "#c0c0c0"

            }

            // Các nút điều khiển (Phát/Tạm dừng, Bỏ qua)

            Rectangle {

                width: parent.width

                height: parent.height * 0.2

                color: "#d0d0d0"

                Row {

                    anchors.centerIn: parent

                    spacing: 30

                    Button {

                        text: "Phát"
                        onClicked: audioPlayer.play()

                    }

                    Button {

                        text: "Dừng"
                        onClicked : audioPlayer.pause()

                    }

                    Button {

                        text: "Stop"
                        onClicked : audioPlayer.stop()

                    }

                }

            }

            // Thông tin âm thanh (Tốc độ bit, định dạng)

            Rectangle {

                width: parent.width

                height: parent.height * 0.1

                color: "#e0e0e0"

                Text {

                    text: "Tốc độ bit: 320kbps - Định dạng: MP3"

                    anchors.centerIn: parent

                    font.pixelSize: 32

                }

            }

            // Xếp hạng sao

            Rectangle {

                width: parent.width

                height: parent.height * 0.1

                color: "#f0f0f0"

                Row {

                    anchors.centerIn: parent

                    spacing: 10

                    Repeater {

                        model: 5

                        Rectangle {

                            width: 48

                            height: 48

                            color: "yellow"

                            Text {

                                text: "★"

                                anchors.centerIn: parent

                                font.pixelSize: 32

                            }

                        }

                    }

                }

            }

            Rectangle {

                id: navBar

                width: parent.width

                height: parent.height * 0.2

                color: "#b0b0b0"

                FileDialog {
                    id: fileDialog
                    nameFilters: ["MP3 Files (*.mp3)"]
                    onAccepted: {
                        // Gọi hàm openFile từ C++
                        audioPlayer.openFile(fileUrl.toString().replace("file:///", ""))
                    }
                }

                Row {

                    anchors.centerIn: parent

                    spacing: 10

                    Button {

                        text: "PLAYLIST"

                    }

                   //  Hộp thoại để chọn file
                    Button {

                        text: "SONGS"


                    }

                    Button {

                        text: "ALBUMS"

                    }
                    Button {

                        text: "FOLDERS"
                        onClicked: fileDialog.open()
                    }

                }

            }

        }

    }
}



