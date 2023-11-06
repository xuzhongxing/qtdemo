import QtQuick
import qmllibs.demolib

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("From qml module")

    CustomElement {
        counter: 10
    }

}
