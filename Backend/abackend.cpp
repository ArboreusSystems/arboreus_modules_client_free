// ----------------------------------------------------------
/*!
	\class AClientBackend
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/02/2021 at 12:53:54
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "abackend.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

ABackend::ABackend(QObject *parent) : QObject(parent) {

	_A_DEBUG << "AClientBackend created";
}


// -----------
/*!
	\fn

	Doc.
*/

ABackend::~ABackend(void) {

	_A_DEBUG << "AClientBackend deleted";
}


// -----------
/*!
	\fn

	Doc.
*/

ABackend& ABackend::mInstance(void) {

	static ABackend oInstance;
	return oInstance;
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInit(
	QGuiApplication* inGuiApplication,
	QQmlApplicationEngine* inEngine,
	QQmlContext* inRootContext
) {

	pGuiApplication = inGuiApplication;
	pEngine = inEngine;
	pRootContext = inRootContext;

	pScreen = QGuiApplication::primaryScreen();
	pScreen->setOrientationUpdateMask(
		Qt::PortraitOrientation |
		Qt::LandscapeOrientation |
		Qt::InvertedPortraitOrientation |
		Qt::InvertedLandscapeOrientation
	);

	pRootContext->setContextProperty("ABackend",this);

	pConfigGlobal = new AConfigGlobal(pEngine);
	pRootContext->setContextProperty("AConfigGlobal",pConfigGlobal);

	pConfigMobile = new AConfigMobile(pEngine);
	pRootContext->setContextProperty("AConfigMobile",pConfigMobile);

	this->mInitCore();
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitCore(void) {

	pProperties = new AProperties(pEngine);
	pLogger = new ALogger(pEngine);

	QObject::connect(
		pProperties,&AProperties::sgInitiated,
		[this](){
			this->mInitLogger();
		}
	);
	QObject::connect(
		pLogger,&ALogger::sgInitiated,
		[this](){
			_A_DEBUG << "AClientBackend core initiated";
			this->mInitServices();
		}
	);

	this->mInitProperties();
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitServices(void) {

	pSettings = new ASettings(pEngine);
	pNetwork = new ANetwork(pEngine);
	pDevice = new ADevice(pEngine);
	pUIHandler = new AUIHandler(pEngine);

	QObject::connect(
		pSettings,&ASettings::sgInitiated,
		[this](){
			this->mInitNetwork();
		}
	);
	QObject::connect(
		pNetwork,&ANetwork::sgInitiated,
		[this](){
			this->mInitDevice();
		}
	);
	QObject::connect(
		pDevice,&ADevice::sgInitiated,
		[this](){
			this->mInitUIHandler();
		}
	);
	QObject::connect(
		pUIHandler,&AUIHandler::sgInitiated,
		[this](){
			_A_DEBUG << "AClientBackend services initiated";
			emit this->sgInitiated();
		}
	);

	this->mInitSettings();
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitProperties(void) {

	pProperties->mSetNameApplication("Storage Client");
	pProperties->mSetNameDomain("arboreus.systems");
	pProperties->mSetNameOrganisation("Arboreus Systems");
	pProperties->mInit();
	pRootContext->setContextProperty("AProperties",pProperties);
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitLogger(void) {

	pLogger->mInit();
	pRootContext->setContextProperty("ALogger",pLogger);
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitSettings(void) {

	pSettings->mInit();
	pRootContext->setContextProperty("ASettings",pSettings);
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitNetwork(void) {

	pNetwork->mInit();
	pRootContext->setContextProperty("ANetwork",pNetwork);
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitDevice(void) {

	pDevice->mInit();
	pRootContext->setContextProperty("ADevice",pDevice);
}


// -----------
/*!
	\fn

	Doc.
*/

void ABackend::mInitUIHandler(void) {

	pUIHandler->mInit();
	pRootContext->setContextProperty("AUIHandler",pUIHandler);
	pRootContext->setContextProperty("AFonts",pUIHandler->pFonts);
	pRootContext->setContextProperty("AColors",pUIHandler->pColors);
}
