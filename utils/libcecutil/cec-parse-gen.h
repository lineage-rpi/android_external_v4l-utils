enum cec_parse_options {
	OptMessages = 255,
	OptActiveSource,
	OptImageViewOn,
	OptTextViewOn,
	OptInactiveSource,
	OptRequestActiveSource,
	OptRoutingInformation,
	OptRoutingChange,
	OptSetStreamPath,
	OptStandby,
	OptRecordOff,
	OptRecordOnOwn,
	OptRecordOnDigital,
	OptRecordOnAnalog,
	OptRecordOnPlug,
	OptRecordOnPhysAddr,
	OptRecordStatus,
	OptRecordTvScreen,
	OptTimerStatus,
	OptTimerClearedStatus,
	OptClearAnalogueTimer,
	OptClearDigitalTimer,
	OptClearExtTimer,
	OptSetAnalogueTimer,
	OptSetDigitalTimer,
	OptSetExtTimer,
	OptSetTimerProgramTitle,
	OptCecVersion,
	OptGetCecVersion,
	OptReportPhysicalAddr,
	OptGivePhysicalAddr,
	OptSetMenuLanguage,
	OptGetMenuLanguage,
	OptReportFeatures,
	OptGiveFeatures,
	OptDeckControl,
	OptDeckStatus,
	OptGiveDeckStatus,
	OptPlay,
	OptTunerDeviceStatusAnalog,
	OptTunerDeviceStatusDigital,
	OptGiveTunerDeviceStatus,
	OptSelectAnalogueService,
	OptSelectDigitalService,
	OptTunerStepDecrement,
	OptTunerStepIncrement,
	OptDeviceVendorId,
	OptGiveDeviceVendorId,
	OptVendorRemoteButtonUp,
	OptSetOsdString,
	OptSetOsdName,
	OptGiveOsdName,
	OptMenuStatus,
	OptMenuRequest,
	OptUserControlPressed,
	OptUserControlReleased,
	OptReportPowerStatus,
	OptGiveDevicePowerStatus,
	OptFeatureAbort,
	OptAbort,
	OptReportAudioStatus,
	OptGiveAudioStatus,
	OptSetSystemAudioMode,
	OptSystemAudioModeRequest,
	OptSystemAudioModeStatus,
	OptGiveSystemAudioModeStatus,
	OptReportShortAudioDescriptor,
	OptRequestShortAudioDescriptor,
	OptSetAudioRate,
	OptReportArcInitiated,
	OptInitiateArc,
	OptRequestArcInitiation,
	OptReportArcTerminated,
	OptTerminateArc,
	OptRequestArcTermination,
	OptReportCurrentLatency,
	OptRequestCurrentLatency,
	OptCdcHecInquireState,
	OptCdcHecReportState,
	OptCdcHecSetState,
	OptCdcHecSetStateAdjacent,
	OptCdcHecRequestDeactivation,
	OptCdcHecNotifyAlive,
	OptCdcHecDiscover,
	OptCdcHpdSetState,
	OptCdcHpdReportState,
	OptHtngTuner_1partChan,
	OptHtngTuner_2partChan,
	OptHtngInputSelAv,
	OptHtngInputSelPc,
	OptHtngInputSelHdmi,
	OptHtngInputSelComponent,
	OptHtngInputSelDvi,
	OptHtngInputSelDp,
	OptHtngInputSelUsb,
	OptHtngSetDefPwrOnInputSrc,
	OptHtngSetTvSpeakers,
	OptHtngSetDigAudio,
	OptHtngSetAnaAudio,
	OptHtngSetDefPwrOnVol,
	OptHtngSetMaxVol,
	OptHtngSetMinVol,
	OptHtngSetBlueScreen,
	OptHtngSetBrightness,
	OptHtngSetColor,
	OptHtngSetContrast,
	OptHtngSetSharpness,
	OptHtngSetHue,
	OptHtngSetLedBacklight,
	OptHtngSetTvOsdControl,
	OptHtngSetAudioOnlyDisplay,
	OptHtngSetDate,
	OptHtngSetDateFormat,
	OptHtngSetTime,
	OptHtngSetClkBrightnessStandby,
	OptHtngSetClkBrightnessOn,
	OptHtngLedControl,
	OptHtngLockTvPwrButton,
	OptHtngLockTvVolButtons,
	OptHtngLockTvChanButtons,
	OptHtngLockTvInputButtons,
	OptHtngLockTvOtherButtons,
	OptHtngLockEverything,
	OptHtngLockEverythingButPwr,
	OptHtngHotelMode,
	OptHtngSetPwrSavingProfile,
	OptHtngSetSleepTimer,
	OptHtngSetWakeupTime,
	OptHtngSetAutoOffTime,
	OptHtngSetWakeupSrc,
	OptHtngSetInitWakeupVol,
	OptHtngClrAllSleepWake,
	OptHtngGlobalDirectTuneFreq,
	OptHtngGlobalDirectTuneChan,
	OptHtngGlobalDirectTuneExtFreq,
	OptHelpAll,
	OptHelpAbort,
	OptHelpAudioRateControl,
	OptHelpAudioReturnChannelControl,
	OptHelpCapabilityDiscoveryandControl,
	OptHelpDeckControl,
	OptHelpDeviceMenuControl,
	OptHelpDeviceOSDTransfer,
	OptHelpDynamicAudioLipsync,
	OptHelpHTNG,
	OptHelpOSDDisplay,
	OptHelpOneTouchPlay,
	OptHelpOneTouchRecord,
	OptHelpPowerStatus,
	OptHelpRemoteControlPassthrough,
	OptHelpRoutingControl,
	OptHelpStandby,
	OptHelpSystemAudioControl,
	OptHelpSystemInformation,
	OptHelpTimerProgramming,
	OptHelpTunerControl,
	OptHelpVendorSpecificCommands,

	OptLast = 512
};

#define CEC_PARSE_LONG_OPTS \
	{ "active-source", required_argument, 0, OptActiveSource }, \
	{ "image-view-on", no_argument, 0, OptImageViewOn }, \
	{ "text-view-on", no_argument, 0, OptTextViewOn }, \
	{ "inactive-source", required_argument, 0, OptInactiveSource }, \
	{ "request-active-source", no_argument, 0, OptRequestActiveSource }, \
	{ "routing-information", required_argument, 0, OptRoutingInformation }, \
	{ "routing-change", required_argument, 0, OptRoutingChange }, \
	{ "set-stream-path", required_argument, 0, OptSetStreamPath }, \
	{ "standby", no_argument, 0, OptStandby }, \
	{ "record-off", no_argument, 0, OptRecordOff }, \
	{ "record-on-own", no_argument, 0, OptRecordOnOwn }, \
	{ "record-on-digital", required_argument, 0, OptRecordOnDigital }, \
	{ "record-on-analog", required_argument, 0, OptRecordOnAnalog }, \
	{ "record-on-plug", required_argument, 0, OptRecordOnPlug }, \
	{ "record-on-phys-addr", required_argument, 0, OptRecordOnPhysAddr }, \
	{ "record-status", required_argument, 0, OptRecordStatus }, \
	{ "record-tv-screen", no_argument, 0, OptRecordTvScreen }, \
	{ "timer-status", required_argument, 0, OptTimerStatus }, \
	{ "timer-cleared-status", required_argument, 0, OptTimerClearedStatus }, \
	{ "clear-analogue-timer", required_argument, 0, OptClearAnalogueTimer }, \
	{ "clear-digital-timer", required_argument, 0, OptClearDigitalTimer }, \
	{ "clear-ext-timer", required_argument, 0, OptClearExtTimer }, \
	{ "set-analogue-timer", required_argument, 0, OptSetAnalogueTimer }, \
	{ "set-digital-timer", required_argument, 0, OptSetDigitalTimer }, \
	{ "set-ext-timer", required_argument, 0, OptSetExtTimer }, \
	{ "set-timer-program-title", required_argument, 0, OptSetTimerProgramTitle }, \
	{ "cec-version", required_argument, 0, OptCecVersion }, \
	{ "get-cec-version", no_argument, 0, OptGetCecVersion }, \
	{ "report-physical-addr", required_argument, 0, OptReportPhysicalAddr }, \
	{ "give-physical-addr", no_argument, 0, OptGivePhysicalAddr }, \
	{ "set-menu-language", required_argument, 0, OptSetMenuLanguage }, \
	{ "get-menu-language", no_argument, 0, OptGetMenuLanguage }, \
	{ "report-features", required_argument, 0, OptReportFeatures }, \
	{ "give-features", no_argument, 0, OptGiveFeatures }, \
	{ "deck-control", required_argument, 0, OptDeckControl }, \
	{ "deck-status", required_argument, 0, OptDeckStatus }, \
	{ "give-deck-status", required_argument, 0, OptGiveDeckStatus }, \
	{ "play", required_argument, 0, OptPlay }, \
	{ "tuner-device-status-analog", required_argument, 0, OptTunerDeviceStatusAnalog }, \
	{ "tuner-device-status-digital", required_argument, 0, OptTunerDeviceStatusDigital }, \
	{ "give-tuner-device-status", required_argument, 0, OptGiveTunerDeviceStatus }, \
	{ "select-analogue-service", required_argument, 0, OptSelectAnalogueService }, \
	{ "select-digital-service", required_argument, 0, OptSelectDigitalService }, \
	{ "tuner-step-decrement", no_argument, 0, OptTunerStepDecrement }, \
	{ "tuner-step-increment", no_argument, 0, OptTunerStepIncrement }, \
	{ "device-vendor-id", required_argument, 0, OptDeviceVendorId }, \
	{ "give-device-vendor-id", no_argument, 0, OptGiveDeviceVendorId }, \
	{ "vendor-remote-button-up", no_argument, 0, OptVendorRemoteButtonUp }, \
	{ "set-osd-string", required_argument, 0, OptSetOsdString }, \
	{ "set-osd-name", required_argument, 0, OptSetOsdName }, \
	{ "give-osd-name", no_argument, 0, OptGiveOsdName }, \
	{ "menu-status", required_argument, 0, OptMenuStatus }, \
	{ "menu-request", required_argument, 0, OptMenuRequest }, \
	{ "user-control-pressed", required_argument, 0, OptUserControlPressed }, \
	{ "user-control-released", no_argument, 0, OptUserControlReleased }, \
	{ "report-power-status", required_argument, 0, OptReportPowerStatus }, \
	{ "give-device-power-status", no_argument, 0, OptGiveDevicePowerStatus }, \
	{ "feature-abort", required_argument, 0, OptFeatureAbort }, \
	{ "abort", no_argument, 0, OptAbort }, \
	{ "report-audio-status", required_argument, 0, OptReportAudioStatus }, \
	{ "give-audio-status", no_argument, 0, OptGiveAudioStatus }, \
	{ "set-system-audio-mode", required_argument, 0, OptSetSystemAudioMode }, \
	{ "system-audio-mode-request", required_argument, 0, OptSystemAudioModeRequest }, \
	{ "system-audio-mode-status", required_argument, 0, OptSystemAudioModeStatus }, \
	{ "give-system-audio-mode-status", no_argument, 0, OptGiveSystemAudioModeStatus }, \
	{ "report-short-audio-descriptor", required_argument, 0, OptReportShortAudioDescriptor }, \
	{ "request-short-audio-descriptor", required_argument, 0, OptRequestShortAudioDescriptor }, \
	{ "set-audio-rate", required_argument, 0, OptSetAudioRate }, \
	{ "report-arc-initiated", no_argument, 0, OptReportArcInitiated }, \
	{ "initiate-arc", no_argument, 0, OptInitiateArc }, \
	{ "request-arc-initiation", no_argument, 0, OptRequestArcInitiation }, \
	{ "report-arc-terminated", no_argument, 0, OptReportArcTerminated }, \
	{ "terminate-arc", no_argument, 0, OptTerminateArc }, \
	{ "request-arc-termination", no_argument, 0, OptRequestArcTermination }, \
	{ "report-current-latency", required_argument, 0, OptReportCurrentLatency }, \
	{ "request-current-latency", required_argument, 0, OptRequestCurrentLatency }, \
	{ "cdc-hec-inquire-state", required_argument, 0, OptCdcHecInquireState }, \
	{ "cdc-hec-report-state", required_argument, 0, OptCdcHecReportState }, \
	{ "cdc-hec-set-state", required_argument, 0, OptCdcHecSetState }, \
	{ "cdc-hec-set-state-adjacent", required_argument, 0, OptCdcHecSetStateAdjacent }, \
	{ "cdc-hec-request-deactivation", required_argument, 0, OptCdcHecRequestDeactivation }, \
	{ "cdc-hec-notify-alive", no_argument, 0, OptCdcHecNotifyAlive }, \
	{ "cdc-hec-discover", no_argument, 0, OptCdcHecDiscover }, \
	{ "cdc-hpd-set-state", required_argument, 0, OptCdcHpdSetState }, \
	{ "cdc-hpd-report-state", required_argument, 0, OptCdcHpdReportState }, \
	{ "htng-tuner-1part-chan", required_argument, 0, OptHtngTuner_1partChan }, \
	{ "htng-tuner-2part-chan", required_argument, 0, OptHtngTuner_2partChan }, \
	{ "htng-input-sel-av", required_argument, 0, OptHtngInputSelAv }, \
	{ "htng-input-sel-pc", required_argument, 0, OptHtngInputSelPc }, \
	{ "htng-input-sel-hdmi", required_argument, 0, OptHtngInputSelHdmi }, \
	{ "htng-input-sel-component", required_argument, 0, OptHtngInputSelComponent }, \
	{ "htng-input-sel-dvi", required_argument, 0, OptHtngInputSelDvi }, \
	{ "htng-input-sel-dp", required_argument, 0, OptHtngInputSelDp }, \
	{ "htng-input-sel-usb", required_argument, 0, OptHtngInputSelUsb }, \
	{ "htng-set-def-pwr-on-input-src", required_argument, 0, OptHtngSetDefPwrOnInputSrc }, \
	{ "htng-set-tv-speakers", required_argument, 0, OptHtngSetTvSpeakers }, \
	{ "htng-set-dig-audio", required_argument, 0, OptHtngSetDigAudio }, \
	{ "htng-set-ana-audio", required_argument, 0, OptHtngSetAnaAudio }, \
	{ "htng-set-def-pwr-on-vol", required_argument, 0, OptHtngSetDefPwrOnVol }, \
	{ "htng-set-max-vol", required_argument, 0, OptHtngSetMaxVol }, \
	{ "htng-set-min-vol", required_argument, 0, OptHtngSetMinVol }, \
	{ "htng-set-blue-screen", required_argument, 0, OptHtngSetBlueScreen }, \
	{ "htng-set-brightness", required_argument, 0, OptHtngSetBrightness }, \
	{ "htng-set-color", required_argument, 0, OptHtngSetColor }, \
	{ "htng-set-contrast", required_argument, 0, OptHtngSetContrast }, \
	{ "htng-set-sharpness", required_argument, 0, OptHtngSetSharpness }, \
	{ "htng-set-hue", required_argument, 0, OptHtngSetHue }, \
	{ "htng-set-led-backlight", required_argument, 0, OptHtngSetLedBacklight }, \
	{ "htng-set-tv-osd-control", required_argument, 0, OptHtngSetTvOsdControl }, \
	{ "htng-set-audio-only-display", required_argument, 0, OptHtngSetAudioOnlyDisplay }, \
	{ "htng-set-date", required_argument, 0, OptHtngSetDate }, \
	{ "htng-set-date-format", required_argument, 0, OptHtngSetDateFormat }, \
	{ "htng-set-time", required_argument, 0, OptHtngSetTime }, \
	{ "htng-set-clk-brightness-standby", required_argument, 0, OptHtngSetClkBrightnessStandby }, \
	{ "htng-set-clk-brightness-on", required_argument, 0, OptHtngSetClkBrightnessOn }, \
	{ "htng-led-control", required_argument, 0, OptHtngLedControl }, \
	{ "htng-lock-tv-pwr-button", required_argument, 0, OptHtngLockTvPwrButton }, \
	{ "htng-lock-tv-vol-buttons", required_argument, 0, OptHtngLockTvVolButtons }, \
	{ "htng-lock-tv-chan-buttons", required_argument, 0, OptHtngLockTvChanButtons }, \
	{ "htng-lock-tv-input-buttons", required_argument, 0, OptHtngLockTvInputButtons }, \
	{ "htng-lock-tv-other-buttons", required_argument, 0, OptHtngLockTvOtherButtons }, \
	{ "htng-lock-everything", required_argument, 0, OptHtngLockEverything }, \
	{ "htng-lock-everything-but-pwr", required_argument, 0, OptHtngLockEverythingButPwr }, \
	{ "htng-hotel-mode", required_argument, 0, OptHtngHotelMode }, \
	{ "htng-set-pwr-saving-profile", required_argument, 0, OptHtngSetPwrSavingProfile }, \
	{ "htng-set-sleep-timer", required_argument, 0, OptHtngSetSleepTimer }, \
	{ "htng-set-wakeup-time", required_argument, 0, OptHtngSetWakeupTime }, \
	{ "htng-set-auto-off-time", required_argument, 0, OptHtngSetAutoOffTime }, \
	{ "htng-set-wakeup-src", required_argument, 0, OptHtngSetWakeupSrc }, \
	{ "htng-set-init-wakeup-vol", required_argument, 0, OptHtngSetInitWakeupVol }, \
	{ "htng-clr-all-sleep-wake", no_argument, 0, OptHtngClrAllSleepWake }, \
	{ "htng-global-direct-tune-freq", required_argument, 0, OptHtngGlobalDirectTuneFreq }, \
	{ "htng-global-direct-tune-chan", required_argument, 0, OptHtngGlobalDirectTuneChan }, \
	{ "htng-global-direct-tune-ext-freq", required_argument, 0, OptHtngGlobalDirectTuneExtFreq }, \
	{ "help-abort", no_argument, 0, OptHelpAbort }, \
	{ "help-audio-rate-control", no_argument, 0, OptHelpAudioRateControl }, \
	{ "help-audio-return-channel-control", no_argument, 0, OptHelpAudioReturnChannelControl }, \
	{ "help-capability-discovery-and-control", no_argument, 0, OptHelpCapabilityDiscoveryandControl }, \
	{ "help-deck-control", no_argument, 0, OptHelpDeckControl }, \
	{ "help-device-menu-control", no_argument, 0, OptHelpDeviceMenuControl }, \
	{ "help-device-osd-transfer", no_argument, 0, OptHelpDeviceOSDTransfer }, \
	{ "help-dynamic-audio-lipsync", no_argument, 0, OptHelpDynamicAudioLipsync }, \
	{ "help-htng", no_argument, 0, OptHelpHTNG }, \
	{ "help-osd-display", no_argument, 0, OptHelpOSDDisplay }, \
	{ "help-one-touch-play", no_argument, 0, OptHelpOneTouchPlay }, \
	{ "help-one-touch-record", no_argument, 0, OptHelpOneTouchRecord }, \
	{ "help-power-status", no_argument, 0, OptHelpPowerStatus }, \
	{ "help-remote-control-passthrough", no_argument, 0, OptHelpRemoteControlPassthrough }, \
	{ "help-routing-control", no_argument, 0, OptHelpRoutingControl }, \
	{ "help-standby", no_argument, 0, OptHelpStandby }, \
	{ "help-system-audio-control", no_argument, 0, OptHelpSystemAudioControl }, \
	{ "help-system-information", no_argument, 0, OptHelpSystemInformation }, \
	{ "help-timer-programming", no_argument, 0, OptHelpTimerProgramming }, \
	{ "help-tuner-control", no_argument, 0, OptHelpTunerControl }, \
	{ "help-vendor-specific-commands", no_argument, 0, OptHelpVendorSpecificCommands }, \


#define CEC_PARSE_USAGE \
	"  --help-abort                        Show help for the Abort feature\n" \
	"  --help-audio-rate-control           Show help for the Audio Rate Control feature\n" \
	"  --help-audio-return-channel-control Show help for the Audio Return Channel Control feature\n" \
	"  --help-capability-discovery-and-control Show help for the Capability Discovery and Control feature\n" \
	"  --help-deck-control                 Show help for the Deck Control feature\n" \
	"  --help-device-menu-control          Show help for the Device Menu Control feature\n" \
	"  --help-device-osd-transfer          Show help for the Device OSD Transfer feature\n" \
	"  --help-dynamic-audio-lipsync        Show help for the Dynamic Audio Lipsync feature\n" \
	"  --help-htng                         Show help for the HTNG feature\n" \
	"  --help-osd-display                  Show help for the OSD Display feature\n" \
	"  --help-one-touch-play               Show help for the One Touch Play feature\n" \
	"  --help-one-touch-record             Show help for the One Touch Record feature\n" \
	"  --help-power-status                 Show help for the Power Status feature\n" \
	"  --help-remote-control-passthrough   Show help for the Remote Control Passthrough feature\n" \
	"  --help-routing-control              Show help for the Routing Control feature\n" \
	"  --help-standby                      Show help for the Standby feature\n" \
	"  --help-system-audio-control         Show help for the System Audio Control feature\n" \
	"  --help-system-information           Show help for the System Information feature\n" \
	"  --help-timer-programming            Show help for the Timer Programming feature\n" \
	"  --help-tuner-control                Show help for the Tuner Control feature\n" \
	"  --help-vendor-specific-commands     Show help for the Vendor Specific Commands feature\n" \


