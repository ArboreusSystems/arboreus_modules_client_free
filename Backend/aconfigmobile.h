// ----------------------------------------------------------
/*!
	\headerfile AConfigMobile
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/05/2021 at 19:46:20
	\endlist
*/
// ----------------------------------------------------------

#ifndef ACONFIGMOBILE_H
#define ACONFIGMOBILE_H

// System includes
#include <QObject>

// Application includes

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class AConfigMobile : public QObject {

	Q_OBJECT

	public:

		explicit AConfigMobile(QObject* parent = nullptr);
		virtual ~AConfigMobile(void);

	public slots:

		int mUIWidth(void);
		int mUIHeight(void);
		int mDesktopUIWidth(void);
		int mDesktopUIHeight(void);

		int mFontSizeHeader(void);
		int mFontSizeRegular(void);
		int mFontSizeTextInput(void);

		int mBorderSize(void);
		int mRadius(void);

		int mElementHeight(void);

	private:

		int pUIWidth = 1440;
		int pUIHeight = 2560;
		int pDesktopUIWidth = 504;
		int pDesktopUIHeight = 896;

		int pFontSizeHeader = 18;
		int pFontSizeRegular = 16;
		int pFontSizeTextInput = 16;

		int pBorderSize = 1;
		int pRadius = 5;

		int pElementHeight = 40;
};

} // namespace ARB

#endif // ACONFIGMOBILE_H
