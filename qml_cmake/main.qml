import QtQuick 2.0
import QtQuick.Controls 1.4

ApplicationWindow
{
   visible: true
   width: 640
   height: 480
   id: appWindow;
   title: qsTr("Test qml")

   Component{
       id: myButton;
       Button{}
   }

   function addButton( yvalue){
       var button = myButton.createObject (appWindow, {
                                               "color"  : "red",
                                               "width"  : 50,
                                               "height" : 80,
                                               "x"      : 50,
                                               "y"      : yvalue
                                           });
   }

   Column{
      Button{
          property var shifter: 50
         //var value = 50;
         text: "Quit"
         onClicked: addButton(shifter+=80)
      }
      Button{
         text: "Cancel"
         onClicked: test.buttonClick("Worked")
      }
   }
}
