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

// Application includes

// Constants and definitions

// Namespace

// Class definitions
class AClientBackend : public QObject {

	Q_OBJECT

public:

	explicit AClientBackend(QObject *parent = nullptr);
	virtual ~AClientBackend(void);

signals:

};

#endif // ACLIENTBACKEND_H
