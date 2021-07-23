A_DIR_MODULES_CLIENT_FREE_QML_COMPONENTS = $$PWD/QMLComponents
A_PRI_MODULES_CLIENT_FREE_QML_COMPONENTS = $$A_DIR_MODULES_CLIENT_FREE_QML_COMPONENTS/QMLComponentsClientFree.pri
exists($$A_PRI_MODULES_CLIENT_FREE_QML_COMPONENTS) {
	include($$A_PRI_MODULES_CLIENT_FREE_QML_COMPONENTS)
} else {
	error(No ClientFree Module QMLComponents config file $$A_PRI_MODULES_CLIENT_FREE_QML_COMPONENTS)
}

A_DIR_MODULES_CLIENT_FREE_BACKEND = $$PWD/Backend
A_PRI_MODULES_CLIENT_FREE_BACKEND = $$A_DIR_MODULES_CLIENT_FREE_BACKEND/Backend.pri
exists($$A_PRI_MODULES_CLIENT_FREE_BACKEND) {
	include($$A_PRI_MODULES_CLIENT_FREE_BACKEND)
} else {
	error(No ClientFree Module Backend config file $$A_PRI_MODULES_CLIENT_FREE_BACKEND)
}

A_DIR_MODULES_CLIENT_FREE_STORAGE = $$PWD/Storage
A_PRI_MODULES_CLIENT_FREE_STORAGE = $$A_DIR_MODULES_CLIENT_FREE_STORAGE/Storage.pri
exists($$A_PRI_MODULES_CLIENT_FREE_STORAGE) {
	include($$A_PRI_MODULES_CLIENT_FREE_STORAGE)
} else {
	error(No ClientFree Module Storage config file $$A_PRI_MODULES_CLIENT_FREE_STORAGE)
}
