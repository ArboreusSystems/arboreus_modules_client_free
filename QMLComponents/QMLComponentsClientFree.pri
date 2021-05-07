RESOURCES += \
	$$PWD/QMLComponentsClientFree.qrc

lupdate_only {

	SOURCES += \
		$$PWD/*.qml \
		$$PWD/Main/*.qml \
		$$PWD/Content/*.qml
}
