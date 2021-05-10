// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/04/2021 at 19:14:41
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.15
import Arboreus 1.0

// Application includes
import "qrc:/ClentFree/Modules/QMLComponents/Content";

// Application
ApplicationWindow {

	property string pText: qsTr("Main.Application.Title");
	property string pColorSafeArea: "green";
	property string pColorBackground: AColors.mWhite();
	property var pStatusBarStyle: ADeviceEnums.Light;

	id: oApplicationWindow;
	flags: Qt.Window | Qt.MaximizeUsingFullscreenGeometryHint;
	width: AProperties.mIsDesktop() ? AConfigMobile.mDesktopUIWidth() : maximumWidth;
	height: AProperties.mIsDesktop() ? AConfigMobile.mDesktopUIHeight() : maximumHeight;
	visible: true;
	title: oApplicationWindow.pText;
	color: AColors.mBlack();

	Component.onCompleted: {

		oApplicationWindow.mSetSafeAreaInsets();
	}

	Connections {

		target: ADevice;
		function onSgOrientationChanged(inOrientation) {

			oApplicationWindow.mSetSafeAreaInsets();

			if (ADevice.mIsLandscape()) {
				oPaddingLeft.color = AColors.mTransparent();
				oPaddingRight.color = AColors.mTransparent();
			} else {
				if (inOrientation === Qt.InvertedPortraitOrientation) {
					oPaddingLeft.color = AColors.mTransparent();
					oPaddingRight.color = AColors.mTransparent();
				} else {
					oPaddingLeft.color = oApplicationWindow.pColorSafeArea;
					oPaddingRight.color = oApplicationWindow.pColorSafeArea;
				}
			}
		}
	}

	Rectangle {

		id: oApplicationWindowWrapper;
		width: parent.width;
		height: parent.height;
		color: AColors.mTransparent();

		Rectangle {

			id: oPaddingLeft;
			color: AColors.mTransparent();
			height: parent.height;
			anchors.top: parent.top;
			anchors.left: parent.left;
		}

		Rectangle {

			id: oPaddingRight;
			color: AColors.mTransparent();
			height: parent.height;
			anchors.top: parent.top;
			anchors.right: parent.right;
		}

		Rectangle {

			id: oPaddingTop;
			color: oApplicationWindow.pColorSafeArea;
			anchors.top: parent.top;
			anchors.left: oPaddingLeft.right;
			anchors.right: oPaddingRight.left;
		}

		Rectangle {

			id: oPaddingBottom;
			color: oApplicationWindow.pColorSafeArea;
			anchors.bottom: parent.bottom;
			anchors.left: oPaddingLeft.right;
			anchors.right: oPaddingRight.left;
		}

		AContentWrapperMobile {

			id: oContentWrapper;
			anchors.top: oPaddingTop.bottom;
			anchors.bottom: oPaddingBottom.top;
			anchors.left: oPaddingLeft.right;
			anchors.right: oPaddingRight.left;
			color: AColors.mTransparent();

			Component.onCompleted: {

				let oSafeAreaHeightOffset = oPaddingTop.height + oPaddingBottom.height;
				oContentWrapper.height = oApplicationWindowWrapper.height - oSafeAreaHeightOffset;

				let oSafeAreaWidthOffset = oPaddingLeft.width + oPaddingRight.height;
				oContentWrapper.width = oApplicationWindowWrapper.width - oSafeAreaWidthOffset;

				Qt.createQmlObject(
					AUIHandler.mComponentContent("AContentMobile"),
					oContentWrapper,"oContent"
				);

				oApplicationWindow.mSetStatusBarStyleDefault();
			}
		}
	}

	function mSetSafeAreaInsets() {

		let oSafeAreaInsets = ADevice.mSafeAreaInsets();

		oPaddingTop.height = oSafeAreaInsets.Top;
		oPaddingBottom.height = oSafeAreaInsets.Bottom;
		oPaddingLeft.width = oSafeAreaInsets.Left;
		oPaddingRight.width = oSafeAreaInsets.Right;
	}

	function mSetStatusBarStyleDefault() {

		oApplicationWindow.pStatusBarStyle = ADeviceEnums.Light;
		ADevice.mSetStatusBarStyle(oApplicationWindow.pStatusBarStyle);
	}
}
