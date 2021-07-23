// ----------------------------------------------------------
/*!
	\headerfile AClientBackend
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/02/2021 at 12:53:54
	\endlist
*/
// ----------------------------------------------------------

#ifndef ABACKEND_H
#define ABACKEND_H

// System includes
#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QScreen>

// Application includes
#include <abackendconfig.h>
#include <alogger.h>
#include <aproperties.h>
#include <asettings.h>
#include <anetwork.h>
#include <adevice.h>
#include <auihandler.h>
#include <aapplication.h>
#include <astorage.h>

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class ABackend : public QObject {

	Q_OBJECT

	public:

		QObject* pApplicationConfig = nullptr;
		AProperties* pProperties = nullptr;
		ALogger* pLogger = nullptr;
		ASettings* pSettings = nullptr;
		ANetwork* pNetwork = nullptr;
		ADevice* pDevice = nullptr;
		AUIHandler* pUIHandler = nullptr;
		AApplication* pApplication = nullptr;
		AStorage* pStorage = nullptr;

		QGuiApplication* pGuiApplication = nullptr;
		QQmlApplicationEngine* pEngine = nullptr;
		QQmlContext* pRootContext = nullptr;
		QScreen* pScreen = nullptr;

		static ABackend& mInstance(void);
		void mInit(
			QGuiApplication* inGuiApplication = nullptr,
			QQmlApplicationEngine* inEngine = nullptr,
			QQmlContext* inRootContext = nullptr,
			QObject* inApplicationConfig = nullptr
		);
		const char* mModuleName(void);

	signals:

		void sgInitiated(void);

	private:

		QMap<QString,bool> pModules = {};
		ABackendConfig* pConfig = nullptr;

		explicit ABackend(QObject* parent = nullptr);
		virtual ~ABackend(void);
		Q_DISABLE_COPY(ABackend)

		void mInitCore(void);
		void mInitServices(void);
		void mInitProperties(void);
		void mInitLogger(void);
		void mInitSettings(void);
		void mInitNetwork(void);
		void mInitDevice(void);
		void mInitUIHandler(void);
		void mInitApplication(void);
		void mInitStorage(void);
};

} // namespace ARB

#endif // ABACKEND_H
