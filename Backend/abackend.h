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

// Application includes
#include <aconfigmobile.h>
#include <alogger.h>
#include <aproperties.h>
#include <asettings.h>
#include <anetwork.h>
#include <adevice.h>

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class ABackend : public QObject {

	Q_OBJECT

	public:

		AConfigMobile* pConfigMobile = nullptr;
		AProperties* pProperties = nullptr;
		ALogger* pLogger = nullptr;
		ASettings* pSettings = nullptr;
		ANetwork* pNetwork = nullptr;
		ADevice* pDevice = nullptr;

		QGuiApplication* pGuiApplication = nullptr;
		QQmlApplicationEngine* pEngine = nullptr;
		QQmlContext* pRootContext = nullptr;

		static ABackend& mInstance(void);
		void mInit(
			QGuiApplication* inGuiApplication = nullptr,
			QQmlApplicationEngine* inEngine = nullptr,
			QQmlContext* inRootContext = nullptr
		);

	signals:

		void sgInitiated(void);

	private:

		QMap<QString,bool> pModules = {};

		explicit ABackend(QObject *parent = nullptr);
		virtual ~ABackend(void);
		Q_DISABLE_COPY(ABackend)

		void mInitCore(void);
		void mInitServices(void);
		void mInitProperties(void);
		void mInitLogger(void);
		void mInitSettings(void);
		void mInitNetwork(void);
		void mInitDevice(void);
};

} // namespace ARB

#endif // ABACKEND_H
