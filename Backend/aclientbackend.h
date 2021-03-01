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

#ifndef ACLIENTBACKEND_H
#define ACLIENTBACKEND_H

// System includes
#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

// Application includes
#include <athreadtemplate.h>
#include <aproperties.h>
#include <alogger.h>

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class AClientBackend : public QObject {

	Q_OBJECT

	public:

		QGuiApplication* pGuiApplication = nullptr;
		QQmlApplicationEngine* pEngine = nullptr;
		QQmlContext* pRootContext = nullptr;

		AThreadTemplate* pThreadLowest = nullptr;
		AThreadTemplate* pThreadLow = nullptr;
		AThreadTemplate* pThreadNormal = nullptr;
		AThreadTemplate* pThreadHigh = nullptr;
		AThreadTemplate* pThreadHighest = nullptr;

		ALogger* pLogger = nullptr;
		AProperties* pProperties = nullptr;

		static AClientBackend& mInstance(void);
		void mInit(void);

	private:

		explicit AClientBackend(QObject *parent = nullptr);
		virtual ~AClientBackend(void);
		Q_DISABLE_COPY(AClientBackend)

		void mInitThreads(void);
		void mInitLogger(void);
		void mDeleteThreads(void);
};

} // namespace ARB

#endif // ACLIENTBACKEND_H
