/********************************************************************************
** Form generated from reading UI file 'czdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CZDIALOG_H
#define UI_CZDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CZDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabInfo;
    QWidget *tabCore;
    QGridLayout *gridLayout_5;
    QLabel *labelName;
    QLabel *labelThreadsMulti;
    QLabel *labelThreadsBlockText;
    QLabel *labelNameText;
    QLabel *labelCapability;
    QLabel *labelCapabilityText;
    QLabel *labelClock;
    QLabel *labelClockText;
    QLabel *labelMultiProc;
    QLabel *labelMultiProcText;
    QLabel *labelThreadsMultiText;
    QLabel *labelWarp;
    QLabel *labelWarpText;
    QLabel *labelRegsBlock;
    QLabel *labelRegsBlockText;
    QLabel *labelThreadsBlock;
    QLabel *labelThreadsDim;
    QLabel *labelThreadsDimText;
    QLabel *labelGridDim;
    QLabel *labelGridDimText;
    QLabel *labelWatchdog;
    QLabel *labelWatchdogText;
    QLabel *labelIntegrated;
    QLabel *labelIntegratedText;
    QLabel *labelConcurrentKernels;
    QLabel *labelConcurrentKernelsText;
    QLabel *labelComputeMode;
    QLabel *labelComputeModeText;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelPCIInfo;
    QLabel *labelPCIInfoText;
    QLabel *labelStreamPriorities;
    QLabel *labelStreamPrioritiesText;
    QLabel *labelRtDllVersionText;
    QLabel *labelRtDllVersion;
    QLabel *labelDrvDllVersionText;
    QLabel *labelDrvDllVersion;
    QLabel *labelDrvVersionText;
    QLabel *labelDrvVersion;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelDeviceLogo;
    QSpacerItem *verticalSpacer_5;
    QWidget *tabMemory;
    QGridLayout *gridLayout;
    QLabel *labelTotalGlobal;
    QLabel *labelTotalGlobalText;
    QLabel *labelMemClock;
    QLabel *labelMemClockText;
    QLabel *labelShared;
    QLabel *labelSharedText;
    QLabel *labelPitch;
    QLabel *labelPitchText;
    QLabel *labelTotalConst;
    QLabel *labelTotalConstText;
    QLabel *labelTextureAlign;
    QLabel *labelTextureAlignText;
    QLabel *labelTexture1D;
    QLabel *labelTexture1DText;
    QLabel *labelTexture2D;
    QLabel *labelTexture2DText;
    QLabel *labelTexture3D;
    QLabel *labelTexture3DText;
    QLabel *labelGpuOverlap;
    QLabel *labelGpuOverlapText;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelL2CasheSize;
    QLabel *labelL2CasheSizeText;
    QLabel *labelBusWidth;
    QLabel *labelBusWidthText;
    QLabel *labelErrorCorrection;
    QLabel *labelErrorCorrectionText;
    QLabel *labelAsyncEngine;
    QLabel *labelAsyncEngineText;
    QLabel *labelMapHostMemory;
    QLabel *labelMapHostMemoryText;
    QLabel *labelUnifiedAddressing;
    QLabel *labelUnifiedAddressingText;
    QWidget *tabPerformance;
    QGridLayout *gridLayout_4;
    QLabel *labelMemRate;
    QLabel *labelRatePin;
    QLabel *labelRatePage;
    QLabel *labelHDRate;
    QLabel *labelHDRatePinText;
    QLabel *labelHDRatePageText;
    QLabel *labelDHRate;
    QLabel *labelDHRatePinText;
    QLabel *labelDHRatePageText;
    QLabel *labelDDRate;
    QLabel *labelDDRateText;
    QLabel *labelCalcRate;
    QLabel *labelFloatRate;
    QLabel *labelFloatRateText;
    QLabel *labelDoubleRate;
    QLabel *labelDoubleRateText;
    QLabel *labelInt24Rate;
    QLabel *labelInt24RateText;
    QLabel *labelInt8Rate;
    QLabel *labelInt8RateText;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkUpdateResults;
    QCheckBox *checkHeavyMode;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushExport;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelAppLogo;
    QLabel *labelAppName;
    QLabel *labelAppVersion;
    QLabel *labelAppURL;
    QLabel *labelAppAuthor;
    QLabel *labelAppCopy;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAppUpdateImg;
    QLabel *labelAppUpdate;
    QPushButton *pushUpdate;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboDevice;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushOk;

    void setupUi(QDialog *CZDialog)
    {
        if (CZDialog->objectName().isEmpty())
            CZDialog->setObjectName(QString::fromUtf8("CZDialog"));
        CZDialog->resize(356, 437);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CZDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CZDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabInfo = new QTabWidget(CZDialog);
        tabInfo->setObjectName(QString::fromUtf8("tabInfo"));
        tabCore = new QWidget();
        tabCore->setObjectName(QString::fromUtf8("tabCore"));
        gridLayout_5 = new QGridLayout(tabCore);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        labelName = new QLabel(tabCore);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelName, 0, 0, 1, 1);

        labelThreadsMulti = new QLabel(tabCore);
        labelThreadsMulti->setObjectName(QString::fromUtf8("labelThreadsMulti"));
        labelThreadsMulti->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelThreadsMulti, 5, 0, 1, 1);

        labelThreadsBlockText = new QLabel(tabCore);
        labelThreadsBlockText->setObjectName(QString::fromUtf8("labelThreadsBlockText"));
        labelThreadsBlockText->setFrameShape(QFrame::Panel);
        labelThreadsBlockText->setFrameShadow(QFrame::Sunken);
        labelThreadsBlockText->setText(QString::fromUtf8("<threads>"));

        gridLayout_5->addWidget(labelThreadsBlockText, 8, 1, 1, 1);

        labelNameText = new QLabel(tabCore);
        labelNameText->setObjectName(QString::fromUtf8("labelNameText"));
        labelNameText->setFrameShape(QFrame::Panel);
        labelNameText->setFrameShadow(QFrame::Sunken);
        labelNameText->setText(QString::fromUtf8("<name>"));
        labelNameText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_5->addWidget(labelNameText, 0, 1, 1, 1);

        labelCapability = new QLabel(tabCore);
        labelCapability->setObjectName(QString::fromUtf8("labelCapability"));
        labelCapability->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelCapability, 1, 0, 1, 1);

        labelCapabilityText = new QLabel(tabCore);
        labelCapabilityText->setObjectName(QString::fromUtf8("labelCapabilityText"));
        labelCapabilityText->setFrameShape(QFrame::Panel);
        labelCapabilityText->setFrameShadow(QFrame::Sunken);
        labelCapabilityText->setText(QString::fromUtf8("<capability>"));

        gridLayout_5->addWidget(labelCapabilityText, 1, 1, 1, 1);

        labelClock = new QLabel(tabCore);
        labelClock->setObjectName(QString::fromUtf8("labelClock"));
        labelClock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelClock, 2, 0, 1, 1);

        labelClockText = new QLabel(tabCore);
        labelClockText->setObjectName(QString::fromUtf8("labelClockText"));
        labelClockText->setFrameShape(QFrame::Panel);
        labelClockText->setFrameShadow(QFrame::Sunken);
        labelClockText->setText(QString::fromUtf8("<clock MHz>"));

        gridLayout_5->addWidget(labelClockText, 2, 1, 1, 1);

        labelMultiProc = new QLabel(tabCore);
        labelMultiProc->setObjectName(QString::fromUtf8("labelMultiProc"));
        labelMultiProc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelMultiProc, 4, 0, 1, 1);

        labelMultiProcText = new QLabel(tabCore);
        labelMultiProcText->setObjectName(QString::fromUtf8("labelMultiProcText"));
        labelMultiProcText->setFrameShape(QFrame::Panel);
        labelMultiProcText->setFrameShadow(QFrame::Sunken);
        labelMultiProcText->setText(QString::fromUtf8("<procs/cores>"));

        gridLayout_5->addWidget(labelMultiProcText, 4, 1, 1, 1);

        labelThreadsMultiText = new QLabel(tabCore);
        labelThreadsMultiText->setObjectName(QString::fromUtf8("labelThreadsMultiText"));
        labelThreadsMultiText->setFrameShape(QFrame::Panel);
        labelThreadsMultiText->setFrameShadow(QFrame::Sunken);
        labelThreadsMultiText->setText(QString::fromUtf8("<threads>"));

        gridLayout_5->addWidget(labelThreadsMultiText, 5, 1, 1, 1);

        labelWarp = new QLabel(tabCore);
        labelWarp->setObjectName(QString::fromUtf8("labelWarp"));
        labelWarp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelWarp, 6, 0, 1, 1);

        labelWarpText = new QLabel(tabCore);
        labelWarpText->setObjectName(QString::fromUtf8("labelWarpText"));
        labelWarpText->setFrameShape(QFrame::Panel);
        labelWarpText->setFrameShadow(QFrame::Sunken);
        labelWarpText->setText(QString::fromUtf8("<size>"));

        gridLayout_5->addWidget(labelWarpText, 6, 1, 1, 1);

        labelRegsBlock = new QLabel(tabCore);
        labelRegsBlock->setObjectName(QString::fromUtf8("labelRegsBlock"));
        labelRegsBlock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelRegsBlock, 7, 0, 1, 1);

        labelRegsBlockText = new QLabel(tabCore);
        labelRegsBlockText->setObjectName(QString::fromUtf8("labelRegsBlockText"));
        labelRegsBlockText->setFrameShape(QFrame::Panel);
        labelRegsBlockText->setFrameShadow(QFrame::Sunken);
        labelRegsBlockText->setText(QString::fromUtf8("<regs>"));

        gridLayout_5->addWidget(labelRegsBlockText, 7, 1, 1, 1);

        labelThreadsBlock = new QLabel(tabCore);
        labelThreadsBlock->setObjectName(QString::fromUtf8("labelThreadsBlock"));
        labelThreadsBlock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelThreadsBlock, 8, 0, 1, 1);

        labelThreadsDim = new QLabel(tabCore);
        labelThreadsDim->setObjectName(QString::fromUtf8("labelThreadsDim"));
        labelThreadsDim->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelThreadsDim, 9, 0, 1, 1);

        labelThreadsDimText = new QLabel(tabCore);
        labelThreadsDimText->setObjectName(QString::fromUtf8("labelThreadsDimText"));
        labelThreadsDimText->setFrameShape(QFrame::Panel);
        labelThreadsDimText->setFrameShadow(QFrame::Sunken);
        labelThreadsDimText->setText(QString::fromUtf8("<X>x<Y>x<Z>"));

        gridLayout_5->addWidget(labelThreadsDimText, 9, 1, 1, 1);

        labelGridDim = new QLabel(tabCore);
        labelGridDim->setObjectName(QString::fromUtf8("labelGridDim"));
        labelGridDim->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelGridDim, 10, 0, 1, 1);

        labelGridDimText = new QLabel(tabCore);
        labelGridDimText->setObjectName(QString::fromUtf8("labelGridDimText"));
        labelGridDimText->setFrameShape(QFrame::Panel);
        labelGridDimText->setFrameShadow(QFrame::Sunken);
        labelGridDimText->setText(QString::fromUtf8("<X>x<Y>x<Z>"));

        gridLayout_5->addWidget(labelGridDimText, 10, 1, 1, 1);

        labelWatchdog = new QLabel(tabCore);
        labelWatchdog->setObjectName(QString::fromUtf8("labelWatchdog"));
        labelWatchdog->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelWatchdog, 11, 0, 1, 1);

        labelWatchdogText = new QLabel(tabCore);
        labelWatchdogText->setObjectName(QString::fromUtf8("labelWatchdogText"));
        labelWatchdogText->setFrameShape(QFrame::Panel);
        labelWatchdogText->setFrameShadow(QFrame::Sunken);
        labelWatchdogText->setText(QString::fromUtf8("<yes/no>"));

        gridLayout_5->addWidget(labelWatchdogText, 11, 1, 1, 1);

        labelIntegrated = new QLabel(tabCore);
        labelIntegrated->setObjectName(QString::fromUtf8("labelIntegrated"));
        labelIntegrated->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelIntegrated, 12, 0, 1, 1);

        labelIntegratedText = new QLabel(tabCore);
        labelIntegratedText->setObjectName(QString::fromUtf8("labelIntegratedText"));
        labelIntegratedText->setFrameShape(QFrame::Panel);
        labelIntegratedText->setFrameShadow(QFrame::Sunken);
        labelIntegratedText->setText(QString::fromUtf8("<yes/no>"));

        gridLayout_5->addWidget(labelIntegratedText, 12, 1, 1, 1);

        labelConcurrentKernels = new QLabel(tabCore);
        labelConcurrentKernels->setObjectName(QString::fromUtf8("labelConcurrentKernels"));
        labelConcurrentKernels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelConcurrentKernels, 13, 0, 1, 1);

        labelConcurrentKernelsText = new QLabel(tabCore);
        labelConcurrentKernelsText->setObjectName(QString::fromUtf8("labelConcurrentKernelsText"));
        labelConcurrentKernelsText->setFrameShape(QFrame::Panel);
        labelConcurrentKernelsText->setFrameShadow(QFrame::Sunken);
        labelConcurrentKernelsText->setText(QString::fromUtf8("<yes/no>"));

        gridLayout_5->addWidget(labelConcurrentKernelsText, 13, 1, 1, 1);

        labelComputeMode = new QLabel(tabCore);
        labelComputeMode->setObjectName(QString::fromUtf8("labelComputeMode"));
        labelComputeMode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelComputeMode, 14, 0, 1, 1);

        labelComputeModeText = new QLabel(tabCore);
        labelComputeModeText->setObjectName(QString::fromUtf8("labelComputeModeText"));
        labelComputeModeText->setFrameShape(QFrame::Panel);
        labelComputeModeText->setFrameShadow(QFrame::Sunken);
        labelComputeModeText->setText(QString::fromUtf8("<mode>"));

        gridLayout_5->addWidget(labelComputeModeText, 14, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(91, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 17, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(83, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 17, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(105, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 17, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 163, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 18, 0, 1, 3);

        labelPCIInfo = new QLabel(tabCore);
        labelPCIInfo->setObjectName(QString::fromUtf8("labelPCIInfo"));
        labelPCIInfo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelPCIInfo, 3, 0, 1, 1);

        labelPCIInfoText = new QLabel(tabCore);
        labelPCIInfoText->setObjectName(QString::fromUtf8("labelPCIInfoText"));
        labelPCIInfoText->setFrameShape(QFrame::Panel);
        labelPCIInfoText->setFrameShadow(QFrame::Sunken);
        labelPCIInfoText->setText(QString::fromUtf8("<Domain:ID:Loc>"));
        labelPCIInfoText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelPCIInfoText, 3, 1, 1, 1);

        labelStreamPriorities = new QLabel(tabCore);
        labelStreamPriorities->setObjectName(QString::fromUtf8("labelStreamPriorities"));
        labelStreamPriorities->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelStreamPriorities, 16, 0, 1, 1);

        labelStreamPrioritiesText = new QLabel(tabCore);
        labelStreamPrioritiesText->setObjectName(QString::fromUtf8("labelStreamPrioritiesText"));
        labelStreamPrioritiesText->setFrameShape(QFrame::Panel);
        labelStreamPrioritiesText->setFrameShadow(QFrame::Sunken);
        labelStreamPrioritiesText->setText(QString::fromUtf8("<yes/no>"));

        gridLayout_5->addWidget(labelStreamPrioritiesText, 16, 1, 1, 1);

        labelRtDllVersionText = new QLabel(tabCore);
        labelRtDllVersionText->setObjectName(QString::fromUtf8("labelRtDllVersionText"));
        labelRtDllVersionText->setFrameShape(QFrame::Panel);
        labelRtDllVersionText->setFrameShadow(QFrame::Sunken);
        labelRtDllVersionText->setText(QString::fromUtf8("<ver>"));
        labelRtDllVersionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelRtDllVersionText, 16, 2, 1, 1);

        labelRtDllVersion = new QLabel(tabCore);
        labelRtDllVersion->setObjectName(QString::fromUtf8("labelRtDllVersion"));
        labelRtDllVersion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelRtDllVersion, 14, 2, 1, 1);

        labelDrvDllVersionText = new QLabel(tabCore);
        labelDrvDllVersionText->setObjectName(QString::fromUtf8("labelDrvDllVersionText"));
        labelDrvDllVersionText->setFrameShape(QFrame::Panel);
        labelDrvDllVersionText->setFrameShadow(QFrame::Sunken);
        labelDrvDllVersionText->setText(QString::fromUtf8("<ver>"));
        labelDrvDllVersionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelDrvDllVersionText, 13, 2, 1, 1);

        labelDrvDllVersion = new QLabel(tabCore);
        labelDrvDllVersion->setObjectName(QString::fromUtf8("labelDrvDllVersion"));
        labelDrvDllVersion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelDrvDllVersion, 12, 2, 1, 1);

        labelDrvVersionText = new QLabel(tabCore);
        labelDrvVersionText->setObjectName(QString::fromUtf8("labelDrvVersionText"));
        labelDrvVersionText->setFrameShape(QFrame::Panel);
        labelDrvVersionText->setFrameShadow(QFrame::Sunken);
        labelDrvVersionText->setText(QString::fromUtf8("<ver/TCC>"));
        labelDrvVersionText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelDrvVersionText, 11, 2, 1, 1);

        labelDrvVersion = new QLabel(tabCore);
        labelDrvVersion->setObjectName(QString::fromUtf8("labelDrvVersion"));
        labelDrvVersion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelDrvVersion, 10, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(13, 94, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        labelDeviceLogo = new QLabel(tabCore);
        labelDeviceLogo->setObjectName(QString::fromUtf8("labelDeviceLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDeviceLogo->sizePolicy().hasHeightForWidth());
        labelDeviceLogo->setSizePolicy(sizePolicy);
        labelDeviceLogo->setFrameShape(QFrame::Panel);
        labelDeviceLogo->setFrameShadow(QFrame::Sunken);
        labelDeviceLogo->setPixmap(QPixmap(QString::fromUtf8(":/img/logo-unknown.png")));
        labelDeviceLogo->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelDeviceLogo, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(98, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 1, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout_2, 0, 2, 10, 1);

        tabInfo->addTab(tabCore, QString());
        tabMemory = new QWidget();
        tabMemory->setObjectName(QString::fromUtf8("tabMemory"));
        gridLayout = new QGridLayout(tabMemory);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelTotalGlobal = new QLabel(tabMemory);
        labelTotalGlobal->setObjectName(QString::fromUtf8("labelTotalGlobal"));
        labelTotalGlobal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotalGlobal, 0, 0, 1, 1);

        labelTotalGlobalText = new QLabel(tabMemory);
        labelTotalGlobalText->setObjectName(QString::fromUtf8("labelTotalGlobalText"));
        labelTotalGlobalText->setFrameShape(QFrame::Panel);
        labelTotalGlobalText->setFrameShadow(QFrame::Sunken);
        labelTotalGlobalText->setText(QString::fromUtf8("<size MB>"));
        labelTotalGlobalText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelTotalGlobalText, 0, 1, 1, 1);

        labelMemClock = new QLabel(tabMemory);
        labelMemClock->setObjectName(QString::fromUtf8("labelMemClock"));
        labelMemClock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMemClock, 3, 0, 1, 1);

        labelMemClockText = new QLabel(tabMemory);
        labelMemClockText->setObjectName(QString::fromUtf8("labelMemClockText"));
        labelMemClockText->setFrameShape(QFrame::Panel);
        labelMemClockText->setFrameShadow(QFrame::Sunken);
        labelMemClockText->setText(QString::fromUtf8("<clock MHz>"));

        gridLayout->addWidget(labelMemClockText, 3, 1, 1, 1);

        labelShared = new QLabel(tabMemory);
        labelShared->setObjectName(QString::fromUtf8("labelShared"));
        labelShared->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelShared, 8, 0, 1, 1);

        labelSharedText = new QLabel(tabMemory);
        labelSharedText->setObjectName(QString::fromUtf8("labelSharedText"));
        labelSharedText->setFrameShape(QFrame::Panel);
        labelSharedText->setFrameShadow(QFrame::Sunken);
        labelSharedText->setText(QString::fromUtf8("<size KB>"));
        labelSharedText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelSharedText, 8, 1, 1, 1);

        labelPitch = new QLabel(tabMemory);
        labelPitch->setObjectName(QString::fromUtf8("labelPitch"));
        labelPitch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelPitch, 9, 0, 1, 1);

        labelPitchText = new QLabel(tabMemory);
        labelPitchText->setObjectName(QString::fromUtf8("labelPitchText"));
        labelPitchText->setFrameShape(QFrame::Panel);
        labelPitchText->setFrameShadow(QFrame::Sunken);
        labelPitchText->setText(QString::fromUtf8("<size KB>"));
        labelPitchText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelPitchText, 9, 1, 1, 1);

        labelTotalConst = new QLabel(tabMemory);
        labelTotalConst->setObjectName(QString::fromUtf8("labelTotalConst"));
        labelTotalConst->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTotalConst, 10, 0, 1, 1);

        labelTotalConstText = new QLabel(tabMemory);
        labelTotalConstText->setObjectName(QString::fromUtf8("labelTotalConstText"));
        labelTotalConstText->setFrameShape(QFrame::Panel);
        labelTotalConstText->setFrameShadow(QFrame::Sunken);
        labelTotalConstText->setText(QString::fromUtf8("<size KB>"));
        labelTotalConstText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelTotalConstText, 10, 1, 1, 1);

        labelTextureAlign = new QLabel(tabMemory);
        labelTextureAlign->setObjectName(QString::fromUtf8("labelTextureAlign"));
        labelTextureAlign->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTextureAlign, 11, 0, 1, 1);

        labelTextureAlignText = new QLabel(tabMemory);
        labelTextureAlignText->setObjectName(QString::fromUtf8("labelTextureAlignText"));
        labelTextureAlignText->setFrameShape(QFrame::Panel);
        labelTextureAlignText->setFrameShadow(QFrame::Sunken);
        labelTextureAlignText->setText(QString::fromUtf8("<size>"));
        labelTextureAlignText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelTextureAlignText, 11, 1, 1, 1);

        labelTexture1D = new QLabel(tabMemory);
        labelTexture1D->setObjectName(QString::fromUtf8("labelTexture1D"));
        labelTexture1D->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTexture1D, 12, 0, 1, 1);

        labelTexture1DText = new QLabel(tabMemory);
        labelTexture1DText->setObjectName(QString::fromUtf8("labelTexture1DText"));
        labelTexture1DText->setFrameShape(QFrame::Panel);
        labelTexture1DText->setFrameShadow(QFrame::Sunken);
        labelTexture1DText->setText(QString::fromUtf8("<size>"));
        labelTexture1DText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelTexture1DText, 12, 1, 1, 1);

        labelTexture2D = new QLabel(tabMemory);
        labelTexture2D->setObjectName(QString::fromUtf8("labelTexture2D"));
        labelTexture2D->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTexture2D, 13, 0, 1, 1);

        labelTexture2DText = new QLabel(tabMemory);
        labelTexture2DText->setObjectName(QString::fromUtf8("labelTexture2DText"));
        labelTexture2DText->setFrameShape(QFrame::Panel);
        labelTexture2DText->setFrameShadow(QFrame::Sunken);
        labelTexture2DText->setText(QString::fromUtf8("<size>x<size>"));
        labelTexture2DText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelTexture2DText, 13, 1, 1, 1);

        labelTexture3D = new QLabel(tabMemory);
        labelTexture3D->setObjectName(QString::fromUtf8("labelTexture3D"));
        labelTexture3D->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelTexture3D, 14, 0, 1, 1);

        labelTexture3DText = new QLabel(tabMemory);
        labelTexture3DText->setObjectName(QString::fromUtf8("labelTexture3DText"));
        labelTexture3DText->setFrameShape(QFrame::Panel);
        labelTexture3DText->setFrameShadow(QFrame::Sunken);
        labelTexture3DText->setText(QString::fromUtf8("<size>x<size>x<size>"));
        labelTexture3DText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelTexture3DText, 14, 1, 1, 1);

        labelGpuOverlap = new QLabel(tabMemory);
        labelGpuOverlap->setObjectName(QString::fromUtf8("labelGpuOverlap"));
        labelGpuOverlap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelGpuOverlap, 15, 0, 1, 1);

        labelGpuOverlapText = new QLabel(tabMemory);
        labelGpuOverlapText->setObjectName(QString::fromUtf8("labelGpuOverlapText"));
        labelGpuOverlapText->setFrameShape(QFrame::Panel);
        labelGpuOverlapText->setFrameShadow(QFrame::Sunken);
        labelGpuOverlapText->setText(QString::fromUtf8("<yes/no>"));
        labelGpuOverlapText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelGpuOverlapText, 15, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(132, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 21, 0, 1, 2);

        labelL2CasheSize = new QLabel(tabMemory);
        labelL2CasheSize->setObjectName(QString::fromUtf8("labelL2CasheSize"));
        labelL2CasheSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelL2CasheSize, 6, 0, 1, 1);

        labelL2CasheSizeText = new QLabel(tabMemory);
        labelL2CasheSizeText->setObjectName(QString::fromUtf8("labelL2CasheSizeText"));
        labelL2CasheSizeText->setFrameShape(QFrame::Panel);
        labelL2CasheSizeText->setFrameShadow(QFrame::Sunken);
        labelL2CasheSizeText->setText(QString::fromUtf8("<size KB>"));

        gridLayout->addWidget(labelL2CasheSizeText, 6, 1, 1, 1);

        labelBusWidth = new QLabel(tabMemory);
        labelBusWidth->setObjectName(QString::fromUtf8("labelBusWidth"));
        labelBusWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelBusWidth, 1, 0, 1, 1);

        labelBusWidthText = new QLabel(tabMemory);
        labelBusWidthText->setObjectName(QString::fromUtf8("labelBusWidthText"));
        labelBusWidthText->setFrameShape(QFrame::Panel);
        labelBusWidthText->setFrameShadow(QFrame::Sunken);
        labelBusWidthText->setText(QString::fromUtf8("<bits>"));
        labelBusWidthText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelBusWidthText, 1, 1, 1, 1);

        labelErrorCorrection = new QLabel(tabMemory);
        labelErrorCorrection->setObjectName(QString::fromUtf8("labelErrorCorrection"));
        labelErrorCorrection->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelErrorCorrection, 5, 0, 1, 1);

        labelErrorCorrectionText = new QLabel(tabMemory);
        labelErrorCorrectionText->setObjectName(QString::fromUtf8("labelErrorCorrectionText"));
        labelErrorCorrectionText->setFrameShape(QFrame::Panel);
        labelErrorCorrectionText->setFrameShadow(QFrame::Sunken);
        labelErrorCorrectionText->setText(QString::fromUtf8("<yes/no>"));
        labelErrorCorrectionText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelErrorCorrectionText, 5, 1, 1, 1);

        labelAsyncEngine = new QLabel(tabMemory);
        labelAsyncEngine->setObjectName(QString::fromUtf8("labelAsyncEngine"));
        labelAsyncEngine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAsyncEngine, 19, 0, 1, 1);

        labelAsyncEngineText = new QLabel(tabMemory);
        labelAsyncEngineText->setObjectName(QString::fromUtf8("labelAsyncEngineText"));
        labelAsyncEngineText->setFrameShape(QFrame::Panel);
        labelAsyncEngineText->setFrameShadow(QFrame::Sunken);
        labelAsyncEngineText->setText(QString::fromUtf8("<yes/no/type>"));
        labelAsyncEngineText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelAsyncEngineText, 19, 1, 1, 1);

        labelMapHostMemory = new QLabel(tabMemory);
        labelMapHostMemory->setObjectName(QString::fromUtf8("labelMapHostMemory"));
        labelMapHostMemory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMapHostMemory, 16, 0, 1, 1);

        labelMapHostMemoryText = new QLabel(tabMemory);
        labelMapHostMemoryText->setObjectName(QString::fromUtf8("labelMapHostMemoryText"));
        labelMapHostMemoryText->setFrameShape(QFrame::Panel);
        labelMapHostMemoryText->setFrameShadow(QFrame::Sunken);
        labelMapHostMemoryText->setText(QString::fromUtf8("<yes/no>"));
        labelMapHostMemoryText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelMapHostMemoryText, 16, 1, 1, 1);

        labelUnifiedAddressing = new QLabel(tabMemory);
        labelUnifiedAddressing->setObjectName(QString::fromUtf8("labelUnifiedAddressing"));
        labelUnifiedAddressing->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelUnifiedAddressing, 18, 0, 1, 1);

        labelUnifiedAddressingText = new QLabel(tabMemory);
        labelUnifiedAddressingText->setObjectName(QString::fromUtf8("labelUnifiedAddressingText"));
        labelUnifiedAddressingText->setFrameShape(QFrame::Panel);
        labelUnifiedAddressingText->setFrameShadow(QFrame::Sunken);
        labelUnifiedAddressingText->setText(QString::fromUtf8("<yes/no>"));
        labelUnifiedAddressingText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(labelUnifiedAddressingText, 18, 1, 1, 1);

        tabInfo->addTab(tabMemory, QString());
        tabPerformance = new QWidget();
        tabPerformance->setObjectName(QString::fromUtf8("tabPerformance"));
        gridLayout_4 = new QGridLayout(tabPerformance);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelMemRate = new QLabel(tabPerformance);
        labelMemRate->setObjectName(QString::fromUtf8("labelMemRate"));
        labelMemRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelMemRate, 0, 0, 1, 1);

        labelRatePin = new QLabel(tabPerformance);
        labelRatePin->setObjectName(QString::fromUtf8("labelRatePin"));
        labelRatePin->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelRatePin, 0, 1, 1, 1);

        labelRatePage = new QLabel(tabPerformance);
        labelRatePage->setObjectName(QString::fromUtf8("labelRatePage"));
        labelRatePage->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelRatePage, 0, 2, 1, 1);

        labelHDRate = new QLabel(tabPerformance);
        labelHDRate->setObjectName(QString::fromUtf8("labelHDRate"));
        labelHDRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelHDRate, 1, 0, 1, 1);

        labelHDRatePinText = new QLabel(tabPerformance);
        labelHDRatePinText->setObjectName(QString::fromUtf8("labelHDRatePinText"));
        labelHDRatePinText->setFrameShape(QFrame::Panel);
        labelHDRatePinText->setFrameShadow(QFrame::Sunken);
        labelHDRatePinText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelHDRatePinText, 1, 1, 1, 1);

        labelHDRatePageText = new QLabel(tabPerformance);
        labelHDRatePageText->setObjectName(QString::fromUtf8("labelHDRatePageText"));
        labelHDRatePageText->setFrameShape(QFrame::Panel);
        labelHDRatePageText->setFrameShadow(QFrame::Sunken);
        labelHDRatePageText->setText(QString::fromUtf8("<rate MB/s>"));
        labelHDRatePageText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelHDRatePageText, 1, 2, 1, 1);

        labelDHRate = new QLabel(tabPerformance);
        labelDHRate->setObjectName(QString::fromUtf8("labelDHRate"));
        labelDHRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelDHRate, 2, 0, 1, 1);

        labelDHRatePinText = new QLabel(tabPerformance);
        labelDHRatePinText->setObjectName(QString::fromUtf8("labelDHRatePinText"));
        labelDHRatePinText->setFrameShape(QFrame::Panel);
        labelDHRatePinText->setFrameShadow(QFrame::Sunken);
        labelDHRatePinText->setText(QString::fromUtf8("<rate MB/s>"));
        labelDHRatePinText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelDHRatePinText, 2, 1, 1, 1);

        labelDHRatePageText = new QLabel(tabPerformance);
        labelDHRatePageText->setObjectName(QString::fromUtf8("labelDHRatePageText"));
        labelDHRatePageText->setFrameShape(QFrame::Panel);
        labelDHRatePageText->setFrameShadow(QFrame::Sunken);
        labelDHRatePageText->setText(QString::fromUtf8("<rate MB/s>"));
        labelDHRatePageText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelDHRatePageText, 2, 2, 1, 1);

        labelDDRate = new QLabel(tabPerformance);
        labelDDRate->setObjectName(QString::fromUtf8("labelDDRate"));
        labelDDRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelDDRate, 3, 0, 1, 1);

        labelDDRateText = new QLabel(tabPerformance);
        labelDDRateText->setObjectName(QString::fromUtf8("labelDDRateText"));
        labelDDRateText->setFrameShape(QFrame::Panel);
        labelDDRateText->setFrameShadow(QFrame::Sunken);
        labelDDRateText->setText(QString::fromUtf8("<rate MB/s>"));
        labelDDRateText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelDDRateText, 3, 1, 1, 2);

        labelCalcRate = new QLabel(tabPerformance);
        labelCalcRate->setObjectName(QString::fromUtf8("labelCalcRate"));
        labelCalcRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelCalcRate, 4, 0, 1, 1);

        labelFloatRate = new QLabel(tabPerformance);
        labelFloatRate->setObjectName(QString::fromUtf8("labelFloatRate"));
        labelFloatRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelFloatRate, 5, 0, 1, 1);

        labelFloatRateText = new QLabel(tabPerformance);
        labelFloatRateText->setObjectName(QString::fromUtf8("labelFloatRateText"));
        labelFloatRateText->setFrameShape(QFrame::Panel);
        labelFloatRateText->setFrameShadow(QFrame::Sunken);
        labelFloatRateText->setText(QString::fromUtf8("<rate Mflop/s>"));
        labelFloatRateText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelFloatRateText, 5, 1, 1, 2);

        labelDoubleRate = new QLabel(tabPerformance);
        labelDoubleRate->setObjectName(QString::fromUtf8("labelDoubleRate"));
        labelDoubleRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelDoubleRate, 6, 0, 1, 1);

        labelDoubleRateText = new QLabel(tabPerformance);
        labelDoubleRateText->setObjectName(QString::fromUtf8("labelDoubleRateText"));
        labelDoubleRateText->setFrameShape(QFrame::Panel);
        labelDoubleRateText->setFrameShadow(QFrame::Sunken);
        labelDoubleRateText->setText(QString::fromUtf8("<rate Mflop/s>"));
        labelDoubleRateText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelDoubleRateText, 6, 1, 1, 2);

        labelInt24Rate = new QLabel(tabPerformance);
        labelInt24Rate->setObjectName(QString::fromUtf8("labelInt24Rate"));
        labelInt24Rate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelInt24Rate, 7, 0, 1, 1);

        labelInt24RateText = new QLabel(tabPerformance);
        labelInt24RateText->setObjectName(QString::fromUtf8("labelInt24RateText"));
        labelInt24RateText->setFrameShape(QFrame::Panel);
        labelInt24RateText->setFrameShadow(QFrame::Sunken);
        labelInt24RateText->setText(QString::fromUtf8("<rate Miop/s>"));
        labelInt24RateText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelInt24RateText, 7, 1, 1, 2);

        labelInt8Rate = new QLabel(tabPerformance);
        labelInt8Rate->setObjectName(QString::fromUtf8("labelInt8Rate"));
        labelInt8Rate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(labelInt8Rate, 8, 0, 1, 1);

        labelInt8RateText = new QLabel(tabPerformance);
        labelInt8RateText->setObjectName(QString::fromUtf8("labelInt8RateText"));
        labelInt8RateText->setFrameShape(QFrame::Panel);
        labelInt8RateText->setFrameShadow(QFrame::Sunken);
        labelInt8RateText->setText(QString::fromUtf8("<rate Miop/s>"));
        labelInt8RateText->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(labelInt8RateText, 8, 1, 1, 2);

        verticalSpacer_6 = new QSpacerItem(273, 110, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_6, 11, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkUpdateResults = new QCheckBox(tabPerformance);
        checkUpdateResults->setObjectName(QString::fromUtf8("checkUpdateResults"));
        checkUpdateResults->setChecked(true);

        verticalLayout_4->addWidget(checkUpdateResults);

        checkHeavyMode = new QCheckBox(tabPerformance);
        checkHeavyMode->setObjectName(QString::fromUtf8("checkHeavyMode"));
        checkHeavyMode->setChecked(false);

        verticalLayout_4->addWidget(checkHeavyMode);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushExport = new QPushButton(tabPerformance);
        pushExport->setObjectName(QString::fromUtf8("pushExport"));
        pushExport->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushExport);


        gridLayout_4->addLayout(horizontalLayout_3, 12, 0, 1, 3);

        tabInfo->addTab(tabPerformance, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelAppLogo = new QLabel(tabAbout);
        labelAppLogo->setObjectName(QString::fromUtf8("labelAppLogo"));
        labelAppLogo->setPixmap(QPixmap(QString::fromUtf8(":/img/logo.png")));

        verticalLayout_3->addWidget(labelAppLogo);

        labelAppName = new QLabel(tabAbout);
        labelAppName->setObjectName(QString::fromUtf8("labelAppName"));
        labelAppName->setText(QString::fromUtf8("<name>"));

        verticalLayout_3->addWidget(labelAppName);

        labelAppVersion = new QLabel(tabAbout);
        labelAppVersion->setObjectName(QString::fromUtf8("labelAppVersion"));
        labelAppVersion->setText(QString::fromUtf8("<version>"));

        verticalLayout_3->addWidget(labelAppVersion);

        labelAppURL = new QLabel(tabAbout);
        labelAppURL->setObjectName(QString::fromUtf8("labelAppURL"));
        labelAppURL->setText(QString::fromUtf8("<urls>"));
        labelAppURL->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(labelAppURL);

        labelAppAuthor = new QLabel(tabAbout);
        labelAppAuthor->setObjectName(QString::fromUtf8("labelAppAuthor"));
        labelAppAuthor->setText(QString::fromUtf8("<author>"));

        verticalLayout_3->addWidget(labelAppAuthor);

        labelAppCopy = new QLabel(tabAbout);
        labelAppCopy->setObjectName(QString::fromUtf8("labelAppCopy"));
        labelAppCopy->setWordWrap(true);
        labelAppCopy->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(labelAppCopy);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelAppUpdateImg = new QLabel(tabAbout);
        labelAppUpdateImg->setObjectName(QString::fromUtf8("labelAppUpdateImg"));
        labelAppUpdateImg->setMaximumSize(QSize(16, 16));
        labelAppUpdateImg->setText(QString::fromUtf8(""));
        labelAppUpdateImg->setPixmap(QPixmap(QString::fromUtf8(":/img/upd-info.png")));

        horizontalLayout_4->addWidget(labelAppUpdateImg);

        labelAppUpdate = new QLabel(tabAbout);
        labelAppUpdate->setObjectName(QString::fromUtf8("labelAppUpdate"));
        labelAppUpdate->setText(QString::fromUtf8("<update>"));
        labelAppUpdate->setWordWrap(true);
        labelAppUpdate->setOpenExternalLinks(true);

        horizontalLayout_4->addWidget(labelAppUpdate);

        pushUpdate = new QPushButton(tabAbout);
        pushUpdate->setObjectName(QString::fromUtf8("pushUpdate"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushUpdate->sizePolicy().hasHeightForWidth());
        pushUpdate->setSizePolicy(sizePolicy1);
        pushUpdate->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/upd-update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushUpdate->setIcon(icon1);
        pushUpdate->setAutoDefault(false);

        horizontalLayout_4->addWidget(pushUpdate);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 77, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        tabInfo->addTab(tabAbout, QString());

        verticalLayout->addWidget(tabInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboDevice = new QComboBox(CZDialog);
        comboDevice->setObjectName(QString::fromUtf8("comboDevice"));
        comboDevice->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(comboDevice);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushOk = new QPushButton(CZDialog);
        pushOk->setObjectName(QString::fromUtf8("pushOk"));

        horizontalLayout->addWidget(pushOk);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboDevice, pushOk);

        retranslateUi(CZDialog);
        QObject::connect(pushOk, SIGNAL(clicked()), CZDialog, SLOT(accept()));
        QObject::connect(checkUpdateResults, SIGNAL(clicked(bool)), checkHeavyMode, SLOT(setEnabled(bool)));

        tabInfo->setCurrentIndex(0);
        pushOk->setDefault(true);


        QMetaObject::connectSlotsByName(CZDialog);
    } // setupUi

    void retranslateUi(QDialog *CZDialog)
    {
        CZDialog->setWindowTitle(QString());
        labelName->setText(QApplication::translate("CZDialog", "Name", nullptr));
        labelThreadsMulti->setText(QApplication::translate("CZDialog", "Threads Per Multiproc.", nullptr));
        labelCapability->setText(QApplication::translate("CZDialog", "Compute Capability", nullptr));
        labelClock->setText(QApplication::translate("CZDialog", "Clock Rate", nullptr));
        labelMultiProc->setText(QApplication::translate("CZDialog", "Multiprocessors", nullptr));
        labelWarp->setText(QApplication::translate("CZDialog", "Warp Size", nullptr));
        labelRegsBlock->setText(QApplication::translate("CZDialog", "Regs Per Block", nullptr));
        labelThreadsBlock->setText(QApplication::translate("CZDialog", "Threads Per Block", nullptr));
        labelThreadsDim->setText(QApplication::translate("CZDialog", "Threads Dimensions", nullptr));
        labelGridDim->setText(QApplication::translate("CZDialog", "Grid Dimensions", nullptr));
        labelWatchdog->setText(QApplication::translate("CZDialog", "Watchdog Enabled", nullptr));
        labelIntegrated->setText(QApplication::translate("CZDialog", "Integrated GPU", nullptr));
        labelConcurrentKernels->setText(QApplication::translate("CZDialog", "Concurrent Kernels", nullptr));
        labelComputeMode->setText(QApplication::translate("CZDialog", "Compute Mode", nullptr));
        labelPCIInfo->setText(QApplication::translate("CZDialog", "PCI Location", nullptr));
        labelStreamPriorities->setText(QApplication::translate("CZDialog", "Stream Priorities", nullptr));
        labelRtDllVersion->setText(QApplication::translate("CZDialog", "Runtime Dll Version", nullptr));
        labelDrvDllVersion->setText(QApplication::translate("CZDialog", "Driver Dll Version", nullptr));
        labelDrvVersion->setText(QApplication::translate("CZDialog", "Driver Version", nullptr));
        labelDeviceLogo->setText(QString());
        tabInfo->setTabText(tabInfo->indexOf(tabCore), QApplication::translate("CZDialog", "Core", nullptr));
        labelTotalGlobal->setText(QApplication::translate("CZDialog", "Total Global", nullptr));
        labelMemClock->setText(QApplication::translate("CZDialog", "Clock Rate", nullptr));
        labelShared->setText(QApplication::translate("CZDialog", "Shared Per Block", nullptr));
        labelPitch->setText(QApplication::translate("CZDialog", "Pitch", nullptr));
        labelTotalConst->setText(QApplication::translate("CZDialog", "Total Constant", nullptr));
        labelTextureAlign->setText(QApplication::translate("CZDialog", "Texture Alignment", nullptr));
        labelTexture1D->setText(QApplication::translate("CZDialog", "Texture 1D Size", nullptr));
        labelTexture2D->setText(QApplication::translate("CZDialog", "Texture 2D Size", nullptr));
        labelTexture3D->setText(QApplication::translate("CZDialog", "Texture 3D Size", nullptr));
        labelGpuOverlap->setText(QApplication::translate("CZDialog", "GPU Overlap", nullptr));
        labelL2CasheSize->setText(QApplication::translate("CZDialog", "L2 Cache Size", nullptr));
        labelBusWidth->setText(QApplication::translate("CZDialog", "Bus Width", nullptr));
        labelErrorCorrection->setText(QApplication::translate("CZDialog", "Error Correction", nullptr));
        labelAsyncEngine->setText(QApplication::translate("CZDialog", "Async Engine", nullptr));
        labelMapHostMemory->setText(QApplication::translate("CZDialog", "Map Host Memory", nullptr));
        labelUnifiedAddressing->setText(QApplication::translate("CZDialog", "Unified Addressing", nullptr));
        tabInfo->setTabText(tabInfo->indexOf(tabMemory), QApplication::translate("CZDialog", "Memory", nullptr));
        labelMemRate->setText(QApplication::translate("CZDialog", "Memory Copy", nullptr));
        labelRatePin->setText(QApplication::translate("CZDialog", "Pinned", nullptr));
        labelRatePage->setText(QApplication::translate("CZDialog", "Pageable", nullptr));
        labelHDRate->setText(QApplication::translate("CZDialog", "Host to Device", nullptr));
        labelHDRatePinText->setText(QApplication::translate("CZDialog", "<rate MB/s>", nullptr));
        labelDHRate->setText(QApplication::translate("CZDialog", "Device to Host", nullptr));
        labelDDRate->setText(QApplication::translate("CZDialog", "Device to Device", nullptr));
        labelCalcRate->setText(QApplication::translate("CZDialog", "GPU Core Performance", nullptr));
        labelFloatRate->setText(QApplication::translate("CZDialog", "Single-precision Float", nullptr));
        labelDoubleRate->setText(QApplication::translate("CZDialog", "Double-precision Float", nullptr));
        labelInt24Rate->setText(QApplication::translate("CZDialog", "24-bit Integer", nullptr));
        labelInt8Rate->setText(QApplication::translate("CZDialog", "8-bit Integer", nullptr));
        checkUpdateResults->setText(QApplication::translate("CZDialog", "&Update Results in Background", nullptr));
        checkHeavyMode->setText(QApplication::translate("CZDialog", "&Heavy Load Test Mode", nullptr));
        pushExport->setText(QApplication::translate("CZDialog", "&Export >>", nullptr));
        tabInfo->setTabText(tabInfo->indexOf(tabPerformance), QApplication::translate("CZDialog", "Performance", nullptr));
        labelAppLogo->setText(QString());
        labelAppCopy->setText(QApplication::translate("CZDialog", "<copyrights>", nullptr));
        tabInfo->setTabText(tabInfo->indexOf(tabAbout), QApplication::translate("CZDialog", "About", nullptr));
        pushOk->setText(QApplication::translate("CZDialog", "&OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CZDialog: public Ui_CZDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CZDIALOG_H
