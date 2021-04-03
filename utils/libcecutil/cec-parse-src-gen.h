

static const char *abort_usage =
	"  --feature-abort abort-msg=<val>,reason=<val>\n"
	"                                  'reason' can have these values:\n"
	"                                      unrecognized-op (" xstr(CEC_OP_ABORT_UNRECOGNIZED_OP) ")\n"
	"                                      incorrect-mode (" xstr(CEC_OP_ABORT_INCORRECT_MODE) ")\n"
	"                                      no-source (" xstr(CEC_OP_ABORT_NO_SOURCE) ")\n"
	"                                      invalid-op (" xstr(CEC_OP_ABORT_INVALID_OP) ")\n"
	"                                      refused (" xstr(CEC_OP_ABORT_REFUSED) ")\n"
	"                                      undetermined (" xstr(CEC_OP_ABORT_UNDETERMINED) ")\n"
	"                                  Send FEATURE_ABORT message (" xstr(CEC_MSG_FEATURE_ABORT) ")\n"
	"  --abort                         Send ABORT message (" xstr(CEC_MSG_ABORT) ")\n";

static const char *audio_rate_control_usage =
	"  --set-audio-rate audio-rate=<val>\n"
	"                                  'audio-rate' can have these values:\n"
	"                                      off (" xstr(CEC_OP_AUD_RATE_OFF) ")\n"
	"                                      wide-std (" xstr(CEC_OP_AUD_RATE_WIDE_STD) ")\n"
	"                                      wide-fast (" xstr(CEC_OP_AUD_RATE_WIDE_FAST) ")\n"
	"                                      wide-slow (" xstr(CEC_OP_AUD_RATE_WIDE_SLOW) ")\n"
	"                                      narrow-std (" xstr(CEC_OP_AUD_RATE_NARROW_STD) ")\n"
	"                                      narrow-fast (" xstr(CEC_OP_AUD_RATE_NARROW_FAST) ")\n"
	"                                      narrow-slow (" xstr(CEC_OP_AUD_RATE_NARROW_SLOW) ")\n"
	"                                  Send SET_AUDIO_RATE message (" xstr(CEC_MSG_SET_AUDIO_RATE) ")\n";

static const char *audio_return_channel_control_usage =
	"  --report-arc-initiated          Send REPORT_ARC_INITIATED message (" xstr(CEC_MSG_REPORT_ARC_INITIATED) ")\n"
	"  --initiate-arc                  Send INITIATE_ARC message (" xstr(CEC_MSG_INITIATE_ARC) ")\n"
	"  --request-arc-initiation        Send REQUEST_ARC_INITIATION message (" xstr(CEC_MSG_REQUEST_ARC_INITIATION) ")\n"
	"  --report-arc-terminated         Send REPORT_ARC_TERMINATED message (" xstr(CEC_MSG_REPORT_ARC_TERMINATED) ")\n"
	"  --terminate-arc                 Send TERMINATE_ARC message (" xstr(CEC_MSG_TERMINATE_ARC) ")\n"
	"  --request-arc-termination       Send REQUEST_ARC_TERMINATION message (" xstr(CEC_MSG_REQUEST_ARC_TERMINATION) ")\n";

static const char *capability_discovery_and_control_usage =
	"  --cdc-hec-inquire-state phys-addr1=<val>,phys-addr2=<val>\n"
	"                                  Send CDC_HEC_INQUIRE_STATE message (" xstr(CEC_MSG_CDC_HEC_INQUIRE_STATE) ", bcast)\n"
	"  --cdc-hec-report-state target-phys-addr=<val>,hec-func-state=<val>,host-func-state=<val>,enc-func-state=<val>,cdc-errcode=<val>,has-field=<val>,hec-field=<val>\n"
	"                                  'hec-func-state' can have these values:\n"
	"                                      not-supported (" xstr(CEC_OP_HEC_FUNC_STATE_NOT_SUPPORTED) ")\n"
	"                                      inactive (" xstr(CEC_OP_HEC_FUNC_STATE_INACTIVE) ")\n"
	"                                      active (" xstr(CEC_OP_HEC_FUNC_STATE_ACTIVE) ")\n"
	"                                      activation-field (" xstr(CEC_OP_HEC_FUNC_STATE_ACTIVATION_FIELD) ")\n"
	"                                  'host-func-state' can have these values:\n"
	"                                      not-supported (" xstr(CEC_OP_HOST_FUNC_STATE_NOT_SUPPORTED) ")\n"
	"                                      inactive (" xstr(CEC_OP_HOST_FUNC_STATE_INACTIVE) ")\n"
	"                                      active (" xstr(CEC_OP_HOST_FUNC_STATE_ACTIVE) ")\n"
	"                                  'enc-func-state' can have these values:\n"
	"                                      not-supported (" xstr(CEC_OP_ENC_FUNC_STATE_EXT_CON_NOT_SUPPORTED) ")\n"
	"                                      inactive (" xstr(CEC_OP_ENC_FUNC_STATE_EXT_CON_INACTIVE) ")\n"
	"                                      active (" xstr(CEC_OP_ENC_FUNC_STATE_EXT_CON_ACTIVE) ")\n"
	"                                  'cdc-errcode' can have these values:\n"
	"                                      none (" xstr(CEC_OP_CDC_ERROR_CODE_NONE) ")\n"
	"                                      cap-unsupported (" xstr(CEC_OP_CDC_ERROR_CODE_CAP_UNSUPPORTED) ")\n"
	"                                      wrong-state (" xstr(CEC_OP_CDC_ERROR_CODE_WRONG_STATE) ")\n"
	"                                      other (" xstr(CEC_OP_CDC_ERROR_CODE_OTHER) ")\n"
	"                                  Send CDC_HEC_REPORT_STATE message (" xstr(CEC_MSG_CDC_HEC_REPORT_STATE) ", bcast)\n"
	"  --cdc-hec-set-state phys-addr1=<val>,phys-addr2=<val>,hec-set-state=<val>,phys-addr3=<val>,phys-addr4=<val>,phys-addr5=<val>\n"
	"                                  'hec-set-state' can have these values:\n"
	"                                      deactivate (" xstr(CEC_OP_HEC_SET_STATE_DEACTIVATE) ")\n"
	"                                      activate (" xstr(CEC_OP_HEC_SET_STATE_ACTIVATE) ")\n"
	"                                  Send CDC_HEC_SET_STATE message (" xstr(CEC_MSG_CDC_HEC_SET_STATE) ", bcast)\n"
	"  --cdc-hec-set-state-adjacent phys-addr1=<val>,hec-set-state=<val>\n"
	"                                  'hec-set-state' can have these values:\n"
	"                                      deactivate (" xstr(CEC_OP_HEC_SET_STATE_DEACTIVATE) ")\n"
	"                                      activate (" xstr(CEC_OP_HEC_SET_STATE_ACTIVATE) ")\n"
	"                                  Send CDC_HEC_SET_STATE_ADJACENT message (" xstr(CEC_MSG_CDC_HEC_SET_STATE_ADJACENT) ", bcast)\n"
	"  --cdc-hec-request-deactivation phys-addr1=<val>,phys-addr2=<val>,phys-addr3=<val>\n"
	"                                  Send CDC_HEC_REQUEST_DEACTIVATION message (" xstr(CEC_MSG_CDC_HEC_REQUEST_DEACTIVATION) ", bcast)\n"
	"  --cdc-hec-notify-alive          Send CDC_HEC_NOTIFY_ALIVE message (" xstr(CEC_MSG_CDC_HEC_NOTIFY_ALIVE) ", bcast)\n"
	"  --cdc-hec-discover              Send CDC_HEC_DISCOVER message (" xstr(CEC_MSG_CDC_HEC_DISCOVER) ", bcast)\n"
	"  --cdc-hpd-set-state input-port=<val>,hpd-state=<val>\n"
	"                                  'hpd-state' can have these values:\n"
	"                                      cp-edid-disable (" xstr(CEC_OP_HPD_STATE_CP_EDID_DISABLE) ")\n"
	"                                      cp-edid-enable (" xstr(CEC_OP_HPD_STATE_CP_EDID_ENABLE) ")\n"
	"                                      cp-edid-disable-enable (" xstr(CEC_OP_HPD_STATE_CP_EDID_DISABLE_ENABLE) ")\n"
	"                                      edid-disable (" xstr(CEC_OP_HPD_STATE_EDID_DISABLE) ")\n"
	"                                      edid-enable (" xstr(CEC_OP_HPD_STATE_EDID_ENABLE) ")\n"
	"                                      edid-disable-enable (" xstr(CEC_OP_HPD_STATE_EDID_DISABLE_ENABLE) ")\n"
	"                                  Send CDC_HPD_SET_STATE message (" xstr(CEC_MSG_CDC_HPD_SET_STATE) ", bcast)\n"
	"  --cdc-hpd-report-state hpd-state=<val>,hpd-error=<val>\n"
	"                                  'hpd-state' can have these values:\n"
	"                                      cp-edid-disable (" xstr(CEC_OP_HPD_STATE_CP_EDID_DISABLE) ")\n"
	"                                      cp-edid-enable (" xstr(CEC_OP_HPD_STATE_CP_EDID_ENABLE) ")\n"
	"                                      cp-edid-disable-enable (" xstr(CEC_OP_HPD_STATE_CP_EDID_DISABLE_ENABLE) ")\n"
	"                                      edid-disable (" xstr(CEC_OP_HPD_STATE_EDID_DISABLE) ")\n"
	"                                      edid-enable (" xstr(CEC_OP_HPD_STATE_EDID_ENABLE) ")\n"
	"                                      edid-disable-enable (" xstr(CEC_OP_HPD_STATE_EDID_DISABLE_ENABLE) ")\n"
	"                                  'hpd-error' can have these values:\n"
	"                                      none (" xstr(CEC_OP_HPD_ERROR_NONE) ")\n"
	"                                      initiator-not-capable (" xstr(CEC_OP_HPD_ERROR_INITIATOR_NOT_CAPABLE) ")\n"
	"                                      initiator-wrong-state (" xstr(CEC_OP_HPD_ERROR_INITIATOR_WRONG_STATE) ")\n"
	"                                      other (" xstr(CEC_OP_HPD_ERROR_OTHER) ")\n"
	"                                      none-no-video (" xstr(CEC_OP_HPD_ERROR_NONE_NO_VIDEO) ")\n"
	"                                  Send CDC_HPD_REPORT_STATE message (" xstr(CEC_MSG_CDC_HPD_REPORT_STATE) ", bcast)\n";

static const char *deck_control_usage =
	"  --deck-control deck-control-mode=<val>\n"
	"                                  'deck-control-mode' can have these values:\n"
	"                                      skip-fwd (" xstr(CEC_OP_DECK_CTL_MODE_SKIP_FWD) ")\n"
	"                                      skip-rev (" xstr(CEC_OP_DECK_CTL_MODE_SKIP_REV) ")\n"
	"                                      stop (" xstr(CEC_OP_DECK_CTL_MODE_STOP) ")\n"
	"                                      eject (" xstr(CEC_OP_DECK_CTL_MODE_EJECT) ")\n"
	"                                  Send DECK_CONTROL message (" xstr(CEC_MSG_DECK_CONTROL) ")\n"
	"  --deck-status deck-info=<val>\n"
	"                                  'deck-info' can have these values:\n"
	"                                      play (" xstr(CEC_OP_DECK_INFO_PLAY) ")\n"
	"                                      record (" xstr(CEC_OP_DECK_INFO_RECORD) ")\n"
	"                                      play-rev (" xstr(CEC_OP_DECK_INFO_PLAY_REV) ")\n"
	"                                      still (" xstr(CEC_OP_DECK_INFO_STILL) ")\n"
	"                                      slow (" xstr(CEC_OP_DECK_INFO_SLOW) ")\n"
	"                                      slow-rev (" xstr(CEC_OP_DECK_INFO_SLOW_REV) ")\n"
	"                                      fast-fwd (" xstr(CEC_OP_DECK_INFO_FAST_FWD) ")\n"
	"                                      fast-rev (" xstr(CEC_OP_DECK_INFO_FAST_REV) ")\n"
	"                                      no-media (" xstr(CEC_OP_DECK_INFO_NO_MEDIA) ")\n"
	"                                      stop (" xstr(CEC_OP_DECK_INFO_STOP) ")\n"
	"                                      skip-fwd (" xstr(CEC_OP_DECK_INFO_SKIP_FWD) ")\n"
	"                                      skip-rev (" xstr(CEC_OP_DECK_INFO_SKIP_REV) ")\n"
	"                                      index-search-fwd (" xstr(CEC_OP_DECK_INFO_INDEX_SEARCH_FWD) ")\n"
	"                                      index-search-rev (" xstr(CEC_OP_DECK_INFO_INDEX_SEARCH_REV) ")\n"
	"                                      other (" xstr(CEC_OP_DECK_INFO_OTHER) ")\n"
	"                                  Send DECK_STATUS message (" xstr(CEC_MSG_DECK_STATUS) ")\n"
	"  --give-deck-status status-req=<val>\n"
	"                                  'status-req' can have these values:\n"
	"                                      on (" xstr(CEC_OP_STATUS_REQ_ON) ")\n"
	"                                      off (" xstr(CEC_OP_STATUS_REQ_OFF) ")\n"
	"                                      once (" xstr(CEC_OP_STATUS_REQ_ONCE) ")\n"
	"                                  Send GIVE_DECK_STATUS message (" xstr(CEC_MSG_GIVE_DECK_STATUS) ")\n"
	"  --play play-mode=<val>\n"
	"                                  'play-mode' can have these values:\n"
	"                                      fwd (" xstr(CEC_OP_PLAY_MODE_PLAY_FWD) ")\n"
	"                                      rev (" xstr(CEC_OP_PLAY_MODE_PLAY_REV) ")\n"
	"                                      still (" xstr(CEC_OP_PLAY_MODE_PLAY_STILL) ")\n"
	"                                      fast-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MIN) ")\n"
	"                                      fast-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MED) ")\n"
	"                                      fast-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MAX) ")\n"
	"                                      fast-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MIN) ")\n"
	"                                      fast-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MED) ")\n"
	"                                      fast-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MAX) ")\n"
	"                                      slow-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MIN) ")\n"
	"                                      slow-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MED) ")\n"
	"                                      slow-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MAX) ")\n"
	"                                      slow-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MIN) ")\n"
	"                                      slow-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MED) ")\n"
	"                                      slow-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MAX) ")\n"
	"                                  Send PLAY message (" xstr(CEC_MSG_PLAY) ")\n";

static const char *device_menu_control_usage =
	"  --menu-status menu-state=<val>\n"
	"                                  'menu-state' can have these values:\n"
	"                                      activated (" xstr(CEC_OP_MENU_STATE_ACTIVATED) ")\n"
	"                                      deactivated (" xstr(CEC_OP_MENU_STATE_DEACTIVATED) ")\n"
	"                                  Send MENU_STATUS message (" xstr(CEC_MSG_MENU_STATUS) ")\n"
	"  --menu-request menu-req=<val>\n"
	"                                  'menu-req' can have these values:\n"
	"                                      activate (" xstr(CEC_OP_MENU_REQUEST_ACTIVATE) ")\n"
	"                                      deactivate (" xstr(CEC_OP_MENU_REQUEST_DEACTIVATE) ")\n"
	"                                      query (" xstr(CEC_OP_MENU_REQUEST_QUERY) ")\n"
	"                                  Send MENU_REQUEST message (" xstr(CEC_MSG_MENU_REQUEST) ")\n"
	"  --user-control-pressed ui-cmd=<val>,has-opt-arg=<val>,play-mode=<val>,ui-function-media=<val>,ui-function-select-av-input=<val>,ui-function-select-audio-input=<val>,ui-bcast-type=<val>,ui-snd-pres-ctl=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'ui-cmd' can have these values:\n"
	"                                      select (" xstr(CEC_OP_UI_CMD_SELECT) ")\n"
	"                                      up (" xstr(CEC_OP_UI_CMD_UP) ")\n"
	"                                      down (" xstr(CEC_OP_UI_CMD_DOWN) ")\n"
	"                                      left (" xstr(CEC_OP_UI_CMD_LEFT) ")\n"
	"                                      right (" xstr(CEC_OP_UI_CMD_RIGHT) ")\n"
	"                                      right-up (" xstr(CEC_OP_UI_CMD_RIGHT_UP) ")\n"
	"                                      right-down (" xstr(CEC_OP_UI_CMD_RIGHT_DOWN) ")\n"
	"                                      left-up (" xstr(CEC_OP_UI_CMD_LEFT_UP) ")\n"
	"                                      left-down (" xstr(CEC_OP_UI_CMD_LEFT_DOWN) ")\n"
	"                                      device-root-menu (" xstr(CEC_OP_UI_CMD_DEVICE_ROOT_MENU) ")\n"
	"                                      device-setup-menu (" xstr(CEC_OP_UI_CMD_DEVICE_SETUP_MENU) ")\n"
	"                                      contents-menu (" xstr(CEC_OP_UI_CMD_CONTENTS_MENU) ")\n"
	"                                      favorite-menu (" xstr(CEC_OP_UI_CMD_FAVORITE_MENU) ")\n"
	"                                      back (" xstr(CEC_OP_UI_CMD_BACK) ")\n"
	"                                      media-top-menu (" xstr(CEC_OP_UI_CMD_MEDIA_TOP_MENU) ")\n"
	"                                      media-context-sensitive-menu (" xstr(CEC_OP_UI_CMD_MEDIA_CONTEXT_SENSITIVE_MENU) ")\n"
	"                                      number-entry-mode (" xstr(CEC_OP_UI_CMD_NUMBER_ENTRY_MODE) ")\n"
	"                                      number-11 (" xstr(CEC_OP_UI_CMD_NUMBER_11) ")\n"
	"                                      number-12 (" xstr(CEC_OP_UI_CMD_NUMBER_12) ")\n"
	"                                      number-0-or-number-10 (" xstr(CEC_OP_UI_CMD_NUMBER_0_OR_NUMBER_10) ")\n"
	"                                      number-1 (" xstr(CEC_OP_UI_CMD_NUMBER_1) ")\n"
	"                                      number-2 (" xstr(CEC_OP_UI_CMD_NUMBER_2) ")\n"
	"                                      number-3 (" xstr(CEC_OP_UI_CMD_NUMBER_3) ")\n"
	"                                      number-4 (" xstr(CEC_OP_UI_CMD_NUMBER_4) ")\n"
	"                                      number-5 (" xstr(CEC_OP_UI_CMD_NUMBER_5) ")\n"
	"                                      number-6 (" xstr(CEC_OP_UI_CMD_NUMBER_6) ")\n"
	"                                      number-7 (" xstr(CEC_OP_UI_CMD_NUMBER_7) ")\n"
	"                                      number-8 (" xstr(CEC_OP_UI_CMD_NUMBER_8) ")\n"
	"                                      number-9 (" xstr(CEC_OP_UI_CMD_NUMBER_9) ")\n"
	"                                      dot (" xstr(CEC_OP_UI_CMD_DOT) ")\n"
	"                                      enter (" xstr(CEC_OP_UI_CMD_ENTER) ")\n"
	"                                      clear (" xstr(CEC_OP_UI_CMD_CLEAR) ")\n"
	"                                      next-favorite (" xstr(CEC_OP_UI_CMD_NEXT_FAVORITE) ")\n"
	"                                      channel-up (" xstr(CEC_OP_UI_CMD_CHANNEL_UP) ")\n"
	"                                      channel-down (" xstr(CEC_OP_UI_CMD_CHANNEL_DOWN) ")\n"
	"                                      previous-channel (" xstr(CEC_OP_UI_CMD_PREVIOUS_CHANNEL) ")\n"
	"                                      sound-select (" xstr(CEC_OP_UI_CMD_SOUND_SELECT) ")\n"
	"                                      input-select (" xstr(CEC_OP_UI_CMD_INPUT_SELECT) ")\n"
	"                                      display-information (" xstr(CEC_OP_UI_CMD_DISPLAY_INFORMATION) ")\n"
	"                                      help (" xstr(CEC_OP_UI_CMD_HELP) ")\n"
	"                                      page-up (" xstr(CEC_OP_UI_CMD_PAGE_UP) ")\n"
	"                                      page-down (" xstr(CEC_OP_UI_CMD_PAGE_DOWN) ")\n"
	"                                      power (" xstr(CEC_OP_UI_CMD_POWER) ")\n"
	"                                      volume-up (" xstr(CEC_OP_UI_CMD_VOLUME_UP) ")\n"
	"                                      volume-down (" xstr(CEC_OP_UI_CMD_VOLUME_DOWN) ")\n"
	"                                      mute (" xstr(CEC_OP_UI_CMD_MUTE) ")\n"
	"                                      play (" xstr(CEC_OP_UI_CMD_PLAY) ")\n"
	"                                      stop (" xstr(CEC_OP_UI_CMD_STOP) ")\n"
	"                                      pause (" xstr(CEC_OP_UI_CMD_PAUSE) ")\n"
	"                                      record (" xstr(CEC_OP_UI_CMD_RECORD) ")\n"
	"                                      rewind (" xstr(CEC_OP_UI_CMD_REWIND) ")\n"
	"                                      fast-forward (" xstr(CEC_OP_UI_CMD_FAST_FORWARD) ")\n"
	"                                      eject (" xstr(CEC_OP_UI_CMD_EJECT) ")\n"
	"                                      skip-forward (" xstr(CEC_OP_UI_CMD_SKIP_FORWARD) ")\n"
	"                                      skip-backward (" xstr(CEC_OP_UI_CMD_SKIP_BACKWARD) ")\n"
	"                                      stop-record (" xstr(CEC_OP_UI_CMD_STOP_RECORD) ")\n"
	"                                      pause-record (" xstr(CEC_OP_UI_CMD_PAUSE_RECORD) ")\n"
	"                                      angle (" xstr(CEC_OP_UI_CMD_ANGLE) ")\n"
	"                                      sub-picture (" xstr(CEC_OP_UI_CMD_SUB_PICTURE) ")\n"
	"                                      video-on-demand (" xstr(CEC_OP_UI_CMD_VIDEO_ON_DEMAND) ")\n"
	"                                      electronic-program-guide (" xstr(CEC_OP_UI_CMD_ELECTRONIC_PROGRAM_GUIDE) ")\n"
	"                                      timer-programming (" xstr(CEC_OP_UI_CMD_TIMER_PROGRAMMING) ")\n"
	"                                      initial-configuration (" xstr(CEC_OP_UI_CMD_INITIAL_CONFIGURATION) ")\n"
	"                                      select-broadcast-type (" xstr(CEC_OP_UI_CMD_SELECT_BROADCAST_TYPE) ")\n"
	"                                      select-sound-presentation (" xstr(CEC_OP_UI_CMD_SELECT_SOUND_PRESENTATION) ")\n"
	"                                      audio-description (" xstr(CEC_OP_UI_CMD_AUDIO_DESCRIPTION) ")\n"
	"                                      internet (" xstr(CEC_OP_UI_CMD_INTERNET) ")\n"
	"                                      3d-mode (" xstr(CEC_OP_UI_CMD_3D_MODE) ")\n"
	"                                      play-function (" xstr(CEC_OP_UI_CMD_PLAY_FUNCTION) ")\n"
	"                                      pause-play-function (" xstr(CEC_OP_UI_CMD_PAUSE_PLAY_FUNCTION) ")\n"
	"                                      record-function (" xstr(CEC_OP_UI_CMD_RECORD_FUNCTION) ")\n"
	"                                      pause-record-function (" xstr(CEC_OP_UI_CMD_PAUSE_RECORD_FUNCTION) ")\n"
	"                                      stop-function (" xstr(CEC_OP_UI_CMD_STOP_FUNCTION) ")\n"
	"                                      mute-function (" xstr(CEC_OP_UI_CMD_MUTE_FUNCTION) ")\n"
	"                                      restore-volume-function (" xstr(CEC_OP_UI_CMD_RESTORE_VOLUME_FUNCTION) ")\n"
	"                                      tune-function (" xstr(CEC_OP_UI_CMD_TUNE_FUNCTION) ")\n"
	"                                      select-media-function (" xstr(CEC_OP_UI_CMD_SELECT_MEDIA_FUNCTION) ")\n"
	"                                      select-av-input-function (" xstr(CEC_OP_UI_CMD_SELECT_AV_INPUT_FUNCTION) ")\n"
	"                                      select-audio-input-function (" xstr(CEC_OP_UI_CMD_SELECT_AUDIO_INPUT_FUNCTION) ")\n"
	"                                      power-toggle-function (" xstr(CEC_OP_UI_CMD_POWER_TOGGLE_FUNCTION) ")\n"
	"                                      power-off-function (" xstr(CEC_OP_UI_CMD_POWER_OFF_FUNCTION) ")\n"
	"                                      power-on-function (" xstr(CEC_OP_UI_CMD_POWER_ON_FUNCTION) ")\n"
	"                                      f1-blue (" xstr(CEC_OP_UI_CMD_F1_BLUE) ")\n"
	"                                      f2-red (" xstr(CEC_OP_UI_CMD_F2_RED) ")\n"
	"                                      f3-green (" xstr(CEC_OP_UI_CMD_F3_GREEN) ")\n"
	"                                      f4-yellow (" xstr(CEC_OP_UI_CMD_F4_YELLOW) ")\n"
	"                                      f5 (" xstr(CEC_OP_UI_CMD_F5) ")\n"
	"                                      data (" xstr(CEC_OP_UI_CMD_DATA) ")\n"
	"                                  'play-mode' can have these values:\n"
	"                                      fwd (" xstr(CEC_OP_PLAY_MODE_PLAY_FWD) ")\n"
	"                                      rev (" xstr(CEC_OP_PLAY_MODE_PLAY_REV) ")\n"
	"                                      still (" xstr(CEC_OP_PLAY_MODE_PLAY_STILL) ")\n"
	"                                      fast-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MIN) ")\n"
	"                                      fast-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MED) ")\n"
	"                                      fast-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MAX) ")\n"
	"                                      fast-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MIN) ")\n"
	"                                      fast-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MED) ")\n"
	"                                      fast-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MAX) ")\n"
	"                                      slow-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MIN) ")\n"
	"                                      slow-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MED) ")\n"
	"                                      slow-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MAX) ")\n"
	"                                      slow-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MIN) ")\n"
	"                                      slow-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MED) ")\n"
	"                                      slow-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MAX) ")\n"
	"                                  'ui-bcast-type' can have these values:\n"
	"                                      toggle-all (" xstr(CEC_OP_UI_BCAST_TYPE_TOGGLE_ALL) ")\n"
	"                                      toggle-dig-ana (" xstr(CEC_OP_UI_BCAST_TYPE_TOGGLE_DIG_ANA) ")\n"
	"                                      analogue (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE) ")\n"
	"                                      analogue-t (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_T) ")\n"
	"                                      analogue-cable (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_CABLE) ")\n"
	"                                      analogue-sat (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_SAT) ")\n"
	"                                      digital (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL) ")\n"
	"                                      digital-t (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_T) ")\n"
	"                                      digital-cable (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_CABLE) ")\n"
	"                                      digital-sat (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_SAT) ")\n"
	"                                      digital-com-sat (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_COM_SAT) ")\n"
	"                                      digital-com-sat2 (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_COM_SAT2) ")\n"
	"                                      ip (" xstr(CEC_OP_UI_BCAST_TYPE_IP) ")\n"
	"                                  'ui-snd-pres-ctl' can have these values:\n"
	"                                      dual-mono (" xstr(CEC_OP_UI_SND_PRES_CTL_DUAL_MONO) ")\n"
	"                                      karaoke (" xstr(CEC_OP_UI_SND_PRES_CTL_KARAOKE) ")\n"
	"                                      downmix (" xstr(CEC_OP_UI_SND_PRES_CTL_DOWNMIX) ")\n"
	"                                      reverb (" xstr(CEC_OP_UI_SND_PRES_CTL_REVERB) ")\n"
	"                                      equalizer (" xstr(CEC_OP_UI_SND_PRES_CTL_EQUALIZER) ")\n"
	"                                      bass-up (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_UP) ")\n"
	"                                      bass-neutral (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_NEUTRAL) ")\n"
	"                                      bass-down (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_DOWN) ")\n"
	"                                      treble-up (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_UP) ")\n"
	"                                      treble-neutral (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_NEUTRAL) ")\n"
	"                                      treble-down (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_DOWN) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send USER_CONTROL_PRESSED message (" xstr(CEC_MSG_USER_CONTROL_PRESSED) ")\n"
	"  --user-control-released         Send USER_CONTROL_RELEASED message (" xstr(CEC_MSG_USER_CONTROL_RELEASED) ")\n";

static const char *device_osd_transfer_usage =
	"  --set-osd-name name=<val>\n"
	"                                  Send SET_OSD_NAME message (" xstr(CEC_MSG_SET_OSD_NAME) ")\n"
	"  --give-osd-name                 Send GIVE_OSD_NAME message (" xstr(CEC_MSG_GIVE_OSD_NAME) ")\n";

static const char *dynamic_audio_lipsync_usage =
	"  --report-current-latency phys-addr=<val>,video-latency=<val>,low-latency-mode=<val>,audio-out-compensated=<val>,audio-out-delay=<val>\n"
	"                                  'low-latency-mode' can have these values:\n"
	"                                      off (" xstr(CEC_OP_LOW_LATENCY_MODE_OFF) ")\n"
	"                                      on (" xstr(CEC_OP_LOW_LATENCY_MODE_ON) ")\n"
	"                                  'audio-out-compensated' can have these values:\n"
	"                                      na (" xstr(CEC_OP_AUD_OUT_COMPENSATED_NA) ")\n"
	"                                      delay (" xstr(CEC_OP_AUD_OUT_COMPENSATED_DELAY) ")\n"
	"                                      no-delay (" xstr(CEC_OP_AUD_OUT_COMPENSATED_NO_DELAY) ")\n"
	"                                      partial-delay (" xstr(CEC_OP_AUD_OUT_COMPENSATED_PARTIAL_DELAY) ")\n"
	"                                  Send REPORT_CURRENT_LATENCY message (" xstr(CEC_MSG_REPORT_CURRENT_LATENCY) ", bcast)\n"
	"  --request-current-latency phys-addr=<val>\n"
	"                                  Send REQUEST_CURRENT_LATENCY message (" xstr(CEC_MSG_REQUEST_CURRENT_LATENCY) ", bcast)\n";

static const char *htng_usage =
	"  --htng-tuner-1part-chan htng-tuner-type=<val>,chan=<val>\n"
	"                                  'htng-tuner-type' can have these values:\n"
	"                                      air (" xstr(CEC_OP_HTNG_TUNER_TYPE_AIR) ")\n"
	"                                      cable (" xstr(CEC_OP_HTNG_TUNER_TYPE_CABLE) ")\n"
	"                                      sat (" xstr(CEC_OP_HTNG_TUNER_TYPE_SAT) ")\n"
	"                                      not-specified (" xstr(CEC_OP_HTNG_TUNER_TYPE_NOT_SPECIFIED) ")\n"
	"                                  Send HTNG_TUNER_1PART_CHAN message (" xstr(CEC_MSG_HTNG_TUNER_1PART_CHAN) ")\n"
	"  --htng-tuner-2part-chan htng-tuner-type=<val>,major-chan=<val>,minor-chan=<val>\n"
	"                                  'htng-tuner-type' can have these values:\n"
	"                                      air (" xstr(CEC_OP_HTNG_TUNER_TYPE_AIR) ")\n"
	"                                      cable (" xstr(CEC_OP_HTNG_TUNER_TYPE_CABLE) ")\n"
	"                                      sat (" xstr(CEC_OP_HTNG_TUNER_TYPE_SAT) ")\n"
	"                                      not-specified (" xstr(CEC_OP_HTNG_TUNER_TYPE_NOT_SPECIFIED) ")\n"
	"                                  Send HTNG_TUNER_2PART_CHAN message (" xstr(CEC_MSG_HTNG_TUNER_2PART_CHAN) ")\n"
	"  --htng-input-sel-av input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_AV message (" xstr(CEC_MSG_HTNG_INPUT_SEL_AV) ")\n"
	"  --htng-input-sel-pc input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_PC message (" xstr(CEC_MSG_HTNG_INPUT_SEL_PC) ")\n"
	"  --htng-input-sel-hdmi input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_HDMI message (" xstr(CEC_MSG_HTNG_INPUT_SEL_HDMI) ")\n"
	"  --htng-input-sel-component input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_COMPONENT message (" xstr(CEC_MSG_HTNG_INPUT_SEL_COMPONENT) ")\n"
	"  --htng-input-sel-dvi input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_DVI message (" xstr(CEC_MSG_HTNG_INPUT_SEL_DVI) ")\n"
	"  --htng-input-sel-dp input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_DP message (" xstr(CEC_MSG_HTNG_INPUT_SEL_DP) ")\n"
	"  --htng-input-sel-usb input=<val>\n"
	"                                  Send HTNG_INPUT_SEL_USB message (" xstr(CEC_MSG_HTNG_INPUT_SEL_USB) ")\n"
	"  --htng-set-def-pwr-on-input-src htng-input-src=<val>,htng-tuner-type=<val>,major=<val>,input=<val>\n"
	"                                  'htng-input-src' can have these values:\n"
	"                                      tuner-1part (" xstr(CEC_OP_HTNG_INPUT_SRC_TUNER_1PART) ")\n"
	"                                      tuner-2part (" xstr(CEC_OP_HTNG_INPUT_SRC_TUNER_2PART) ")\n"
	"                                      av (" xstr(CEC_OP_HTNG_INPUT_SRC_AV) ")\n"
	"                                      pc (" xstr(CEC_OP_HTNG_INPUT_SRC_PC) ")\n"
	"                                      hdmi (" xstr(CEC_OP_HTNG_INPUT_SRC_HDMI) ")\n"
	"                                      component (" xstr(CEC_OP_HTNG_INPUT_SRC_COMPONENT) ")\n"
	"                                      dvi (" xstr(CEC_OP_HTNG_INPUT_SRC_DVI) ")\n"
	"                                      dp (" xstr(CEC_OP_HTNG_INPUT_SRC_DP) ")\n"
	"                                      usb (" xstr(CEC_OP_HTNG_INPUT_SRC_USB) ")\n"
	"                                  'htng-tuner-type' can have these values:\n"
	"                                      air (" xstr(CEC_OP_HTNG_TUNER_TYPE_AIR) ")\n"
	"                                      cable (" xstr(CEC_OP_HTNG_TUNER_TYPE_CABLE) ")\n"
	"                                      sat (" xstr(CEC_OP_HTNG_TUNER_TYPE_SAT) ")\n"
	"                                      not-specified (" xstr(CEC_OP_HTNG_TUNER_TYPE_NOT_SPECIFIED) ")\n"
	"                                  Send HTNG_SET_DEF_PWR_ON_INPUT_SRC message (" xstr(CEC_MSG_HTNG_SET_DEF_PWR_ON_INPUT_SRC) ")\n"
	"  --htng-set-tv-speakers on=<val>\n"
	"                                  Send HTNG_SET_TV_SPEAKERS message (" xstr(CEC_MSG_HTNG_SET_TV_SPEAKERS) ")\n"
	"  --htng-set-dig-audio on=<val>\n"
	"                                  Send HTNG_SET_DIG_AUDIO message (" xstr(CEC_MSG_HTNG_SET_DIG_AUDIO) ")\n"
	"  --htng-set-ana-audio on=<val>\n"
	"                                  Send HTNG_SET_ANA_AUDIO message (" xstr(CEC_MSG_HTNG_SET_ANA_AUDIO) ")\n"
	"  --htng-set-def-pwr-on-vol vol=<val>\n"
	"                                  Send HTNG_SET_DEF_PWR_ON_VOL message (" xstr(CEC_MSG_HTNG_SET_DEF_PWR_ON_VOL) ")\n"
	"  --htng-set-max-vol vol=<val>\n"
	"                                  Send HTNG_SET_MAX_VOL message (" xstr(CEC_MSG_HTNG_SET_MAX_VOL) ")\n"
	"  --htng-set-min-vol vol=<val>\n"
	"                                  Send HTNG_SET_MIN_VOL message (" xstr(CEC_MSG_HTNG_SET_MIN_VOL) ")\n"
	"  --htng-set-blue-screen blue=<val>\n"
	"                                  Send HTNG_SET_BLUE_SCREEN message (" xstr(CEC_MSG_HTNG_SET_BLUE_SCREEN) ")\n"
	"  --htng-set-brightness brightness=<val>\n"
	"                                  Send HTNG_SET_BRIGHTNESS message (" xstr(CEC_MSG_HTNG_SET_BRIGHTNESS) ")\n"
	"  --htng-set-color color=<val>\n"
	"                                  Send HTNG_SET_COLOR message (" xstr(CEC_MSG_HTNG_SET_COLOR) ")\n"
	"  --htng-set-contrast contrast=<val>\n"
	"                                  Send HTNG_SET_CONTRAST message (" xstr(CEC_MSG_HTNG_SET_CONTRAST) ")\n"
	"  --htng-set-sharpness sharpness=<val>\n"
	"                                  Send HTNG_SET_SHARPNESS message (" xstr(CEC_MSG_HTNG_SET_SHARPNESS) ")\n"
	"  --htng-set-hue hue=<val>\n"
	"                                  Send HTNG_SET_HUE message (" xstr(CEC_MSG_HTNG_SET_HUE) ")\n"
	"  --htng-set-led-backlight led-backlight=<val>\n"
	"                                  Send HTNG_SET_LED_BACKLIGHT message (" xstr(CEC_MSG_HTNG_SET_LED_BACKLIGHT) ")\n"
	"  --htng-set-tv-osd-control on=<val>\n"
	"                                  Send HTNG_SET_TV_OSD_CONTROL message (" xstr(CEC_MSG_HTNG_SET_TV_OSD_CONTROL) ")\n"
	"  --htng-set-audio-only-display on=<val>\n"
	"                                  Send HTNG_SET_AUDIO_ONLY_DISPLAY message (" xstr(CEC_MSG_HTNG_SET_AUDIO_ONLY_DISPLAY) ")\n"
	"  --htng-set-date date=<val>\n"
	"                                  Send HTNG_SET_DATE message (" xstr(CEC_MSG_HTNG_SET_DATE) ")\n"
	"  --htng-set-date-format ddmm=<val>\n"
	"                                  Send HTNG_SET_DATE_FORMAT message (" xstr(CEC_MSG_HTNG_SET_DATE_FORMAT) ")\n"
	"  --htng-set-time time=<val>\n"
	"                                  Send HTNG_SET_TIME message (" xstr(CEC_MSG_HTNG_SET_TIME) ")\n"
	"  --htng-set-clk-brightness-standby brightness=<val>\n"
	"                                  Send HTNG_SET_CLK_BRIGHTNESS_STANDBY message (" xstr(CEC_MSG_HTNG_SET_CLK_BRIGHTNESS_STANDBY) ")\n"
	"  --htng-set-clk-brightness-on brightness=<val>\n"
	"                                  Send HTNG_SET_CLK_BRIGHTNESS_ON message (" xstr(CEC_MSG_HTNG_SET_CLK_BRIGHTNESS_ON) ")\n"
	"  --htng-led-control htng-led-control=<val>\n"
	"                                  'htng-led-control' can have these values:\n"
	"                                      default (" xstr(CEC_OP_HTNG_LED_CONTROL_DEFAULT) ")\n"
	"                                      on (" xstr(CEC_OP_HTNG_LED_CONTROL_ON) ")\n"
	"                                      off (" xstr(CEC_OP_HTNG_LED_CONTROL_OFF) ")\n"
	"                                  Send HTNG_LED_CONTROL message (" xstr(CEC_MSG_HTNG_LED_CONTROL) ")\n"
	"  --htng-lock-tv-pwr-button on=<val>\n"
	"                                  Send HTNG_LOCK_TV_PWR_BUTTON message (" xstr(CEC_MSG_HTNG_LOCK_TV_PWR_BUTTON) ")\n"
	"  --htng-lock-tv-vol-buttons on=<val>\n"
	"                                  Send HTNG_LOCK_TV_VOL_BUTTONS message (" xstr(CEC_MSG_HTNG_LOCK_TV_VOL_BUTTONS) ")\n"
	"  --htng-lock-tv-chan-buttons on=<val>\n"
	"                                  Send HTNG_LOCK_TV_CHAN_BUTTONS message (" xstr(CEC_MSG_HTNG_LOCK_TV_CHAN_BUTTONS) ")\n"
	"  --htng-lock-tv-input-buttons on=<val>\n"
	"                                  Send HTNG_LOCK_TV_INPUT_BUTTONS message (" xstr(CEC_MSG_HTNG_LOCK_TV_INPUT_BUTTONS) ")\n"
	"  --htng-lock-tv-other-buttons on=<val>\n"
	"                                  Send HTNG_LOCK_TV_OTHER_BUTTONS message (" xstr(CEC_MSG_HTNG_LOCK_TV_OTHER_BUTTONS) ")\n"
	"  --htng-lock-everything on=<val>\n"
	"                                  Send HTNG_LOCK_EVERYTHING message (" xstr(CEC_MSG_HTNG_LOCK_EVERYTHING) ")\n"
	"  --htng-lock-everything-but-pwr on=<val>\n"
	"                                  Send HTNG_LOCK_EVERYTHING_BUT_PWR message (" xstr(CEC_MSG_HTNG_LOCK_EVERYTHING_BUT_PWR) ")\n"
	"  --htng-hotel-mode on=<val>,options=<val>\n"
	"                                  Send HTNG_HOTEL_MODE message (" xstr(CEC_MSG_HTNG_HOTEL_MODE) ")\n"
	"  --htng-set-pwr-saving-profile on=<val>,val=<val>\n"
	"                                  Send HTNG_SET_PWR_SAVING_PROFILE message (" xstr(CEC_MSG_HTNG_SET_PWR_SAVING_PROFILE) ")\n"
	"  --htng-set-sleep-timer minutes=<val>\n"
	"                                  Send HTNG_SET_SLEEP_TIMER message (" xstr(CEC_MSG_HTNG_SET_SLEEP_TIMER) ")\n"
	"  --htng-set-wakeup-time time=<val>\n"
	"                                  Send HTNG_SET_WAKEUP_TIME message (" xstr(CEC_MSG_HTNG_SET_WAKEUP_TIME) ")\n"
	"  --htng-set-auto-off-time time=<val>\n"
	"                                  Send HTNG_SET_AUTO_OFF_TIME message (" xstr(CEC_MSG_HTNG_SET_AUTO_OFF_TIME) ")\n"
	"  --htng-set-wakeup-src htng-input-src=<val>,htng-tuner-type=<val>,major=<val>,input=<val>\n"
	"                                  'htng-input-src' can have these values:\n"
	"                                      tuner-1part (" xstr(CEC_OP_HTNG_INPUT_SRC_TUNER_1PART) ")\n"
	"                                      tuner-2part (" xstr(CEC_OP_HTNG_INPUT_SRC_TUNER_2PART) ")\n"
	"                                      av (" xstr(CEC_OP_HTNG_INPUT_SRC_AV) ")\n"
	"                                      pc (" xstr(CEC_OP_HTNG_INPUT_SRC_PC) ")\n"
	"                                      hdmi (" xstr(CEC_OP_HTNG_INPUT_SRC_HDMI) ")\n"
	"                                      component (" xstr(CEC_OP_HTNG_INPUT_SRC_COMPONENT) ")\n"
	"                                      dvi (" xstr(CEC_OP_HTNG_INPUT_SRC_DVI) ")\n"
	"                                      dp (" xstr(CEC_OP_HTNG_INPUT_SRC_DP) ")\n"
	"                                      usb (" xstr(CEC_OP_HTNG_INPUT_SRC_USB) ")\n"
	"                                  'htng-tuner-type' can have these values:\n"
	"                                      air (" xstr(CEC_OP_HTNG_TUNER_TYPE_AIR) ")\n"
	"                                      cable (" xstr(CEC_OP_HTNG_TUNER_TYPE_CABLE) ")\n"
	"                                      sat (" xstr(CEC_OP_HTNG_TUNER_TYPE_SAT) ")\n"
	"                                      not-specified (" xstr(CEC_OP_HTNG_TUNER_TYPE_NOT_SPECIFIED) ")\n"
	"                                  Send HTNG_SET_WAKEUP_SRC message (" xstr(CEC_MSG_HTNG_SET_WAKEUP_SRC) ")\n"
	"  --htng-set-init-wakeup-vol vol=<val>,minutes=<val>\n"
	"                                  Send HTNG_SET_INIT_WAKEUP_VOL message (" xstr(CEC_MSG_HTNG_SET_INIT_WAKEUP_VOL) ")\n"
	"  --htng-clr-all-sleep-wake       Send HTNG_CLR_ALL_SLEEP_WAKE message (" xstr(CEC_MSG_HTNG_CLR_ALL_SLEEP_WAKE) ")\n"
	"  --htng-global-direct-tune-freq htng-chan-type=<val>,htng-prog-type=<val>,htng-system-type=<val>,freq=<val>,service-id=<val>,htng-mod-type=<val>,htng-symbol-rate=<val>,symbol-rate=<val>\n"
	"                                  'htng-chan-type' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_CHAN_TYPE_AUTO) ")\n"
	"                                      ana-ant (" xstr(CEC_OP_HTNG_CHAN_TYPE_ANA_ANT) ")\n"
	"                                      ana-cable (" xstr(CEC_OP_HTNG_CHAN_TYPE_ANA_CABLE) ")\n"
	"                                      dig-ant (" xstr(CEC_OP_HTNG_CHAN_TYPE_DIG_ANT) ")\n"
	"                                      dig-cable (" xstr(CEC_OP_HTNG_CHAN_TYPE_DIG_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_HTNG_CHAN_TYPE_SATELLITE) ")\n"
	"                                  'htng-prog-type' can have these values:\n"
	"                                      av (" xstr(CEC_OP_HTNG_PROG_TYPE_AV) ")\n"
	"                                      radio (" xstr(CEC_OP_HTNG_PROG_TYPE_RADIO) ")\n"
	"                                  'htng-system-type' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_BG) ")\n"
	"                                      pal-i (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_I) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_DK) ")\n"
	"                                      pal-m (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_M) ")\n"
	"                                      pal-n (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_N) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_SECAM_BG) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_SECAM_DK) ")\n"
	"                                      secam-l (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_SECAM_L) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_NTSC_M) ")\n"
	"                                  'htng-mod-type' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_MOD_TYPE_AUTO) ")\n"
	"                                      qpsk (" xstr(CEC_OP_HTNG_MOD_TYPE_QPSK) ")\n"
	"                                      qcam16 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM16) ")\n"
	"                                      qcam32 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM32) ")\n"
	"                                      qcam64 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM64) ")\n"
	"                                      qcam128 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM128) ")\n"
	"                                      qcam256 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM256) ")\n"
	"                                      dqpsk (" xstr(CEC_OP_HTNG_MOD_TYPE_DQPSK) ")\n"
	"                                  'htng-symbol-rate' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_SYMBOL_RATE_AUTO) ")\n"
	"                                      manual (" xstr(CEC_OP_HTNG_SYMBOL_RATE_MANUAL) ")\n"
	"                                  Send HTNG_GLOBAL_DIRECT_TUNE_FREQ message (" xstr(CEC_MSG_HTNG_GLOBAL_DIRECT_TUNE_FREQ) ")\n"
	"  --htng-global-direct-tune-chan htng-chan-type=<val>,htng-prog-type=<val>,chan=<val>\n"
	"                                  'htng-chan-type' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_CHAN_TYPE_AUTO) ")\n"
	"                                      ana-ant (" xstr(CEC_OP_HTNG_CHAN_TYPE_ANA_ANT) ")\n"
	"                                      ana-cable (" xstr(CEC_OP_HTNG_CHAN_TYPE_ANA_CABLE) ")\n"
	"                                      dig-ant (" xstr(CEC_OP_HTNG_CHAN_TYPE_DIG_ANT) ")\n"
	"                                      dig-cable (" xstr(CEC_OP_HTNG_CHAN_TYPE_DIG_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_HTNG_CHAN_TYPE_SATELLITE) ")\n"
	"                                  'htng-prog-type' can have these values:\n"
	"                                      av (" xstr(CEC_OP_HTNG_PROG_TYPE_AV) ")\n"
	"                                      radio (" xstr(CEC_OP_HTNG_PROG_TYPE_RADIO) ")\n"
	"                                  Send HTNG_GLOBAL_DIRECT_TUNE_CHAN message (" xstr(CEC_MSG_HTNG_GLOBAL_DIRECT_TUNE_CHAN) ")\n"
	"  --htng-global-direct-tune-ext-freq htng-ext-chan-type=<val>,htng-prog-type=<val>,htng-system-type=<val>,freq=<val>,service-id=<val>,htng-mod-type=<val>,htng-onid=<val>,onid=<val>,htng-nid=<val>,nid=<val>,htng-tsid-plp=<val>,tsid-plp=<val>,htng-symbol-rate=<val>,symbol-rate=<val>\n"
	"                                  'htng-ext-chan-type' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_EXT_CHAN_TYPE_AUTO) ")\n"
	"                                      ana-ant (" xstr(CEC_OP_HTNG_EXT_CHAN_TYPE_ANA_ANT) ")\n"
	"                                      ana-cable (" xstr(CEC_OP_HTNG_EXT_CHAN_TYPE_ANA_CABLE) ")\n"
	"                                      dvb-t-isdb-t-dtmb (" xstr(CEC_OP_HTNG_EXT_CHAN_TYPE_DVB_T_ISDB_T_DTMB) ")\n"
	"                                      dvb-c (" xstr(CEC_OP_HTNG_EXT_CHAN_TYPE_DVB_C) ")\n"
	"                                      dvb-t2 (" xstr(CEC_OP_HTNG_EXT_CHAN_TYPE_DVB_T2) ")\n"
	"                                  'htng-prog-type' can have these values:\n"
	"                                      av (" xstr(CEC_OP_HTNG_PROG_TYPE_AV) ")\n"
	"                                      radio (" xstr(CEC_OP_HTNG_PROG_TYPE_RADIO) ")\n"
	"                                  'htng-system-type' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_BG) ")\n"
	"                                      pal-i (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_I) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_DK) ")\n"
	"                                      pal-m (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_M) ")\n"
	"                                      pal-n (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_PAL_N) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_SECAM_BG) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_SECAM_DK) ")\n"
	"                                      secam-l (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_SECAM_L) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_HTNG_SYSTEM_TYPE_NTSC_M) ")\n"
	"                                  'htng-mod-type' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_MOD_TYPE_AUTO) ")\n"
	"                                      qpsk (" xstr(CEC_OP_HTNG_MOD_TYPE_QPSK) ")\n"
	"                                      qcam16 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM16) ")\n"
	"                                      qcam32 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM32) ")\n"
	"                                      qcam64 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM64) ")\n"
	"                                      qcam128 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM128) ")\n"
	"                                      qcam256 (" xstr(CEC_OP_HTNG_MOD_TYPE_QCAM256) ")\n"
	"                                      dqpsk (" xstr(CEC_OP_HTNG_MOD_TYPE_DQPSK) ")\n"
	"                                  'htng-onid' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_ONID_AUTO) ")\n"
	"                                      manual (" xstr(CEC_OP_HTNG_ONID_MANUAL) ")\n"
	"                                  'htng-nid' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_NID_AUTO) ")\n"
	"                                      manual (" xstr(CEC_OP_HTNG_NID_MANUAL) ")\n"
	"                                  'htng-tsid-plp' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_TSID_PLP_AUTO) ")\n"
	"                                      manual (" xstr(CEC_OP_HTNG_TSID_PLP_MANUAL) ")\n"
	"                                  'htng-symbol-rate' can have these values:\n"
	"                                      auto (" xstr(CEC_OP_HTNG_SYMBOL_RATE_AUTO) ")\n"
	"                                      manual (" xstr(CEC_OP_HTNG_SYMBOL_RATE_MANUAL) ")\n"
	"                                  Send HTNG_GLOBAL_DIRECT_TUNE_EXT_FREQ message (" xstr(CEC_MSG_HTNG_GLOBAL_DIRECT_TUNE_EXT_FREQ) ")\n";

static const char *osd_display_usage =
	"  --set-osd-string disp-ctl=<val>,osd=<val>\n"
	"                                  'disp-ctl' can have these values:\n"
	"                                      default (" xstr(CEC_OP_DISP_CTL_DEFAULT) ")\n"
	"                                      until-cleared (" xstr(CEC_OP_DISP_CTL_UNTIL_CLEARED) ")\n"
	"                                      clear (" xstr(CEC_OP_DISP_CTL_CLEAR) ")\n"
	"                                  Send SET_OSD_STRING message (" xstr(CEC_MSG_SET_OSD_STRING) ")\n";

static const char *one_touch_play_usage =
	"  --active-source phys-addr=<val>\n"
	"                                  Send ACTIVE_SOURCE message (" xstr(CEC_MSG_ACTIVE_SOURCE) ", bcast)\n"
	"  --image-view-on                 Send IMAGE_VIEW_ON message (" xstr(CEC_MSG_IMAGE_VIEW_ON) ")\n"
	"  --text-view-on                  Send TEXT_VIEW_ON message (" xstr(CEC_MSG_TEXT_VIEW_ON) ")\n";

static const char *one_touch_record_usage =
	"  --record-off                    Send RECORD_OFF message (" xstr(CEC_MSG_RECORD_OFF) ")\n"
	"  --record-on-own                 Send RECORD_ON message (" xstr(CEC_MSG_RECORD_ON) ")\n"
	"  --record-on-digital service-id-method=<val>,dig-bcast-system=<val>,transport-id=<val>,service-id=<val>,orig-network-id=<val>,program-number=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'service-id-method' can have these values:\n"
	"                                      dig-id (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_DIG_ID) ")\n"
	"                                      channel (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_CHANNEL) ")\n"
	"                                  'dig-bcast-system' can have these values:\n"
	"                                      arib-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_GEN) ")\n"
	"                                      atsc-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_GEN) ")\n"
	"                                      dvb-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_GEN) ")\n"
	"                                      arib-bs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_BS) ")\n"
	"                                      arib-cs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_CS) ")\n"
	"                                      arib-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_T) ")\n"
	"                                      atsc-cable (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_CABLE) ")\n"
	"                                      atsc-sat (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_SAT) ")\n"
	"                                      atsc-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_T) ")\n"
	"                                      dvb-c (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_C) ")\n"
	"                                      dvb-s (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S) ")\n"
	"                                      dvb-s2 (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S2) ")\n"
	"                                      dvb-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_T) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send RECORD_ON message (" xstr(CEC_MSG_RECORD_ON) ")\n"
	"  --record-on-analog ana-bcast-type=<val>,ana-freq=<val>,bcast-system=<val>\n"
	"                                  'ana-bcast-type' can have these values:\n"
	"                                      cable (" xstr(CEC_OP_ANA_BCAST_TYPE_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_ANA_BCAST_TYPE_SATELLITE) ")\n"
	"                                      terrestrial (" xstr(CEC_OP_ANA_BCAST_TYPE_TERRESTRIAL) ")\n"
	"                                  'bcast-system' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_BCAST_SYSTEM_PAL_BG) ")\n"
	"                                      secam-lq (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_LQ) ")\n"
	"                                      pal-m (" xstr(CEC_OP_BCAST_SYSTEM_PAL_M) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_BCAST_SYSTEM_NTSC_M) ")\n"
	"                                      pal-i (" xstr(CEC_OP_BCAST_SYSTEM_PAL_I) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_DK) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_BG) ")\n"
	"                                      secam-l (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_L) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_BCAST_SYSTEM_PAL_DK) ")\n"
	"                                      other (" xstr(CEC_OP_BCAST_SYSTEM_OTHER) ")\n"
	"                                  Send RECORD_ON message (" xstr(CEC_MSG_RECORD_ON) ")\n"
	"  --record-on-plug plug=<val>\n"
	"                                  Send RECORD_ON message (" xstr(CEC_MSG_RECORD_ON) ")\n"
	"  --record-on-phys-addr phys-addr=<val>\n"
	"                                  Send RECORD_ON message (" xstr(CEC_MSG_RECORD_ON) ")\n"
	"  --record-status rec-status=<val>\n"
	"                                  'rec-status' can have these values:\n"
	"                                      cur-src (" xstr(CEC_OP_RECORD_STATUS_CUR_SRC) ")\n"
	"                                      dig-service (" xstr(CEC_OP_RECORD_STATUS_DIG_SERVICE) ")\n"
	"                                      ana-service (" xstr(CEC_OP_RECORD_STATUS_ANA_SERVICE) ")\n"
	"                                      ext-input (" xstr(CEC_OP_RECORD_STATUS_EXT_INPUT) ")\n"
	"                                      no-dig-service (" xstr(CEC_OP_RECORD_STATUS_NO_DIG_SERVICE) ")\n"
	"                                      no-ana-service (" xstr(CEC_OP_RECORD_STATUS_NO_ANA_SERVICE) ")\n"
	"                                      no-service (" xstr(CEC_OP_RECORD_STATUS_NO_SERVICE) ")\n"
	"                                      invalid-ext-plug (" xstr(CEC_OP_RECORD_STATUS_INVALID_EXT_PLUG) ")\n"
	"                                      invalid-ext-phys-addr (" xstr(CEC_OP_RECORD_STATUS_INVALID_EXT_PHYS_ADDR) ")\n"
	"                                      unsup-ca (" xstr(CEC_OP_RECORD_STATUS_UNSUP_CA) ")\n"
	"                                      no-ca-entitlements (" xstr(CEC_OP_RECORD_STATUS_NO_CA_ENTITLEMENTS) ")\n"
	"                                      cant-copy-src (" xstr(CEC_OP_RECORD_STATUS_CANT_COPY_SRC) ")\n"
	"                                      no-more-copies (" xstr(CEC_OP_RECORD_STATUS_NO_MORE_COPIES) ")\n"
	"                                      no-media (" xstr(CEC_OP_RECORD_STATUS_NO_MEDIA) ")\n"
	"                                      playing (" xstr(CEC_OP_RECORD_STATUS_PLAYING) ")\n"
	"                                      already-recording (" xstr(CEC_OP_RECORD_STATUS_ALREADY_RECORDING) ")\n"
	"                                      media-prot (" xstr(CEC_OP_RECORD_STATUS_MEDIA_PROT) ")\n"
	"                                      no-signal (" xstr(CEC_OP_RECORD_STATUS_NO_SIGNAL) ")\n"
	"                                      media-problem (" xstr(CEC_OP_RECORD_STATUS_MEDIA_PROBLEM) ")\n"
	"                                      no-space (" xstr(CEC_OP_RECORD_STATUS_NO_SPACE) ")\n"
	"                                      parental-lock (" xstr(CEC_OP_RECORD_STATUS_PARENTAL_LOCK) ")\n"
	"                                      terminated-ok (" xstr(CEC_OP_RECORD_STATUS_TERMINATED_OK) ")\n"
	"                                      already-term (" xstr(CEC_OP_RECORD_STATUS_ALREADY_TERM) ")\n"
	"                                      other (" xstr(CEC_OP_RECORD_STATUS_OTHER) ")\n"
	"                                  Send RECORD_STATUS message (" xstr(CEC_MSG_RECORD_STATUS) ")\n"
	"  --record-tv-screen              Send RECORD_TV_SCREEN message (" xstr(CEC_MSG_RECORD_TV_SCREEN) ")\n";

static const char *power_status_usage =
	"  --report-power-status pwr-state=<val>\n"
	"                                  'pwr-state' can have these values:\n"
	"                                      on (" xstr(CEC_OP_POWER_STATUS_ON) ")\n"
	"                                      standby (" xstr(CEC_OP_POWER_STATUS_STANDBY) ")\n"
	"                                      to-on (" xstr(CEC_OP_POWER_STATUS_TO_ON) ")\n"
	"                                      to-standby (" xstr(CEC_OP_POWER_STATUS_TO_STANDBY) ")\n"
	"                                  Send REPORT_POWER_STATUS message (" xstr(CEC_MSG_REPORT_POWER_STATUS) ")\n"
	"  --give-device-power-status      Send GIVE_DEVICE_POWER_STATUS message (" xstr(CEC_MSG_GIVE_DEVICE_POWER_STATUS) ")\n";

static const char *remote_control_passthrough_usage =
	"  --user-control-pressed ui-cmd=<val>,has-opt-arg=<val>,play-mode=<val>,ui-function-media=<val>,ui-function-select-av-input=<val>,ui-function-select-audio-input=<val>,ui-bcast-type=<val>,ui-snd-pres-ctl=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'ui-cmd' can have these values:\n"
	"                                      select (" xstr(CEC_OP_UI_CMD_SELECT) ")\n"
	"                                      up (" xstr(CEC_OP_UI_CMD_UP) ")\n"
	"                                      down (" xstr(CEC_OP_UI_CMD_DOWN) ")\n"
	"                                      left (" xstr(CEC_OP_UI_CMD_LEFT) ")\n"
	"                                      right (" xstr(CEC_OP_UI_CMD_RIGHT) ")\n"
	"                                      right-up (" xstr(CEC_OP_UI_CMD_RIGHT_UP) ")\n"
	"                                      right-down (" xstr(CEC_OP_UI_CMD_RIGHT_DOWN) ")\n"
	"                                      left-up (" xstr(CEC_OP_UI_CMD_LEFT_UP) ")\n"
	"                                      left-down (" xstr(CEC_OP_UI_CMD_LEFT_DOWN) ")\n"
	"                                      device-root-menu (" xstr(CEC_OP_UI_CMD_DEVICE_ROOT_MENU) ")\n"
	"                                      device-setup-menu (" xstr(CEC_OP_UI_CMD_DEVICE_SETUP_MENU) ")\n"
	"                                      contents-menu (" xstr(CEC_OP_UI_CMD_CONTENTS_MENU) ")\n"
	"                                      favorite-menu (" xstr(CEC_OP_UI_CMD_FAVORITE_MENU) ")\n"
	"                                      back (" xstr(CEC_OP_UI_CMD_BACK) ")\n"
	"                                      media-top-menu (" xstr(CEC_OP_UI_CMD_MEDIA_TOP_MENU) ")\n"
	"                                      media-context-sensitive-menu (" xstr(CEC_OP_UI_CMD_MEDIA_CONTEXT_SENSITIVE_MENU) ")\n"
	"                                      number-entry-mode (" xstr(CEC_OP_UI_CMD_NUMBER_ENTRY_MODE) ")\n"
	"                                      number-11 (" xstr(CEC_OP_UI_CMD_NUMBER_11) ")\n"
	"                                      number-12 (" xstr(CEC_OP_UI_CMD_NUMBER_12) ")\n"
	"                                      number-0-or-number-10 (" xstr(CEC_OP_UI_CMD_NUMBER_0_OR_NUMBER_10) ")\n"
	"                                      number-1 (" xstr(CEC_OP_UI_CMD_NUMBER_1) ")\n"
	"                                      number-2 (" xstr(CEC_OP_UI_CMD_NUMBER_2) ")\n"
	"                                      number-3 (" xstr(CEC_OP_UI_CMD_NUMBER_3) ")\n"
	"                                      number-4 (" xstr(CEC_OP_UI_CMD_NUMBER_4) ")\n"
	"                                      number-5 (" xstr(CEC_OP_UI_CMD_NUMBER_5) ")\n"
	"                                      number-6 (" xstr(CEC_OP_UI_CMD_NUMBER_6) ")\n"
	"                                      number-7 (" xstr(CEC_OP_UI_CMD_NUMBER_7) ")\n"
	"                                      number-8 (" xstr(CEC_OP_UI_CMD_NUMBER_8) ")\n"
	"                                      number-9 (" xstr(CEC_OP_UI_CMD_NUMBER_9) ")\n"
	"                                      dot (" xstr(CEC_OP_UI_CMD_DOT) ")\n"
	"                                      enter (" xstr(CEC_OP_UI_CMD_ENTER) ")\n"
	"                                      clear (" xstr(CEC_OP_UI_CMD_CLEAR) ")\n"
	"                                      next-favorite (" xstr(CEC_OP_UI_CMD_NEXT_FAVORITE) ")\n"
	"                                      channel-up (" xstr(CEC_OP_UI_CMD_CHANNEL_UP) ")\n"
	"                                      channel-down (" xstr(CEC_OP_UI_CMD_CHANNEL_DOWN) ")\n"
	"                                      previous-channel (" xstr(CEC_OP_UI_CMD_PREVIOUS_CHANNEL) ")\n"
	"                                      sound-select (" xstr(CEC_OP_UI_CMD_SOUND_SELECT) ")\n"
	"                                      input-select (" xstr(CEC_OP_UI_CMD_INPUT_SELECT) ")\n"
	"                                      display-information (" xstr(CEC_OP_UI_CMD_DISPLAY_INFORMATION) ")\n"
	"                                      help (" xstr(CEC_OP_UI_CMD_HELP) ")\n"
	"                                      page-up (" xstr(CEC_OP_UI_CMD_PAGE_UP) ")\n"
	"                                      page-down (" xstr(CEC_OP_UI_CMD_PAGE_DOWN) ")\n"
	"                                      power (" xstr(CEC_OP_UI_CMD_POWER) ")\n"
	"                                      volume-up (" xstr(CEC_OP_UI_CMD_VOLUME_UP) ")\n"
	"                                      volume-down (" xstr(CEC_OP_UI_CMD_VOLUME_DOWN) ")\n"
	"                                      mute (" xstr(CEC_OP_UI_CMD_MUTE) ")\n"
	"                                      play (" xstr(CEC_OP_UI_CMD_PLAY) ")\n"
	"                                      stop (" xstr(CEC_OP_UI_CMD_STOP) ")\n"
	"                                      pause (" xstr(CEC_OP_UI_CMD_PAUSE) ")\n"
	"                                      record (" xstr(CEC_OP_UI_CMD_RECORD) ")\n"
	"                                      rewind (" xstr(CEC_OP_UI_CMD_REWIND) ")\n"
	"                                      fast-forward (" xstr(CEC_OP_UI_CMD_FAST_FORWARD) ")\n"
	"                                      eject (" xstr(CEC_OP_UI_CMD_EJECT) ")\n"
	"                                      skip-forward (" xstr(CEC_OP_UI_CMD_SKIP_FORWARD) ")\n"
	"                                      skip-backward (" xstr(CEC_OP_UI_CMD_SKIP_BACKWARD) ")\n"
	"                                      stop-record (" xstr(CEC_OP_UI_CMD_STOP_RECORD) ")\n"
	"                                      pause-record (" xstr(CEC_OP_UI_CMD_PAUSE_RECORD) ")\n"
	"                                      angle (" xstr(CEC_OP_UI_CMD_ANGLE) ")\n"
	"                                      sub-picture (" xstr(CEC_OP_UI_CMD_SUB_PICTURE) ")\n"
	"                                      video-on-demand (" xstr(CEC_OP_UI_CMD_VIDEO_ON_DEMAND) ")\n"
	"                                      electronic-program-guide (" xstr(CEC_OP_UI_CMD_ELECTRONIC_PROGRAM_GUIDE) ")\n"
	"                                      timer-programming (" xstr(CEC_OP_UI_CMD_TIMER_PROGRAMMING) ")\n"
	"                                      initial-configuration (" xstr(CEC_OP_UI_CMD_INITIAL_CONFIGURATION) ")\n"
	"                                      select-broadcast-type (" xstr(CEC_OP_UI_CMD_SELECT_BROADCAST_TYPE) ")\n"
	"                                      select-sound-presentation (" xstr(CEC_OP_UI_CMD_SELECT_SOUND_PRESENTATION) ")\n"
	"                                      audio-description (" xstr(CEC_OP_UI_CMD_AUDIO_DESCRIPTION) ")\n"
	"                                      internet (" xstr(CEC_OP_UI_CMD_INTERNET) ")\n"
	"                                      3d-mode (" xstr(CEC_OP_UI_CMD_3D_MODE) ")\n"
	"                                      play-function (" xstr(CEC_OP_UI_CMD_PLAY_FUNCTION) ")\n"
	"                                      pause-play-function (" xstr(CEC_OP_UI_CMD_PAUSE_PLAY_FUNCTION) ")\n"
	"                                      record-function (" xstr(CEC_OP_UI_CMD_RECORD_FUNCTION) ")\n"
	"                                      pause-record-function (" xstr(CEC_OP_UI_CMD_PAUSE_RECORD_FUNCTION) ")\n"
	"                                      stop-function (" xstr(CEC_OP_UI_CMD_STOP_FUNCTION) ")\n"
	"                                      mute-function (" xstr(CEC_OP_UI_CMD_MUTE_FUNCTION) ")\n"
	"                                      restore-volume-function (" xstr(CEC_OP_UI_CMD_RESTORE_VOLUME_FUNCTION) ")\n"
	"                                      tune-function (" xstr(CEC_OP_UI_CMD_TUNE_FUNCTION) ")\n"
	"                                      select-media-function (" xstr(CEC_OP_UI_CMD_SELECT_MEDIA_FUNCTION) ")\n"
	"                                      select-av-input-function (" xstr(CEC_OP_UI_CMD_SELECT_AV_INPUT_FUNCTION) ")\n"
	"                                      select-audio-input-function (" xstr(CEC_OP_UI_CMD_SELECT_AUDIO_INPUT_FUNCTION) ")\n"
	"                                      power-toggle-function (" xstr(CEC_OP_UI_CMD_POWER_TOGGLE_FUNCTION) ")\n"
	"                                      power-off-function (" xstr(CEC_OP_UI_CMD_POWER_OFF_FUNCTION) ")\n"
	"                                      power-on-function (" xstr(CEC_OP_UI_CMD_POWER_ON_FUNCTION) ")\n"
	"                                      f1-blue (" xstr(CEC_OP_UI_CMD_F1_BLUE) ")\n"
	"                                      f2-red (" xstr(CEC_OP_UI_CMD_F2_RED) ")\n"
	"                                      f3-green (" xstr(CEC_OP_UI_CMD_F3_GREEN) ")\n"
	"                                      f4-yellow (" xstr(CEC_OP_UI_CMD_F4_YELLOW) ")\n"
	"                                      f5 (" xstr(CEC_OP_UI_CMD_F5) ")\n"
	"                                      data (" xstr(CEC_OP_UI_CMD_DATA) ")\n"
	"                                  'play-mode' can have these values:\n"
	"                                      fwd (" xstr(CEC_OP_PLAY_MODE_PLAY_FWD) ")\n"
	"                                      rev (" xstr(CEC_OP_PLAY_MODE_PLAY_REV) ")\n"
	"                                      still (" xstr(CEC_OP_PLAY_MODE_PLAY_STILL) ")\n"
	"                                      fast-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MIN) ")\n"
	"                                      fast-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MED) ")\n"
	"                                      fast-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MAX) ")\n"
	"                                      fast-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MIN) ")\n"
	"                                      fast-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MED) ")\n"
	"                                      fast-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MAX) ")\n"
	"                                      slow-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MIN) ")\n"
	"                                      slow-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MED) ")\n"
	"                                      slow-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MAX) ")\n"
	"                                      slow-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MIN) ")\n"
	"                                      slow-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MED) ")\n"
	"                                      slow-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MAX) ")\n"
	"                                  'ui-bcast-type' can have these values:\n"
	"                                      toggle-all (" xstr(CEC_OP_UI_BCAST_TYPE_TOGGLE_ALL) ")\n"
	"                                      toggle-dig-ana (" xstr(CEC_OP_UI_BCAST_TYPE_TOGGLE_DIG_ANA) ")\n"
	"                                      analogue (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE) ")\n"
	"                                      analogue-t (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_T) ")\n"
	"                                      analogue-cable (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_CABLE) ")\n"
	"                                      analogue-sat (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_SAT) ")\n"
	"                                      digital (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL) ")\n"
	"                                      digital-t (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_T) ")\n"
	"                                      digital-cable (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_CABLE) ")\n"
	"                                      digital-sat (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_SAT) ")\n"
	"                                      digital-com-sat (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_COM_SAT) ")\n"
	"                                      digital-com-sat2 (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_COM_SAT2) ")\n"
	"                                      ip (" xstr(CEC_OP_UI_BCAST_TYPE_IP) ")\n"
	"                                  'ui-snd-pres-ctl' can have these values:\n"
	"                                      dual-mono (" xstr(CEC_OP_UI_SND_PRES_CTL_DUAL_MONO) ")\n"
	"                                      karaoke (" xstr(CEC_OP_UI_SND_PRES_CTL_KARAOKE) ")\n"
	"                                      downmix (" xstr(CEC_OP_UI_SND_PRES_CTL_DOWNMIX) ")\n"
	"                                      reverb (" xstr(CEC_OP_UI_SND_PRES_CTL_REVERB) ")\n"
	"                                      equalizer (" xstr(CEC_OP_UI_SND_PRES_CTL_EQUALIZER) ")\n"
	"                                      bass-up (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_UP) ")\n"
	"                                      bass-neutral (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_NEUTRAL) ")\n"
	"                                      bass-down (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_DOWN) ")\n"
	"                                      treble-up (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_UP) ")\n"
	"                                      treble-neutral (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_NEUTRAL) ")\n"
	"                                      treble-down (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_DOWN) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send USER_CONTROL_PRESSED message (" xstr(CEC_MSG_USER_CONTROL_PRESSED) ")\n"
	"  --user-control-released         Send USER_CONTROL_RELEASED message (" xstr(CEC_MSG_USER_CONTROL_RELEASED) ")\n";

static const char *routing_control_usage =
	"  --inactive-source phys-addr=<val>\n"
	"                                  Send INACTIVE_SOURCE message (" xstr(CEC_MSG_INACTIVE_SOURCE) ")\n"
	"  --request-active-source         Send REQUEST_ACTIVE_SOURCE message (" xstr(CEC_MSG_REQUEST_ACTIVE_SOURCE) ", bcast)\n"
	"  --routing-information phys-addr=<val>\n"
	"                                  Send ROUTING_INFORMATION message (" xstr(CEC_MSG_ROUTING_INFORMATION) ", bcast)\n"
	"  --routing-change orig-phys-addr=<val>,new-phys-addr=<val>\n"
	"                                  Send ROUTING_CHANGE message (" xstr(CEC_MSG_ROUTING_CHANGE) ", bcast)\n"
	"  --set-stream-path phys-addr=<val>\n"
	"                                  Send SET_STREAM_PATH message (" xstr(CEC_MSG_SET_STREAM_PATH) ", bcast)\n"
	"  --active-source phys-addr=<val>\n"
	"                                  Send ACTIVE_SOURCE message (" xstr(CEC_MSG_ACTIVE_SOURCE) ", bcast)\n";

static const char *standby_usage =
	"  --standby                       Send STANDBY message (" xstr(CEC_MSG_STANDBY) ")\n";

static const char *system_audio_control_usage =
	"  --report-audio-status aud-mute-status=<val>,aud-vol-status=<val>\n"
	"                                  'aud-mute-status' can have these values:\n"
	"                                      off (" xstr(CEC_OP_AUD_MUTE_STATUS_OFF) ")\n"
	"                                      on (" xstr(CEC_OP_AUD_MUTE_STATUS_ON) ")\n"
	"                                  Send REPORT_AUDIO_STATUS message (" xstr(CEC_MSG_REPORT_AUDIO_STATUS) ")\n"
	"  --give-audio-status             Send GIVE_AUDIO_STATUS message (" xstr(CEC_MSG_GIVE_AUDIO_STATUS) ")\n"
	"  --set-system-audio-mode sys-aud-status=<val>\n"
	"                                  'sys-aud-status' can have these values:\n"
	"                                      off (" xstr(CEC_OP_SYS_AUD_STATUS_OFF) ")\n"
	"                                      on (" xstr(CEC_OP_SYS_AUD_STATUS_ON) ")\n"
	"                                  Send SET_SYSTEM_AUDIO_MODE message (" xstr(CEC_MSG_SET_SYSTEM_AUDIO_MODE) ")\n"
	"  --system-audio-mode-request phys-addr=<val>\n"
	"                                  Send SYSTEM_AUDIO_MODE_REQUEST message (" xstr(CEC_MSG_SYSTEM_AUDIO_MODE_REQUEST) ")\n"
	"  --system-audio-mode-status sys-aud-status=<val>\n"
	"                                  'sys-aud-status' can have these values:\n"
	"                                      off (" xstr(CEC_OP_SYS_AUD_STATUS_OFF) ")\n"
	"                                      on (" xstr(CEC_OP_SYS_AUD_STATUS_ON) ")\n"
	"                                  Send SYSTEM_AUDIO_MODE_STATUS message (" xstr(CEC_MSG_SYSTEM_AUDIO_MODE_STATUS) ")\n"
	"  --give-system-audio-mode-status Send GIVE_SYSTEM_AUDIO_MODE_STATUS message (" xstr(CEC_MSG_GIVE_SYSTEM_AUDIO_MODE_STATUS) ")\n"
	"  --report-short-audio-descriptor num-descriptors=<val>,descriptor1=<val>,descriptor2=<val>,descriptor3=<val>,descriptor4=<val>\n"
	"                                  Send REPORT_SHORT_AUDIO_DESCRIPTOR message (" xstr(CEC_MSG_REPORT_SHORT_AUDIO_DESCRIPTOR) ")\n"
	"  --request-short-audio-descriptor num-descriptors=<val>,audio-format-id1=<val>,audio-format-code1=<val>,audio-format-id2=<val>,audio-format-code2=<val>,audio-format-id3=<val>,audio-format-code3=<val>,audio-format-id4=<val>,audio-format-code4=<val>\n"
	"                                  Send REQUEST_SHORT_AUDIO_DESCRIPTOR message (" xstr(CEC_MSG_REQUEST_SHORT_AUDIO_DESCRIPTOR) ")\n"
	"  --user-control-pressed ui-cmd=<val>,has-opt-arg=<val>,play-mode=<val>,ui-function-media=<val>,ui-function-select-av-input=<val>,ui-function-select-audio-input=<val>,ui-bcast-type=<val>,ui-snd-pres-ctl=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'ui-cmd' can have these values:\n"
	"                                      select (" xstr(CEC_OP_UI_CMD_SELECT) ")\n"
	"                                      up (" xstr(CEC_OP_UI_CMD_UP) ")\n"
	"                                      down (" xstr(CEC_OP_UI_CMD_DOWN) ")\n"
	"                                      left (" xstr(CEC_OP_UI_CMD_LEFT) ")\n"
	"                                      right (" xstr(CEC_OP_UI_CMD_RIGHT) ")\n"
	"                                      right-up (" xstr(CEC_OP_UI_CMD_RIGHT_UP) ")\n"
	"                                      right-down (" xstr(CEC_OP_UI_CMD_RIGHT_DOWN) ")\n"
	"                                      left-up (" xstr(CEC_OP_UI_CMD_LEFT_UP) ")\n"
	"                                      left-down (" xstr(CEC_OP_UI_CMD_LEFT_DOWN) ")\n"
	"                                      device-root-menu (" xstr(CEC_OP_UI_CMD_DEVICE_ROOT_MENU) ")\n"
	"                                      device-setup-menu (" xstr(CEC_OP_UI_CMD_DEVICE_SETUP_MENU) ")\n"
	"                                      contents-menu (" xstr(CEC_OP_UI_CMD_CONTENTS_MENU) ")\n"
	"                                      favorite-menu (" xstr(CEC_OP_UI_CMD_FAVORITE_MENU) ")\n"
	"                                      back (" xstr(CEC_OP_UI_CMD_BACK) ")\n"
	"                                      media-top-menu (" xstr(CEC_OP_UI_CMD_MEDIA_TOP_MENU) ")\n"
	"                                      media-context-sensitive-menu (" xstr(CEC_OP_UI_CMD_MEDIA_CONTEXT_SENSITIVE_MENU) ")\n"
	"                                      number-entry-mode (" xstr(CEC_OP_UI_CMD_NUMBER_ENTRY_MODE) ")\n"
	"                                      number-11 (" xstr(CEC_OP_UI_CMD_NUMBER_11) ")\n"
	"                                      number-12 (" xstr(CEC_OP_UI_CMD_NUMBER_12) ")\n"
	"                                      number-0-or-number-10 (" xstr(CEC_OP_UI_CMD_NUMBER_0_OR_NUMBER_10) ")\n"
	"                                      number-1 (" xstr(CEC_OP_UI_CMD_NUMBER_1) ")\n"
	"                                      number-2 (" xstr(CEC_OP_UI_CMD_NUMBER_2) ")\n"
	"                                      number-3 (" xstr(CEC_OP_UI_CMD_NUMBER_3) ")\n"
	"                                      number-4 (" xstr(CEC_OP_UI_CMD_NUMBER_4) ")\n"
	"                                      number-5 (" xstr(CEC_OP_UI_CMD_NUMBER_5) ")\n"
	"                                      number-6 (" xstr(CEC_OP_UI_CMD_NUMBER_6) ")\n"
	"                                      number-7 (" xstr(CEC_OP_UI_CMD_NUMBER_7) ")\n"
	"                                      number-8 (" xstr(CEC_OP_UI_CMD_NUMBER_8) ")\n"
	"                                      number-9 (" xstr(CEC_OP_UI_CMD_NUMBER_9) ")\n"
	"                                      dot (" xstr(CEC_OP_UI_CMD_DOT) ")\n"
	"                                      enter (" xstr(CEC_OP_UI_CMD_ENTER) ")\n"
	"                                      clear (" xstr(CEC_OP_UI_CMD_CLEAR) ")\n"
	"                                      next-favorite (" xstr(CEC_OP_UI_CMD_NEXT_FAVORITE) ")\n"
	"                                      channel-up (" xstr(CEC_OP_UI_CMD_CHANNEL_UP) ")\n"
	"                                      channel-down (" xstr(CEC_OP_UI_CMD_CHANNEL_DOWN) ")\n"
	"                                      previous-channel (" xstr(CEC_OP_UI_CMD_PREVIOUS_CHANNEL) ")\n"
	"                                      sound-select (" xstr(CEC_OP_UI_CMD_SOUND_SELECT) ")\n"
	"                                      input-select (" xstr(CEC_OP_UI_CMD_INPUT_SELECT) ")\n"
	"                                      display-information (" xstr(CEC_OP_UI_CMD_DISPLAY_INFORMATION) ")\n"
	"                                      help (" xstr(CEC_OP_UI_CMD_HELP) ")\n"
	"                                      page-up (" xstr(CEC_OP_UI_CMD_PAGE_UP) ")\n"
	"                                      page-down (" xstr(CEC_OP_UI_CMD_PAGE_DOWN) ")\n"
	"                                      power (" xstr(CEC_OP_UI_CMD_POWER) ")\n"
	"                                      volume-up (" xstr(CEC_OP_UI_CMD_VOLUME_UP) ")\n"
	"                                      volume-down (" xstr(CEC_OP_UI_CMD_VOLUME_DOWN) ")\n"
	"                                      mute (" xstr(CEC_OP_UI_CMD_MUTE) ")\n"
	"                                      play (" xstr(CEC_OP_UI_CMD_PLAY) ")\n"
	"                                      stop (" xstr(CEC_OP_UI_CMD_STOP) ")\n"
	"                                      pause (" xstr(CEC_OP_UI_CMD_PAUSE) ")\n"
	"                                      record (" xstr(CEC_OP_UI_CMD_RECORD) ")\n"
	"                                      rewind (" xstr(CEC_OP_UI_CMD_REWIND) ")\n"
	"                                      fast-forward (" xstr(CEC_OP_UI_CMD_FAST_FORWARD) ")\n"
	"                                      eject (" xstr(CEC_OP_UI_CMD_EJECT) ")\n"
	"                                      skip-forward (" xstr(CEC_OP_UI_CMD_SKIP_FORWARD) ")\n"
	"                                      skip-backward (" xstr(CEC_OP_UI_CMD_SKIP_BACKWARD) ")\n"
	"                                      stop-record (" xstr(CEC_OP_UI_CMD_STOP_RECORD) ")\n"
	"                                      pause-record (" xstr(CEC_OP_UI_CMD_PAUSE_RECORD) ")\n"
	"                                      angle (" xstr(CEC_OP_UI_CMD_ANGLE) ")\n"
	"                                      sub-picture (" xstr(CEC_OP_UI_CMD_SUB_PICTURE) ")\n"
	"                                      video-on-demand (" xstr(CEC_OP_UI_CMD_VIDEO_ON_DEMAND) ")\n"
	"                                      electronic-program-guide (" xstr(CEC_OP_UI_CMD_ELECTRONIC_PROGRAM_GUIDE) ")\n"
	"                                      timer-programming (" xstr(CEC_OP_UI_CMD_TIMER_PROGRAMMING) ")\n"
	"                                      initial-configuration (" xstr(CEC_OP_UI_CMD_INITIAL_CONFIGURATION) ")\n"
	"                                      select-broadcast-type (" xstr(CEC_OP_UI_CMD_SELECT_BROADCAST_TYPE) ")\n"
	"                                      select-sound-presentation (" xstr(CEC_OP_UI_CMD_SELECT_SOUND_PRESENTATION) ")\n"
	"                                      audio-description (" xstr(CEC_OP_UI_CMD_AUDIO_DESCRIPTION) ")\n"
	"                                      internet (" xstr(CEC_OP_UI_CMD_INTERNET) ")\n"
	"                                      3d-mode (" xstr(CEC_OP_UI_CMD_3D_MODE) ")\n"
	"                                      play-function (" xstr(CEC_OP_UI_CMD_PLAY_FUNCTION) ")\n"
	"                                      pause-play-function (" xstr(CEC_OP_UI_CMD_PAUSE_PLAY_FUNCTION) ")\n"
	"                                      record-function (" xstr(CEC_OP_UI_CMD_RECORD_FUNCTION) ")\n"
	"                                      pause-record-function (" xstr(CEC_OP_UI_CMD_PAUSE_RECORD_FUNCTION) ")\n"
	"                                      stop-function (" xstr(CEC_OP_UI_CMD_STOP_FUNCTION) ")\n"
	"                                      mute-function (" xstr(CEC_OP_UI_CMD_MUTE_FUNCTION) ")\n"
	"                                      restore-volume-function (" xstr(CEC_OP_UI_CMD_RESTORE_VOLUME_FUNCTION) ")\n"
	"                                      tune-function (" xstr(CEC_OP_UI_CMD_TUNE_FUNCTION) ")\n"
	"                                      select-media-function (" xstr(CEC_OP_UI_CMD_SELECT_MEDIA_FUNCTION) ")\n"
	"                                      select-av-input-function (" xstr(CEC_OP_UI_CMD_SELECT_AV_INPUT_FUNCTION) ")\n"
	"                                      select-audio-input-function (" xstr(CEC_OP_UI_CMD_SELECT_AUDIO_INPUT_FUNCTION) ")\n"
	"                                      power-toggle-function (" xstr(CEC_OP_UI_CMD_POWER_TOGGLE_FUNCTION) ")\n"
	"                                      power-off-function (" xstr(CEC_OP_UI_CMD_POWER_OFF_FUNCTION) ")\n"
	"                                      power-on-function (" xstr(CEC_OP_UI_CMD_POWER_ON_FUNCTION) ")\n"
	"                                      f1-blue (" xstr(CEC_OP_UI_CMD_F1_BLUE) ")\n"
	"                                      f2-red (" xstr(CEC_OP_UI_CMD_F2_RED) ")\n"
	"                                      f3-green (" xstr(CEC_OP_UI_CMD_F3_GREEN) ")\n"
	"                                      f4-yellow (" xstr(CEC_OP_UI_CMD_F4_YELLOW) ")\n"
	"                                      f5 (" xstr(CEC_OP_UI_CMD_F5) ")\n"
	"                                      data (" xstr(CEC_OP_UI_CMD_DATA) ")\n"
	"                                  'play-mode' can have these values:\n"
	"                                      fwd (" xstr(CEC_OP_PLAY_MODE_PLAY_FWD) ")\n"
	"                                      rev (" xstr(CEC_OP_PLAY_MODE_PLAY_REV) ")\n"
	"                                      still (" xstr(CEC_OP_PLAY_MODE_PLAY_STILL) ")\n"
	"                                      fast-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MIN) ")\n"
	"                                      fast-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MED) ")\n"
	"                                      fast-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_FWD_MAX) ")\n"
	"                                      fast-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MIN) ")\n"
	"                                      fast-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MED) ")\n"
	"                                      fast-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_FAST_REV_MAX) ")\n"
	"                                      slow-fwd-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MIN) ")\n"
	"                                      slow-fwd-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MED) ")\n"
	"                                      slow-fwd-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_FWD_MAX) ")\n"
	"                                      slow-rev-min (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MIN) ")\n"
	"                                      slow-rev-med (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MED) ")\n"
	"                                      slow-rev-max (" xstr(CEC_OP_PLAY_MODE_PLAY_SLOW_REV_MAX) ")\n"
	"                                  'ui-bcast-type' can have these values:\n"
	"                                      toggle-all (" xstr(CEC_OP_UI_BCAST_TYPE_TOGGLE_ALL) ")\n"
	"                                      toggle-dig-ana (" xstr(CEC_OP_UI_BCAST_TYPE_TOGGLE_DIG_ANA) ")\n"
	"                                      analogue (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE) ")\n"
	"                                      analogue-t (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_T) ")\n"
	"                                      analogue-cable (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_CABLE) ")\n"
	"                                      analogue-sat (" xstr(CEC_OP_UI_BCAST_TYPE_ANALOGUE_SAT) ")\n"
	"                                      digital (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL) ")\n"
	"                                      digital-t (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_T) ")\n"
	"                                      digital-cable (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_CABLE) ")\n"
	"                                      digital-sat (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_SAT) ")\n"
	"                                      digital-com-sat (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_COM_SAT) ")\n"
	"                                      digital-com-sat2 (" xstr(CEC_OP_UI_BCAST_TYPE_DIGITAL_COM_SAT2) ")\n"
	"                                      ip (" xstr(CEC_OP_UI_BCAST_TYPE_IP) ")\n"
	"                                  'ui-snd-pres-ctl' can have these values:\n"
	"                                      dual-mono (" xstr(CEC_OP_UI_SND_PRES_CTL_DUAL_MONO) ")\n"
	"                                      karaoke (" xstr(CEC_OP_UI_SND_PRES_CTL_KARAOKE) ")\n"
	"                                      downmix (" xstr(CEC_OP_UI_SND_PRES_CTL_DOWNMIX) ")\n"
	"                                      reverb (" xstr(CEC_OP_UI_SND_PRES_CTL_REVERB) ")\n"
	"                                      equalizer (" xstr(CEC_OP_UI_SND_PRES_CTL_EQUALIZER) ")\n"
	"                                      bass-up (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_UP) ")\n"
	"                                      bass-neutral (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_NEUTRAL) ")\n"
	"                                      bass-down (" xstr(CEC_OP_UI_SND_PRES_CTL_BASS_DOWN) ")\n"
	"                                      treble-up (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_UP) ")\n"
	"                                      treble-neutral (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_NEUTRAL) ")\n"
	"                                      treble-down (" xstr(CEC_OP_UI_SND_PRES_CTL_TREBLE_DOWN) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send USER_CONTROL_PRESSED message (" xstr(CEC_MSG_USER_CONTROL_PRESSED) ")\n"
	"  --user-control-released         Send USER_CONTROL_RELEASED message (" xstr(CEC_MSG_USER_CONTROL_RELEASED) ")\n";

static const char *system_information_usage =
	"  --cec-version cec-version=<val>\n"
	"                                  'cec-version' can have these values:\n"
	"                                      version-1-3a (" xstr(CEC_OP_CEC_VERSION_1_3A) ")\n"
	"                                      version-1-4 (" xstr(CEC_OP_CEC_VERSION_1_4) ")\n"
	"                                      version-2-0 (" xstr(CEC_OP_CEC_VERSION_2_0) ")\n"
	"                                  Send CEC_VERSION message (" xstr(CEC_MSG_CEC_VERSION) ")\n"
	"  --get-cec-version               Send GET_CEC_VERSION message (" xstr(CEC_MSG_GET_CEC_VERSION) ")\n"
	"  --report-physical-addr phys-addr=<val>,prim-devtype=<val>\n"
	"                                  'prim-devtype' can have these values:\n"
	"                                      tv (" xstr(CEC_OP_PRIM_DEVTYPE_TV) ")\n"
	"                                      record (" xstr(CEC_OP_PRIM_DEVTYPE_RECORD) ")\n"
	"                                      tuner (" xstr(CEC_OP_PRIM_DEVTYPE_TUNER) ")\n"
	"                                      playback (" xstr(CEC_OP_PRIM_DEVTYPE_PLAYBACK) ")\n"
	"                                      audiosystem (" xstr(CEC_OP_PRIM_DEVTYPE_AUDIOSYSTEM) ")\n"
	"                                      switch (" xstr(CEC_OP_PRIM_DEVTYPE_SWITCH) ")\n"
	"                                      processor (" xstr(CEC_OP_PRIM_DEVTYPE_PROCESSOR) ")\n"
	"                                  Send REPORT_PHYSICAL_ADDR message (" xstr(CEC_MSG_REPORT_PHYSICAL_ADDR) ", bcast)\n"
	"  --give-physical-addr            Send GIVE_PHYSICAL_ADDR message (" xstr(CEC_MSG_GIVE_PHYSICAL_ADDR) ")\n"
	"  --set-menu-language language=<val>\n"
	"                                  Send SET_MENU_LANGUAGE message (" xstr(CEC_MSG_SET_MENU_LANGUAGE) ", bcast)\n"
	"  --get-menu-language             Send GET_MENU_LANGUAGE message (" xstr(CEC_MSG_GET_MENU_LANGUAGE) ")\n"
	"  --report-features cec-version=<val>,all-device-types=<val>,rc-profile=<val>,dev-features=<val>\n"
	"                                  'cec-version' can have these values:\n"
	"                                      version-1-3a (" xstr(CEC_OP_CEC_VERSION_1_3A) ")\n"
	"                                      version-1-4 (" xstr(CEC_OP_CEC_VERSION_1_4) ")\n"
	"                                      version-2-0 (" xstr(CEC_OP_CEC_VERSION_2_0) ")\n"
	"                                  'all-device-types' can have these values:\n"
	"                                      tv (" xstr(CEC_OP_ALL_DEVTYPE_TV) ")\n"
	"                                      record (" xstr(CEC_OP_ALL_DEVTYPE_RECORD) ")\n"
	"                                      tuner (" xstr(CEC_OP_ALL_DEVTYPE_TUNER) ")\n"
	"                                      playback (" xstr(CEC_OP_ALL_DEVTYPE_PLAYBACK) ")\n"
	"                                      audiosystem (" xstr(CEC_OP_ALL_DEVTYPE_AUDIOSYSTEM) ")\n"
	"                                      switch (" xstr(CEC_OP_ALL_DEVTYPE_SWITCH) ")\n"
	"                                  'rc-profile' can have these values:\n"
	"                                      tv-profile-none (" xstr(CEC_OP_FEAT_RC_TV_PROFILE_NONE) ")\n"
	"                                      tv-profile-1 (" xstr(CEC_OP_FEAT_RC_TV_PROFILE_1) ")\n"
	"                                      tv-profile-2 (" xstr(CEC_OP_FEAT_RC_TV_PROFILE_2) ")\n"
	"                                      tv-profile-3 (" xstr(CEC_OP_FEAT_RC_TV_PROFILE_3) ")\n"
	"                                      tv-profile-4 (" xstr(CEC_OP_FEAT_RC_TV_PROFILE_4) ")\n"
	"                                      src-has-dev-root-menu (" xstr(CEC_OP_FEAT_RC_SRC_HAS_DEV_ROOT_MENU) ")\n"
	"                                      src-has-dev-setup-menu (" xstr(CEC_OP_FEAT_RC_SRC_HAS_DEV_SETUP_MENU) ")\n"
	"                                      src-has-contents-menu (" xstr(CEC_OP_FEAT_RC_SRC_HAS_CONTENTS_MENU) ")\n"
	"                                      src-has-media-top-menu (" xstr(CEC_OP_FEAT_RC_SRC_HAS_MEDIA_TOP_MENU) ")\n"
	"                                      src-has-media-context-menu (" xstr(CEC_OP_FEAT_RC_SRC_HAS_MEDIA_CONTEXT_MENU) ")\n"
	"                                  'dev-features' can have these values:\n"
	"                                      has-record-tv-screen (" xstr(CEC_OP_FEAT_DEV_HAS_RECORD_TV_SCREEN) ")\n"
	"                                      has-set-osd-string (" xstr(CEC_OP_FEAT_DEV_HAS_SET_OSD_STRING) ")\n"
	"                                      has-deck-control (" xstr(CEC_OP_FEAT_DEV_HAS_DECK_CONTROL) ")\n"
	"                                      has-set-audio-rate (" xstr(CEC_OP_FEAT_DEV_HAS_SET_AUDIO_RATE) ")\n"
	"                                      sink-has-arc-tx (" xstr(CEC_OP_FEAT_DEV_SINK_HAS_ARC_TX) ")\n"
	"                                      source-has-arc-rx (" xstr(CEC_OP_FEAT_DEV_SOURCE_HAS_ARC_RX) ")\n"
	"                                  Send REPORT_FEATURES message (" xstr(CEC_MSG_REPORT_FEATURES) ", bcast)\n"
	"  --give-features                 Send GIVE_FEATURES message (" xstr(CEC_MSG_GIVE_FEATURES) ")\n";

static const char *timer_programming_usage =
	"  --timer-status timer-overlap-warning=<val>,media-info=<val>,prog-info=<val>,prog-error=<val>,duration-hr=<val>,duration-min=<val>\n"
	"                                  'timer-overlap-warning' can have these values:\n"
	"                                      no-overlap (" xstr(CEC_OP_TIMER_OVERLAP_WARNING_NO_OVERLAP) ")\n"
	"                                      overlap (" xstr(CEC_OP_TIMER_OVERLAP_WARNING_OVERLAP) ")\n"
	"                                  'media-info' can have these values:\n"
	"                                      unprot-media (" xstr(CEC_OP_MEDIA_INFO_UNPROT_MEDIA) ")\n"
	"                                      prot-media (" xstr(CEC_OP_MEDIA_INFO_PROT_MEDIA) ")\n"
	"                                      no-media (" xstr(CEC_OP_MEDIA_INFO_NO_MEDIA) ")\n"
	"                                  'prog-info' can have these values:\n"
	"                                      enough-space (" xstr(CEC_OP_PROG_INFO_ENOUGH_SPACE) ")\n"
	"                                      not-enough-space (" xstr(CEC_OP_PROG_INFO_NOT_ENOUGH_SPACE) ")\n"
	"                                      might-not-be-enough-space (" xstr(CEC_OP_PROG_INFO_MIGHT_NOT_BE_ENOUGH_SPACE) ")\n"
	"                                      none-available (" xstr(CEC_OP_PROG_INFO_NONE_AVAILABLE) ")\n"
	"                                  'prog-error' can have these values:\n"
	"                                      no-free-timer (" xstr(CEC_OP_PROG_ERROR_NO_FREE_TIMER) ")\n"
	"                                      date-out-of-range (" xstr(CEC_OP_PROG_ERROR_DATE_OUT_OF_RANGE) ")\n"
	"                                      rec-seq-error (" xstr(CEC_OP_PROG_ERROR_REC_SEQ_ERROR) ")\n"
	"                                      inv-ext-plug (" xstr(CEC_OP_PROG_ERROR_INV_EXT_PLUG) ")\n"
	"                                      inv-ext-phys-addr (" xstr(CEC_OP_PROG_ERROR_INV_EXT_PHYS_ADDR) ")\n"
	"                                      ca-unsupp (" xstr(CEC_OP_PROG_ERROR_CA_UNSUPP) ")\n"
	"                                      insuf-ca-entitlements (" xstr(CEC_OP_PROG_ERROR_INSUF_CA_ENTITLEMENTS) ")\n"
	"                                      resolution-unsupp (" xstr(CEC_OP_PROG_ERROR_RESOLUTION_UNSUPP) ")\n"
	"                                      parental-lock (" xstr(CEC_OP_PROG_ERROR_PARENTAL_LOCK) ")\n"
	"                                      clock-failure (" xstr(CEC_OP_PROG_ERROR_CLOCK_FAILURE) ")\n"
	"                                      duplicate (" xstr(CEC_OP_PROG_ERROR_DUPLICATE) ")\n"
	"                                  Send TIMER_STATUS message (" xstr(CEC_MSG_TIMER_STATUS) ")\n"
	"  --timer-cleared-status timer-cleared-status=<val>\n"
	"                                  'timer-cleared-status' can have these values:\n"
	"                                      recording (" xstr(CEC_OP_TIMER_CLR_STAT_RECORDING) ")\n"
	"                                      no-matching (" xstr(CEC_OP_TIMER_CLR_STAT_NO_MATCHING) ")\n"
	"                                      no-info (" xstr(CEC_OP_TIMER_CLR_STAT_NO_INFO) ")\n"
	"                                      cleared (" xstr(CEC_OP_TIMER_CLR_STAT_CLEARED) ")\n"
	"                                  Send TIMER_CLEARED_STATUS message (" xstr(CEC_MSG_TIMER_CLEARED_STATUS) ")\n"
	"  --clear-analogue-timer day=<val>,month=<val>,start-hr=<val>,start-min=<val>,duration-hr=<val>,duration-min=<val>,recording-seq=<val>,ana-bcast-type=<val>,ana-freq=<val>,bcast-system=<val>\n"
	"                                  'recording-seq' can have these values:\n"
	"                                      sunday (" xstr(CEC_OP_REC_SEQ_SUNDAY) ")\n"
	"                                      monday (" xstr(CEC_OP_REC_SEQ_MONDAY) ")\n"
	"                                      tuesday (" xstr(CEC_OP_REC_SEQ_TUESDAY) ")\n"
	"                                      wednesday (" xstr(CEC_OP_REC_SEQ_WEDNESDAY) ")\n"
	"                                      thursday (" xstr(CEC_OP_REC_SEQ_THURSDAY) ")\n"
	"                                      friday (" xstr(CEC_OP_REC_SEQ_FRIDAY) ")\n"
	"                                      saterday (" xstr(CEC_OP_REC_SEQ_SATERDAY) ")\n"
	"                                      once-only (" xstr(CEC_OP_REC_SEQ_ONCE_ONLY) ")\n"
	"                                  'ana-bcast-type' can have these values:\n"
	"                                      cable (" xstr(CEC_OP_ANA_BCAST_TYPE_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_ANA_BCAST_TYPE_SATELLITE) ")\n"
	"                                      terrestrial (" xstr(CEC_OP_ANA_BCAST_TYPE_TERRESTRIAL) ")\n"
	"                                  'bcast-system' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_BCAST_SYSTEM_PAL_BG) ")\n"
	"                                      secam-lq (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_LQ) ")\n"
	"                                      pal-m (" xstr(CEC_OP_BCAST_SYSTEM_PAL_M) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_BCAST_SYSTEM_NTSC_M) ")\n"
	"                                      pal-i (" xstr(CEC_OP_BCAST_SYSTEM_PAL_I) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_DK) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_BG) ")\n"
	"                                      secam-l (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_L) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_BCAST_SYSTEM_PAL_DK) ")\n"
	"                                      other (" xstr(CEC_OP_BCAST_SYSTEM_OTHER) ")\n"
	"                                  Send CLEAR_ANALOGUE_TIMER message (" xstr(CEC_MSG_CLEAR_ANALOGUE_TIMER) ")\n"
	"  --clear-digital-timer day=<val>,month=<val>,start-hr=<val>,start-min=<val>,duration-hr=<val>,duration-min=<val>,recording-seq=<val>,service-id-method=<val>,dig-bcast-system=<val>,transport-id=<val>,service-id=<val>,orig-network-id=<val>,program-number=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'recording-seq' can have these values:\n"
	"                                      sunday (" xstr(CEC_OP_REC_SEQ_SUNDAY) ")\n"
	"                                      monday (" xstr(CEC_OP_REC_SEQ_MONDAY) ")\n"
	"                                      tuesday (" xstr(CEC_OP_REC_SEQ_TUESDAY) ")\n"
	"                                      wednesday (" xstr(CEC_OP_REC_SEQ_WEDNESDAY) ")\n"
	"                                      thursday (" xstr(CEC_OP_REC_SEQ_THURSDAY) ")\n"
	"                                      friday (" xstr(CEC_OP_REC_SEQ_FRIDAY) ")\n"
	"                                      saterday (" xstr(CEC_OP_REC_SEQ_SATERDAY) ")\n"
	"                                      once-only (" xstr(CEC_OP_REC_SEQ_ONCE_ONLY) ")\n"
	"                                  'service-id-method' can have these values:\n"
	"                                      dig-id (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_DIG_ID) ")\n"
	"                                      channel (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_CHANNEL) ")\n"
	"                                  'dig-bcast-system' can have these values:\n"
	"                                      arib-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_GEN) ")\n"
	"                                      atsc-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_GEN) ")\n"
	"                                      dvb-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_GEN) ")\n"
	"                                      arib-bs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_BS) ")\n"
	"                                      arib-cs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_CS) ")\n"
	"                                      arib-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_T) ")\n"
	"                                      atsc-cable (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_CABLE) ")\n"
	"                                      atsc-sat (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_SAT) ")\n"
	"                                      atsc-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_T) ")\n"
	"                                      dvb-c (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_C) ")\n"
	"                                      dvb-s (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S) ")\n"
	"                                      dvb-s2 (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S2) ")\n"
	"                                      dvb-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_T) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send CLEAR_DIGITAL_TIMER message (" xstr(CEC_MSG_CLEAR_DIGITAL_TIMER) ")\n"
	"  --clear-ext-timer day=<val>,month=<val>,start-hr=<val>,start-min=<val>,duration-hr=<val>,duration-min=<val>,recording-seq=<val>,ext-src-spec=<val>,plug=<val>,phys-addr=<val>\n"
	"                                  'recording-seq' can have these values:\n"
	"                                      sunday (" xstr(CEC_OP_REC_SEQ_SUNDAY) ")\n"
	"                                      monday (" xstr(CEC_OP_REC_SEQ_MONDAY) ")\n"
	"                                      tuesday (" xstr(CEC_OP_REC_SEQ_TUESDAY) ")\n"
	"                                      wednesday (" xstr(CEC_OP_REC_SEQ_WEDNESDAY) ")\n"
	"                                      thursday (" xstr(CEC_OP_REC_SEQ_THURSDAY) ")\n"
	"                                      friday (" xstr(CEC_OP_REC_SEQ_FRIDAY) ")\n"
	"                                      saterday (" xstr(CEC_OP_REC_SEQ_SATERDAY) ")\n"
	"                                      once-only (" xstr(CEC_OP_REC_SEQ_ONCE_ONLY) ")\n"
	"                                  'ext-src-spec' can have these values:\n"
	"                                      plug (" xstr(CEC_OP_EXT_SRC_PLUG) ")\n"
	"                                      phys-addr (" xstr(CEC_OP_EXT_SRC_PHYS_ADDR) ")\n"
	"                                  Send CLEAR_EXT_TIMER message (" xstr(CEC_MSG_CLEAR_EXT_TIMER) ")\n"
	"  --set-analogue-timer day=<val>,month=<val>,start-hr=<val>,start-min=<val>,duration-hr=<val>,duration-min=<val>,recording-seq=<val>,ana-bcast-type=<val>,ana-freq=<val>,bcast-system=<val>\n"
	"                                  'recording-seq' can have these values:\n"
	"                                      sunday (" xstr(CEC_OP_REC_SEQ_SUNDAY) ")\n"
	"                                      monday (" xstr(CEC_OP_REC_SEQ_MONDAY) ")\n"
	"                                      tuesday (" xstr(CEC_OP_REC_SEQ_TUESDAY) ")\n"
	"                                      wednesday (" xstr(CEC_OP_REC_SEQ_WEDNESDAY) ")\n"
	"                                      thursday (" xstr(CEC_OP_REC_SEQ_THURSDAY) ")\n"
	"                                      friday (" xstr(CEC_OP_REC_SEQ_FRIDAY) ")\n"
	"                                      saterday (" xstr(CEC_OP_REC_SEQ_SATERDAY) ")\n"
	"                                      once-only (" xstr(CEC_OP_REC_SEQ_ONCE_ONLY) ")\n"
	"                                  'ana-bcast-type' can have these values:\n"
	"                                      cable (" xstr(CEC_OP_ANA_BCAST_TYPE_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_ANA_BCAST_TYPE_SATELLITE) ")\n"
	"                                      terrestrial (" xstr(CEC_OP_ANA_BCAST_TYPE_TERRESTRIAL) ")\n"
	"                                  'bcast-system' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_BCAST_SYSTEM_PAL_BG) ")\n"
	"                                      secam-lq (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_LQ) ")\n"
	"                                      pal-m (" xstr(CEC_OP_BCAST_SYSTEM_PAL_M) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_BCAST_SYSTEM_NTSC_M) ")\n"
	"                                      pal-i (" xstr(CEC_OP_BCAST_SYSTEM_PAL_I) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_DK) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_BG) ")\n"
	"                                      secam-l (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_L) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_BCAST_SYSTEM_PAL_DK) ")\n"
	"                                      other (" xstr(CEC_OP_BCAST_SYSTEM_OTHER) ")\n"
	"                                  Send SET_ANALOGUE_TIMER message (" xstr(CEC_MSG_SET_ANALOGUE_TIMER) ")\n"
	"  --set-digital-timer day=<val>,month=<val>,start-hr=<val>,start-min=<val>,duration-hr=<val>,duration-min=<val>,recording-seq=<val>,service-id-method=<val>,dig-bcast-system=<val>,transport-id=<val>,service-id=<val>,orig-network-id=<val>,program-number=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'recording-seq' can have these values:\n"
	"                                      sunday (" xstr(CEC_OP_REC_SEQ_SUNDAY) ")\n"
	"                                      monday (" xstr(CEC_OP_REC_SEQ_MONDAY) ")\n"
	"                                      tuesday (" xstr(CEC_OP_REC_SEQ_TUESDAY) ")\n"
	"                                      wednesday (" xstr(CEC_OP_REC_SEQ_WEDNESDAY) ")\n"
	"                                      thursday (" xstr(CEC_OP_REC_SEQ_THURSDAY) ")\n"
	"                                      friday (" xstr(CEC_OP_REC_SEQ_FRIDAY) ")\n"
	"                                      saterday (" xstr(CEC_OP_REC_SEQ_SATERDAY) ")\n"
	"                                      once-only (" xstr(CEC_OP_REC_SEQ_ONCE_ONLY) ")\n"
	"                                  'service-id-method' can have these values:\n"
	"                                      dig-id (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_DIG_ID) ")\n"
	"                                      channel (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_CHANNEL) ")\n"
	"                                  'dig-bcast-system' can have these values:\n"
	"                                      arib-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_GEN) ")\n"
	"                                      atsc-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_GEN) ")\n"
	"                                      dvb-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_GEN) ")\n"
	"                                      arib-bs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_BS) ")\n"
	"                                      arib-cs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_CS) ")\n"
	"                                      arib-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_T) ")\n"
	"                                      atsc-cable (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_CABLE) ")\n"
	"                                      atsc-sat (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_SAT) ")\n"
	"                                      atsc-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_T) ")\n"
	"                                      dvb-c (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_C) ")\n"
	"                                      dvb-s (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S) ")\n"
	"                                      dvb-s2 (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S2) ")\n"
	"                                      dvb-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_T) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send SET_DIGITAL_TIMER message (" xstr(CEC_MSG_SET_DIGITAL_TIMER) ")\n"
	"  --set-ext-timer day=<val>,month=<val>,start-hr=<val>,start-min=<val>,duration-hr=<val>,duration-min=<val>,recording-seq=<val>,ext-src-spec=<val>,plug=<val>,phys-addr=<val>\n"
	"                                  'recording-seq' can have these values:\n"
	"                                      sunday (" xstr(CEC_OP_REC_SEQ_SUNDAY) ")\n"
	"                                      monday (" xstr(CEC_OP_REC_SEQ_MONDAY) ")\n"
	"                                      tuesday (" xstr(CEC_OP_REC_SEQ_TUESDAY) ")\n"
	"                                      wednesday (" xstr(CEC_OP_REC_SEQ_WEDNESDAY) ")\n"
	"                                      thursday (" xstr(CEC_OP_REC_SEQ_THURSDAY) ")\n"
	"                                      friday (" xstr(CEC_OP_REC_SEQ_FRIDAY) ")\n"
	"                                      saterday (" xstr(CEC_OP_REC_SEQ_SATERDAY) ")\n"
	"                                      once-only (" xstr(CEC_OP_REC_SEQ_ONCE_ONLY) ")\n"
	"                                  'ext-src-spec' can have these values:\n"
	"                                      plug (" xstr(CEC_OP_EXT_SRC_PLUG) ")\n"
	"                                      phys-addr (" xstr(CEC_OP_EXT_SRC_PHYS_ADDR) ")\n"
	"                                  Send SET_EXT_TIMER message (" xstr(CEC_MSG_SET_EXT_TIMER) ")\n"
	"  --set-timer-program-title prog-title=<val>\n"
	"                                  Send SET_TIMER_PROGRAM_TITLE message (" xstr(CEC_MSG_SET_TIMER_PROGRAM_TITLE) ")\n";

static const char *tuner_control_usage =
	"  --tuner-device-status-analog rec-flag=<val>,tuner-display-info=<val>,ana-bcast-type=<val>,ana-freq=<val>,bcast-system=<val>\n"
	"                                  'rec-flag' can have these values:\n"
	"                                      not-used (" xstr(CEC_OP_REC_FLAG_NOT_USED) ")\n"
	"                                      used (" xstr(CEC_OP_REC_FLAG_USED) ")\n"
	"                                  'tuner-display-info' can have these values:\n"
	"                                      digital (" xstr(CEC_OP_TUNER_DISPLAY_INFO_DIGITAL) ")\n"
	"                                      none (" xstr(CEC_OP_TUNER_DISPLAY_INFO_NONE) ")\n"
	"                                      analogue (" xstr(CEC_OP_TUNER_DISPLAY_INFO_ANALOGUE) ")\n"
	"                                  'ana-bcast-type' can have these values:\n"
	"                                      cable (" xstr(CEC_OP_ANA_BCAST_TYPE_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_ANA_BCAST_TYPE_SATELLITE) ")\n"
	"                                      terrestrial (" xstr(CEC_OP_ANA_BCAST_TYPE_TERRESTRIAL) ")\n"
	"                                  'bcast-system' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_BCAST_SYSTEM_PAL_BG) ")\n"
	"                                      secam-lq (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_LQ) ")\n"
	"                                      pal-m (" xstr(CEC_OP_BCAST_SYSTEM_PAL_M) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_BCAST_SYSTEM_NTSC_M) ")\n"
	"                                      pal-i (" xstr(CEC_OP_BCAST_SYSTEM_PAL_I) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_DK) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_BG) ")\n"
	"                                      secam-l (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_L) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_BCAST_SYSTEM_PAL_DK) ")\n"
	"                                      other (" xstr(CEC_OP_BCAST_SYSTEM_OTHER) ")\n"
	"                                  Send TUNER_DEVICE_STATUS message (" xstr(CEC_MSG_TUNER_DEVICE_STATUS) ")\n"
	"  --tuner-device-status-digital rec-flag=<val>,tuner-display-info=<val>,service-id-method=<val>,dig-bcast-system=<val>,transport-id=<val>,service-id=<val>,orig-network-id=<val>,program-number=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'rec-flag' can have these values:\n"
	"                                      not-used (" xstr(CEC_OP_REC_FLAG_NOT_USED) ")\n"
	"                                      used (" xstr(CEC_OP_REC_FLAG_USED) ")\n"
	"                                  'tuner-display-info' can have these values:\n"
	"                                      digital (" xstr(CEC_OP_TUNER_DISPLAY_INFO_DIGITAL) ")\n"
	"                                      none (" xstr(CEC_OP_TUNER_DISPLAY_INFO_NONE) ")\n"
	"                                      analogue (" xstr(CEC_OP_TUNER_DISPLAY_INFO_ANALOGUE) ")\n"
	"                                  'service-id-method' can have these values:\n"
	"                                      dig-id (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_DIG_ID) ")\n"
	"                                      channel (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_CHANNEL) ")\n"
	"                                  'dig-bcast-system' can have these values:\n"
	"                                      arib-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_GEN) ")\n"
	"                                      atsc-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_GEN) ")\n"
	"                                      dvb-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_GEN) ")\n"
	"                                      arib-bs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_BS) ")\n"
	"                                      arib-cs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_CS) ")\n"
	"                                      arib-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_T) ")\n"
	"                                      atsc-cable (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_CABLE) ")\n"
	"                                      atsc-sat (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_SAT) ")\n"
	"                                      atsc-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_T) ")\n"
	"                                      dvb-c (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_C) ")\n"
	"                                      dvb-s (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S) ")\n"
	"                                      dvb-s2 (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S2) ")\n"
	"                                      dvb-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_T) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send TUNER_DEVICE_STATUS message (" xstr(CEC_MSG_TUNER_DEVICE_STATUS) ")\n"
	"  --give-tuner-device-status status-req=<val>\n"
	"                                  'status-req' can have these values:\n"
	"                                      on (" xstr(CEC_OP_STATUS_REQ_ON) ")\n"
	"                                      off (" xstr(CEC_OP_STATUS_REQ_OFF) ")\n"
	"                                      once (" xstr(CEC_OP_STATUS_REQ_ONCE) ")\n"
	"                                  Send GIVE_TUNER_DEVICE_STATUS message (" xstr(CEC_MSG_GIVE_TUNER_DEVICE_STATUS) ")\n"
	"  --select-analogue-service ana-bcast-type=<val>,ana-freq=<val>,bcast-system=<val>\n"
	"                                  'ana-bcast-type' can have these values:\n"
	"                                      cable (" xstr(CEC_OP_ANA_BCAST_TYPE_CABLE) ")\n"
	"                                      satellite (" xstr(CEC_OP_ANA_BCAST_TYPE_SATELLITE) ")\n"
	"                                      terrestrial (" xstr(CEC_OP_ANA_BCAST_TYPE_TERRESTRIAL) ")\n"
	"                                  'bcast-system' can have these values:\n"
	"                                      pal-bg (" xstr(CEC_OP_BCAST_SYSTEM_PAL_BG) ")\n"
	"                                      secam-lq (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_LQ) ")\n"
	"                                      pal-m (" xstr(CEC_OP_BCAST_SYSTEM_PAL_M) ")\n"
	"                                      ntsc-m (" xstr(CEC_OP_BCAST_SYSTEM_NTSC_M) ")\n"
	"                                      pal-i (" xstr(CEC_OP_BCAST_SYSTEM_PAL_I) ")\n"
	"                                      secam-dk (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_DK) ")\n"
	"                                      secam-bg (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_BG) ")\n"
	"                                      secam-l (" xstr(CEC_OP_BCAST_SYSTEM_SECAM_L) ")\n"
	"                                      pal-dk (" xstr(CEC_OP_BCAST_SYSTEM_PAL_DK) ")\n"
	"                                      other (" xstr(CEC_OP_BCAST_SYSTEM_OTHER) ")\n"
	"                                  Send SELECT_ANALOGUE_SERVICE message (" xstr(CEC_MSG_SELECT_ANALOGUE_SERVICE) ")\n"
	"  --select-digital-service service-id-method=<val>,dig-bcast-system=<val>,transport-id=<val>,service-id=<val>,orig-network-id=<val>,program-number=<val>,channel-number-fmt=<val>,major=<val>,minor=<val>\n"
	"                                  'service-id-method' can have these values:\n"
	"                                      dig-id (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_DIG_ID) ")\n"
	"                                      channel (" xstr(CEC_OP_SERVICE_ID_METHOD_BY_CHANNEL) ")\n"
	"                                  'dig-bcast-system' can have these values:\n"
	"                                      arib-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_GEN) ")\n"
	"                                      atsc-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_GEN) ")\n"
	"                                      dvb-gen (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_GEN) ")\n"
	"                                      arib-bs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_BS) ")\n"
	"                                      arib-cs (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_CS) ")\n"
	"                                      arib-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ARIB_T) ")\n"
	"                                      atsc-cable (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_CABLE) ")\n"
	"                                      atsc-sat (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_SAT) ")\n"
	"                                      atsc-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_ATSC_T) ")\n"
	"                                      dvb-c (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_C) ")\n"
	"                                      dvb-s (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S) ")\n"
	"                                      dvb-s2 (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_S2) ")\n"
	"                                      dvb-t (" xstr(CEC_OP_DIG_SERVICE_BCAST_SYSTEM_DVB_T) ")\n"
	"                                  'channel-number-fmt' can have these values:\n"
	"                                      1-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_1_PART) ")\n"
	"                                      2-part (" xstr(CEC_OP_CHANNEL_NUMBER_FMT_2_PART) ")\n"
	"                                  Send SELECT_DIGITAL_SERVICE message (" xstr(CEC_MSG_SELECT_DIGITAL_SERVICE) ")\n"
	"  --tuner-step-decrement          Send TUNER_STEP_DECREMENT message (" xstr(CEC_MSG_TUNER_STEP_DECREMENT) ")\n"
	"  --tuner-step-increment          Send TUNER_STEP_INCREMENT message (" xstr(CEC_MSG_TUNER_STEP_INCREMENT) ")\n";

static const char *vendor_specific_commands_usage =
	"  --device-vendor-id vendor-id=<val>\n"
	"                                  Send DEVICE_VENDOR_ID message (" xstr(CEC_MSG_DEVICE_VENDOR_ID) ", bcast)\n"
	"  --give-device-vendor-id         Send GIVE_DEVICE_VENDOR_ID message (" xstr(CEC_MSG_GIVE_DEVICE_VENDOR_ID) ")\n"
	VENDOR_EXTRA
	"  --vendor-remote-button-up       Send VENDOR_REMOTE_BUTTON_UP message (" xstr(CEC_MSG_VENDOR_REMOTE_BUTTON_UP) ")\n"
	"  --cec-version cec-version=<val>\n"
	"                                  'cec-version' can have these values:\n"
	"                                      version-1-3a (" xstr(CEC_OP_CEC_VERSION_1_3A) ")\n"
	"                                      version-1-4 (" xstr(CEC_OP_CEC_VERSION_1_4) ")\n"
	"                                      version-2-0 (" xstr(CEC_OP_CEC_VERSION_2_0) ")\n"
	"                                  Send CEC_VERSION message (" xstr(CEC_MSG_CEC_VERSION) ")\n"
	"  --get-cec-version               Send GET_CEC_VERSION message (" xstr(CEC_MSG_GET_CEC_VERSION) ")\n";

void cec_parse_usage_options(const char *options)
{
	if (options[OptHelpAll] || options[OptHelpAbort]) {
		printf("Abort Feature:\n\n");
		printf("%s\n", abort_usage);
	}
	if (options[OptHelpAll] || options[OptHelpAudioRateControl]) {
		printf("Audio Rate Control Feature:\n\n");
		printf("%s\n", audio_rate_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpAudioReturnChannelControl]) {
		printf("Audio Return Channel Control Feature:\n\n");
		printf("%s\n", audio_return_channel_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpCapabilityDiscoveryandControl]) {
		printf("Capability Discovery and Control Feature:\n\n");
		printf("%s\n", capability_discovery_and_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpDeckControl]) {
		printf("Deck Control Feature:\n\n");
		printf("%s\n", deck_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpDeviceMenuControl]) {
		printf("Device Menu Control Feature:\n\n");
		printf("%s\n", device_menu_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpDeviceOSDTransfer]) {
		printf("Device OSD Transfer Feature:\n\n");
		printf("%s\n", device_osd_transfer_usage);
	}
	if (options[OptHelpAll] || options[OptHelpDynamicAudioLipsync]) {
		printf("Dynamic Audio Lipsync Feature:\n\n");
		printf("%s\n", dynamic_audio_lipsync_usage);
	}
	if (options[OptHelpAll] || options[OptHelpHTNG]) {
		printf("HTNG Feature:\n\n");
		printf("%s\n", htng_usage);
	}
	if (options[OptHelpAll] || options[OptHelpOSDDisplay]) {
		printf("OSD Display Feature:\n\n");
		printf("%s\n", osd_display_usage);
	}
	if (options[OptHelpAll] || options[OptHelpOneTouchPlay]) {
		printf("One Touch Play Feature:\n\n");
		printf("%s\n", one_touch_play_usage);
	}
	if (options[OptHelpAll] || options[OptHelpOneTouchRecord]) {
		printf("One Touch Record Feature:\n\n");
		printf("%s\n", one_touch_record_usage);
	}
	if (options[OptHelpAll] || options[OptHelpPowerStatus]) {
		printf("Power Status Feature:\n\n");
		printf("%s\n", power_status_usage);
	}
	if (options[OptHelpAll] || options[OptHelpRemoteControlPassthrough]) {
		printf("Remote Control Passthrough Feature:\n\n");
		printf("%s\n", remote_control_passthrough_usage);
	}
	if (options[OptHelpAll] || options[OptHelpRoutingControl]) {
		printf("Routing Control Feature:\n\n");
		printf("%s\n", routing_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpStandby]) {
		printf("Standby Feature:\n\n");
		printf("%s\n", standby_usage);
	}
	if (options[OptHelpAll] || options[OptHelpSystemAudioControl]) {
		printf("System Audio Control Feature:\n\n");
		printf("%s\n", system_audio_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpSystemInformation]) {
		printf("System Information Feature:\n\n");
		printf("%s\n", system_information_usage);
	}
	if (options[OptHelpAll] || options[OptHelpTimerProgramming]) {
		printf("Timer Programming Feature:\n\n");
		printf("%s\n", timer_programming_usage);
	}
	if (options[OptHelpAll] || options[OptHelpTunerControl]) {
		printf("Tuner Control Feature:\n\n");
		printf("%s\n", tuner_control_usage);
	}
	if (options[OptHelpAll] || options[OptHelpVendorSpecificCommands]) {
		printf("Vendor Specific Commands Feature:\n\n");
		printf("%s\n", vendor_specific_commands_usage);
	}
}

void cec_parse_msg_args(struct cec_msg &msg, int reply, const cec_msg_args *opt, int ch)
{
	char *value, *subs = optarg;

	switch (ch) {
	case OptActiveSource: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_active_source(&msg, phys_addr);
		break;
	}

	case OptImageViewOn: {
		cec_msg_image_view_on(&msg);
		break;
	}

	case OptTextViewOn: {
		cec_msg_text_view_on(&msg);
		break;
	}

	case OptInactiveSource: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_inactive_source(&msg, phys_addr);
		break;
	}

	case OptRequestActiveSource: {
		cec_msg_request_active_source(&msg, reply);
		break;
	}

	case OptRoutingInformation: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_routing_information(&msg, phys_addr);
		break;
	}

	case OptRoutingChange: {
		__u16 orig_phys_addr = 0;
		__u16 new_phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				orig_phys_addr = cec_parse_phys_addr(value);
				break;
			case 1:
				new_phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_routing_change(&msg, reply, orig_phys_addr, new_phys_addr);
		break;
	}

	case OptSetStreamPath: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_stream_path(&msg, phys_addr);
		break;
	}

	case OptStandby: {
		cec_msg_standby(&msg);
		break;
	}

	case OptRecordOff: {
		cec_msg_record_off(&msg, reply);
		break;
	}

	case OptRecordOnOwn: {
		cec_msg_record_on_own(&msg);
		break;
	}

	case OptRecordOnDigital: {
		__u8 service_id_method = 0;
		__u8 dig_bcast_system = 0;
		__u16 transport_id = 0;
		__u16 service_id = 0;
		__u16 orig_network_id = 0;
		__u16 program_number = 0;
		__u8 channel_number_fmt = 0;
		__u16 major = 0;
		__u16 minor = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				service_id_method = parse_enum(value, opt->args[0]);
				break;
			case 1:
				dig_bcast_system = parse_enum(value, opt->args[1]);
				break;
			case 2:
				transport_id = strtol(value, 0L, 0);
				break;
			case 3:
				service_id = strtol(value, 0L, 0);
				break;
			case 4:
				orig_network_id = strtol(value, 0L, 0);
				break;
			case 5:
				program_number = strtol(value, 0L, 0);
				break;
			case 6:
				channel_number_fmt = parse_enum(value, opt->args[6]);
				break;
			case 7:
				major = strtol(value, 0L, 0);
				break;
			case 8:
				minor = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_record_on_digital(&msg, args2digital_service_id(service_id_method, dig_bcast_system, transport_id, service_id, orig_network_id, program_number, channel_number_fmt, major, minor));
		break;
	}

	case OptRecordOnAnalog: {
		__u8 ana_bcast_type = 0;
		__u16 ana_freq = 0;
		__u8 bcast_system = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				ana_bcast_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				ana_freq = strtol(value, 0L, 0);
				break;
			case 2:
				bcast_system = parse_enum(value, opt->args[2]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_record_on_analog(&msg, ana_bcast_type, ana_freq, bcast_system);
		break;
	}

	case OptRecordOnPlug: {
		__u8 plug = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				plug = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_record_on_plug(&msg, plug);
		break;
	}

	case OptRecordOnPhysAddr: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_record_on_phys_addr(&msg, phys_addr);
		break;
	}

	case OptRecordStatus: {
		__u8 rec_status = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				rec_status = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_record_status(&msg, rec_status);
		break;
	}

	case OptRecordTvScreen: {
		cec_msg_record_tv_screen(&msg, reply);
		break;
	}

	case OptTimerStatus: {
		__u8 timer_overlap_warning = 0;
		__u8 media_info = 0;
		__u8 prog_info = 0;
		__u8 prog_error = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				timer_overlap_warning = parse_enum(value, opt->args[0]);
				break;
			case 1:
				media_info = parse_enum(value, opt->args[1]);
				break;
			case 2:
				prog_info = parse_enum(value, opt->args[2]);
				break;
			case 3:
				prog_error = parse_enum(value, opt->args[3]);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_timer_status(&msg, timer_overlap_warning, media_info, prog_info, prog_error, duration_hr, duration_min);
		break;
	}

	case OptTimerClearedStatus: {
		__u8 timer_cleared_status = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				timer_cleared_status = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_timer_cleared_status(&msg, timer_cleared_status);
		break;
	}

	case OptClearAnalogueTimer: {
		__u8 day = 0;
		__u8 month = 0;
		__u8 start_hr = 0;
		__u8 start_min = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;
		__u8 recording_seq = 0;
		__u8 ana_bcast_type = 0;
		__u16 ana_freq = 0;
		__u8 bcast_system = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				day = strtol(value, 0L, 0);
				break;
			case 1:
				month = strtol(value, 0L, 0);
				break;
			case 2:
				start_hr = strtol(value, 0L, 0);
				break;
			case 3:
				start_min = strtol(value, 0L, 0);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			case 6:
				recording_seq = parse_enum(value, opt->args[6]);
				break;
			case 7:
				ana_bcast_type = parse_enum(value, opt->args[7]);
				break;
			case 8:
				ana_freq = strtol(value, 0L, 0);
				break;
			case 9:
				bcast_system = parse_enum(value, opt->args[9]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_clear_analogue_timer(&msg, reply, day, month, start_hr, start_min, duration_hr, duration_min, recording_seq, ana_bcast_type, ana_freq, bcast_system);
		break;
	}

	case OptClearDigitalTimer: {
		__u8 day = 0;
		__u8 month = 0;
		__u8 start_hr = 0;
		__u8 start_min = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;
		__u8 recording_seq = 0;
		__u8 service_id_method = 0;
		__u8 dig_bcast_system = 0;
		__u16 transport_id = 0;
		__u16 service_id = 0;
		__u16 orig_network_id = 0;
		__u16 program_number = 0;
		__u8 channel_number_fmt = 0;
		__u16 major = 0;
		__u16 minor = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				day = strtol(value, 0L, 0);
				break;
			case 1:
				month = strtol(value, 0L, 0);
				break;
			case 2:
				start_hr = strtol(value, 0L, 0);
				break;
			case 3:
				start_min = strtol(value, 0L, 0);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			case 6:
				recording_seq = parse_enum(value, opt->args[6]);
				break;
			case 7:
				service_id_method = parse_enum(value, opt->args[7]);
				break;
			case 8:
				dig_bcast_system = parse_enum(value, opt->args[8]);
				break;
			case 9:
				transport_id = strtol(value, 0L, 0);
				break;
			case 10:
				service_id = strtol(value, 0L, 0);
				break;
			case 11:
				orig_network_id = strtol(value, 0L, 0);
				break;
			case 12:
				program_number = strtol(value, 0L, 0);
				break;
			case 13:
				channel_number_fmt = parse_enum(value, opt->args[13]);
				break;
			case 14:
				major = strtol(value, 0L, 0);
				break;
			case 15:
				minor = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_clear_digital_timer(&msg, reply, day, month, start_hr, start_min, duration_hr, duration_min, recording_seq, args2digital_service_id(service_id_method, dig_bcast_system, transport_id, service_id, orig_network_id, program_number, channel_number_fmt, major, minor));
		break;
	}

	case OptClearExtTimer: {
		__u8 day = 0;
		__u8 month = 0;
		__u8 start_hr = 0;
		__u8 start_min = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;
		__u8 recording_seq = 0;
		__u8 ext_src_spec = 0;
		__u8 plug = 0;
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				day = strtol(value, 0L, 0);
				break;
			case 1:
				month = strtol(value, 0L, 0);
				break;
			case 2:
				start_hr = strtol(value, 0L, 0);
				break;
			case 3:
				start_min = strtol(value, 0L, 0);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			case 6:
				recording_seq = parse_enum(value, opt->args[6]);
				break;
			case 7:
				ext_src_spec = parse_enum(value, opt->args[7]);
				break;
			case 8:
				plug = strtol(value, 0L, 0);
				break;
			case 9:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_clear_ext_timer(&msg, reply, day, month, start_hr, start_min, duration_hr, duration_min, recording_seq, ext_src_spec, plug, phys_addr);
		break;
	}

	case OptSetAnalogueTimer: {
		__u8 day = 0;
		__u8 month = 0;
		__u8 start_hr = 0;
		__u8 start_min = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;
		__u8 recording_seq = 0;
		__u8 ana_bcast_type = 0;
		__u16 ana_freq = 0;
		__u8 bcast_system = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				day = strtol(value, 0L, 0);
				break;
			case 1:
				month = strtol(value, 0L, 0);
				break;
			case 2:
				start_hr = strtol(value, 0L, 0);
				break;
			case 3:
				start_min = strtol(value, 0L, 0);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			case 6:
				recording_seq = parse_enum(value, opt->args[6]);
				break;
			case 7:
				ana_bcast_type = parse_enum(value, opt->args[7]);
				break;
			case 8:
				ana_freq = strtol(value, 0L, 0);
				break;
			case 9:
				bcast_system = parse_enum(value, opt->args[9]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_analogue_timer(&msg, reply, day, month, start_hr, start_min, duration_hr, duration_min, recording_seq, ana_bcast_type, ana_freq, bcast_system);
		break;
	}

	case OptSetDigitalTimer: {
		__u8 day = 0;
		__u8 month = 0;
		__u8 start_hr = 0;
		__u8 start_min = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;
		__u8 recording_seq = 0;
		__u8 service_id_method = 0;
		__u8 dig_bcast_system = 0;
		__u16 transport_id = 0;
		__u16 service_id = 0;
		__u16 orig_network_id = 0;
		__u16 program_number = 0;
		__u8 channel_number_fmt = 0;
		__u16 major = 0;
		__u16 minor = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				day = strtol(value, 0L, 0);
				break;
			case 1:
				month = strtol(value, 0L, 0);
				break;
			case 2:
				start_hr = strtol(value, 0L, 0);
				break;
			case 3:
				start_min = strtol(value, 0L, 0);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			case 6:
				recording_seq = parse_enum(value, opt->args[6]);
				break;
			case 7:
				service_id_method = parse_enum(value, opt->args[7]);
				break;
			case 8:
				dig_bcast_system = parse_enum(value, opt->args[8]);
				break;
			case 9:
				transport_id = strtol(value, 0L, 0);
				break;
			case 10:
				service_id = strtol(value, 0L, 0);
				break;
			case 11:
				orig_network_id = strtol(value, 0L, 0);
				break;
			case 12:
				program_number = strtol(value, 0L, 0);
				break;
			case 13:
				channel_number_fmt = parse_enum(value, opt->args[13]);
				break;
			case 14:
				major = strtol(value, 0L, 0);
				break;
			case 15:
				minor = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_digital_timer(&msg, reply, day, month, start_hr, start_min, duration_hr, duration_min, recording_seq, args2digital_service_id(service_id_method, dig_bcast_system, transport_id, service_id, orig_network_id, program_number, channel_number_fmt, major, minor));
		break;
	}

	case OptSetExtTimer: {
		__u8 day = 0;
		__u8 month = 0;
		__u8 start_hr = 0;
		__u8 start_min = 0;
		__u8 duration_hr = 0;
		__u8 duration_min = 0;
		__u8 recording_seq = 0;
		__u8 ext_src_spec = 0;
		__u8 plug = 0;
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				day = strtol(value, 0L, 0);
				break;
			case 1:
				month = strtol(value, 0L, 0);
				break;
			case 2:
				start_hr = strtol(value, 0L, 0);
				break;
			case 3:
				start_min = strtol(value, 0L, 0);
				break;
			case 4:
				duration_hr = strtol(value, 0L, 0);
				break;
			case 5:
				duration_min = strtol(value, 0L, 0);
				break;
			case 6:
				recording_seq = parse_enum(value, opt->args[6]);
				break;
			case 7:
				ext_src_spec = parse_enum(value, opt->args[7]);
				break;
			case 8:
				plug = strtol(value, 0L, 0);
				break;
			case 9:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_ext_timer(&msg, reply, day, month, start_hr, start_min, duration_hr, duration_min, recording_seq, ext_src_spec, plug, phys_addr);
		break;
	}

	case OptSetTimerProgramTitle: {
		const char *prog_title = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				prog_title = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_timer_program_title(&msg, prog_title);
		break;
	}

	case OptCecVersion: {
		__u8 cec_version = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				cec_version = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cec_version(&msg, cec_version);
		break;
	}

	case OptGetCecVersion: {
		cec_msg_get_cec_version(&msg, reply);
		break;
	}

	case OptReportPhysicalAddr: {
		__u16 phys_addr = 0;
		__u8 prim_devtype = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			case 1:
				prim_devtype = parse_enum(value, opt->args[1]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_report_physical_addr(&msg, phys_addr, prim_devtype);
		break;
	}

	case OptGivePhysicalAddr: {
		cec_msg_give_physical_addr(&msg, reply);
		break;
	}

	case OptSetMenuLanguage: {
		const char *language = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				language = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_menu_language(&msg, language);
		break;
	}

	case OptGetMenuLanguage: {
		cec_msg_get_menu_language(&msg, reply);
		break;
	}

	case OptReportFeatures: {
		__u8 cec_version = 0;
		__u8 all_device_types = 0;
		__u8 rc_profile = 0;
		__u8 dev_features = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				cec_version = parse_enum(value, opt->args[0]);
				break;
			case 1:
				all_device_types = parse_enum(value, opt->args[1]);
				break;
			case 2:
				rc_profile = parse_enum(value, opt->args[2]);
				break;
			case 3:
				dev_features = parse_enum(value, opt->args[3]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_report_features(&msg, cec_version, all_device_types, rc_profile, dev_features);
		break;
	}

	case OptGiveFeatures: {
		cec_msg_give_features(&msg, reply);
		break;
	}

	case OptDeckControl: {
		__u8 deck_control_mode = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				deck_control_mode = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_deck_control(&msg, deck_control_mode);
		break;
	}

	case OptDeckStatus: {
		__u8 deck_info = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				deck_info = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_deck_status(&msg, deck_info);
		break;
	}

	case OptGiveDeckStatus: {
		__u8 status_req = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				status_req = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_give_deck_status(&msg, reply, status_req);
		break;
	}

	case OptPlay: {
		__u8 play_mode = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				play_mode = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_play(&msg, play_mode);
		break;
	}

	case OptTunerDeviceStatusAnalog: {
		__u8 rec_flag = 0;
		__u8 tuner_display_info = 0;
		__u8 ana_bcast_type = 0;
		__u16 ana_freq = 0;
		__u8 bcast_system = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				rec_flag = parse_enum(value, opt->args[0]);
				break;
			case 1:
				tuner_display_info = parse_enum(value, opt->args[1]);
				break;
			case 2:
				ana_bcast_type = parse_enum(value, opt->args[2]);
				break;
			case 3:
				ana_freq = strtol(value, 0L, 0);
				break;
			case 4:
				bcast_system = parse_enum(value, opt->args[4]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_tuner_device_status_analog(&msg, rec_flag, tuner_display_info, ana_bcast_type, ana_freq, bcast_system);
		break;
	}

	case OptTunerDeviceStatusDigital: {
		__u8 rec_flag = 0;
		__u8 tuner_display_info = 0;
		__u8 service_id_method = 0;
		__u8 dig_bcast_system = 0;
		__u16 transport_id = 0;
		__u16 service_id = 0;
		__u16 orig_network_id = 0;
		__u16 program_number = 0;
		__u8 channel_number_fmt = 0;
		__u16 major = 0;
		__u16 minor = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				rec_flag = parse_enum(value, opt->args[0]);
				break;
			case 1:
				tuner_display_info = parse_enum(value, opt->args[1]);
				break;
			case 2:
				service_id_method = parse_enum(value, opt->args[2]);
				break;
			case 3:
				dig_bcast_system = parse_enum(value, opt->args[3]);
				break;
			case 4:
				transport_id = strtol(value, 0L, 0);
				break;
			case 5:
				service_id = strtol(value, 0L, 0);
				break;
			case 6:
				orig_network_id = strtol(value, 0L, 0);
				break;
			case 7:
				program_number = strtol(value, 0L, 0);
				break;
			case 8:
				channel_number_fmt = parse_enum(value, opt->args[8]);
				break;
			case 9:
				major = strtol(value, 0L, 0);
				break;
			case 10:
				minor = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_tuner_device_status_digital(&msg, rec_flag, tuner_display_info, args2digital_service_id(service_id_method, dig_bcast_system, transport_id, service_id, orig_network_id, program_number, channel_number_fmt, major, minor));
		break;
	}

	case OptGiveTunerDeviceStatus: {
		__u8 status_req = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				status_req = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_give_tuner_device_status(&msg, reply, status_req);
		break;
	}

	case OptSelectAnalogueService: {
		__u8 ana_bcast_type = 0;
		__u16 ana_freq = 0;
		__u8 bcast_system = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				ana_bcast_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				ana_freq = strtol(value, 0L, 0);
				break;
			case 2:
				bcast_system = parse_enum(value, opt->args[2]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_select_analogue_service(&msg, ana_bcast_type, ana_freq, bcast_system);
		break;
	}

	case OptSelectDigitalService: {
		__u8 service_id_method = 0;
		__u8 dig_bcast_system = 0;
		__u16 transport_id = 0;
		__u16 service_id = 0;
		__u16 orig_network_id = 0;
		__u16 program_number = 0;
		__u8 channel_number_fmt = 0;
		__u16 major = 0;
		__u16 minor = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				service_id_method = parse_enum(value, opt->args[0]);
				break;
			case 1:
				dig_bcast_system = parse_enum(value, opt->args[1]);
				break;
			case 2:
				transport_id = strtol(value, 0L, 0);
				break;
			case 3:
				service_id = strtol(value, 0L, 0);
				break;
			case 4:
				orig_network_id = strtol(value, 0L, 0);
				break;
			case 5:
				program_number = strtol(value, 0L, 0);
				break;
			case 6:
				channel_number_fmt = parse_enum(value, opt->args[6]);
				break;
			case 7:
				major = strtol(value, 0L, 0);
				break;
			case 8:
				minor = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_select_digital_service(&msg, args2digital_service_id(service_id_method, dig_bcast_system, transport_id, service_id, orig_network_id, program_number, channel_number_fmt, major, minor));
		break;
	}

	case OptTunerStepDecrement: {
		cec_msg_tuner_step_decrement(&msg);
		break;
	}

	case OptTunerStepIncrement: {
		cec_msg_tuner_step_increment(&msg);
		break;
	}

	case OptDeviceVendorId: {
		__u32 vendor_id = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				vendor_id = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_device_vendor_id(&msg, vendor_id);
		break;
	}

	case OptGiveDeviceVendorId: {
		cec_msg_give_device_vendor_id(&msg, reply);
		break;
	}

	case OptVendorRemoteButtonUp: {
		cec_msg_vendor_remote_button_up(&msg);
		break;
	}

	case OptSetOsdString: {
		__u8 disp_ctl = 0;
		const char *osd = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				disp_ctl = parse_enum(value, opt->args[0]);
				break;
			case 1:
				osd = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_osd_string(&msg, disp_ctl, osd);
		break;
	}

	case OptSetOsdName: {
		const char *name = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				name = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_osd_name(&msg, name);
		break;
	}

	case OptGiveOsdName: {
		cec_msg_give_osd_name(&msg, reply);
		break;
	}

	case OptMenuStatus: {
		__u8 menu_state = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				menu_state = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_menu_status(&msg, menu_state);
		break;
	}

	case OptMenuRequest: {
		__u8 menu_req = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				menu_req = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_menu_request(&msg, reply, menu_req);
		break;
	}

	case OptUserControlPressed: {
		__u8 ui_cmd = 0;
		__u8 has_opt_arg = 0;
		__u8 play_mode = 0;
		__u8 ui_function_media = 0;
		__u8 ui_function_select_av_input = 0;
		__u8 ui_function_select_audio_input = 0;
		__u8 ui_bcast_type = 0;
		__u8 ui_snd_pres_ctl = 0;
		__u8 channel_number_fmt = 0;
		__u16 major = 0;
		__u16 minor = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				ui_cmd = parse_enum(value, opt->args[0]);
				break;
			case 1:
				has_opt_arg = strtol(value, 0L, 0);
				break;
			case 2:
				play_mode = parse_enum(value, opt->args[2]);
				break;
			case 3:
				ui_function_media = strtol(value, 0L, 0);
				break;
			case 4:
				ui_function_select_av_input = strtol(value, 0L, 0);
				break;
			case 5:
				ui_function_select_audio_input = strtol(value, 0L, 0);
				break;
			case 6:
				ui_bcast_type = parse_enum(value, opt->args[6]);
				break;
			case 7:
				ui_snd_pres_ctl = parse_enum(value, opt->args[7]);
				break;
			case 8:
				channel_number_fmt = parse_enum(value, opt->args[8]);
				break;
			case 9:
				major = strtol(value, 0L, 0);
				break;
			case 10:
				minor = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_user_control_pressed(&msg, args2ui_command(ui_cmd, has_opt_arg, play_mode, ui_function_media, ui_function_select_av_input, ui_function_select_audio_input, ui_bcast_type, ui_snd_pres_ctl, channel_number_fmt, major, minor));
		break;
	}

	case OptUserControlReleased: {
		cec_msg_user_control_released(&msg);
		break;
	}

	case OptReportPowerStatus: {
		__u8 pwr_state = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				pwr_state = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_report_power_status(&msg, pwr_state);
		break;
	}

	case OptGiveDevicePowerStatus: {
		cec_msg_give_device_power_status(&msg, reply);
		break;
	}

	case OptFeatureAbort: {
		__u8 abort_msg = 0;
		__u8 reason = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				abort_msg = strtol(value, 0L, 0);
				break;
			case 1:
				reason = parse_enum(value, opt->args[1]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_feature_abort(&msg, abort_msg, reason);
		break;
	}

	case OptAbort: {
		cec_msg_abort(&msg);
		break;
	}

	case OptReportAudioStatus: {
		__u8 aud_mute_status = 0;
		__u8 aud_vol_status = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				aud_mute_status = parse_enum(value, opt->args[0]);
				break;
			case 1:
				aud_vol_status = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_report_audio_status(&msg, aud_mute_status, aud_vol_status);
		break;
	}

	case OptGiveAudioStatus: {
		cec_msg_give_audio_status(&msg, reply);
		break;
	}

	case OptSetSystemAudioMode: {
		__u8 sys_aud_status = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				sys_aud_status = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_system_audio_mode(&msg, sys_aud_status);
		break;
	}

	case OptSystemAudioModeRequest: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_system_audio_mode_request(&msg, reply, phys_addr);
		break;
	}

	case OptSystemAudioModeStatus: {
		__u8 sys_aud_status = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				sys_aud_status = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_system_audio_mode_status(&msg, sys_aud_status);
		break;
	}

	case OptGiveSystemAudioModeStatus: {
		cec_msg_give_system_audio_mode_status(&msg, reply);
		break;
	}

	case OptReportShortAudioDescriptor: {
		__u8 num_descriptors = 0;
		__u8 descriptor1 = 0;
		__u8 descriptor2 = 0;
		__u8 descriptor3 = 0;
		__u8 descriptor4 = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				num_descriptors = strtol(value, 0L, 0);
				break;
			case 1:
				descriptor1 = strtol(value, 0L, 0);
				break;
			case 2:
				descriptor2 = strtol(value, 0L, 0);
				break;
			case 3:
				descriptor3 = strtol(value, 0L, 0);
				break;
			case 4:
				descriptor4 = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_report_short_audio_descriptor(&msg, num_descriptors, args2short_descrs(descriptor1, descriptor2, descriptor3, descriptor4));
		break;
	}

	case OptRequestShortAudioDescriptor: {
		__u8 num_descriptors = 0;
		__u8 audio_format_id1 = 0;
		__u8 audio_format_code1 = 0;
		__u8 audio_format_id2 = 0;
		__u8 audio_format_code2 = 0;
		__u8 audio_format_id3 = 0;
		__u8 audio_format_code3 = 0;
		__u8 audio_format_id4 = 0;
		__u8 audio_format_code4 = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				num_descriptors = strtol(value, 0L, 0);
				break;
			case 1:
				audio_format_id1 = strtol(value, 0L, 0);
				break;
			case 2:
				audio_format_code1 = strtol(value, 0L, 0);
				break;
			case 3:
				audio_format_id2 = strtol(value, 0L, 0);
				break;
			case 4:
				audio_format_code2 = strtol(value, 0L, 0);
				break;
			case 5:
				audio_format_id3 = strtol(value, 0L, 0);
				break;
			case 6:
				audio_format_code3 = strtol(value, 0L, 0);
				break;
			case 7:
				audio_format_id4 = strtol(value, 0L, 0);
				break;
			case 8:
				audio_format_code4 = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_request_short_audio_descriptor(&msg, reply, num_descriptors, args2short_aud_fmt_ids(audio_format_id1, audio_format_id2, audio_format_id3, audio_format_id4), args2short_aud_fmt_codes(audio_format_code1, audio_format_code2, audio_format_code3, audio_format_code4));
		break;
	}

	case OptSetAudioRate: {
		__u8 audio_rate = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				audio_rate = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_set_audio_rate(&msg, audio_rate);
		break;
	}

	case OptReportArcInitiated: {
		cec_msg_report_arc_initiated(&msg);
		break;
	}

	case OptInitiateArc: {
		cec_msg_initiate_arc(&msg, reply);
		break;
	}

	case OptRequestArcInitiation: {
		cec_msg_request_arc_initiation(&msg, reply);
		break;
	}

	case OptReportArcTerminated: {
		cec_msg_report_arc_terminated(&msg);
		break;
	}

	case OptTerminateArc: {
		cec_msg_terminate_arc(&msg, reply);
		break;
	}

	case OptRequestArcTermination: {
		cec_msg_request_arc_termination(&msg, reply);
		break;
	}

	case OptReportCurrentLatency: {
		__u16 phys_addr = 0;
		__u8 video_latency = 0;
		__u8 low_latency_mode = 0;
		__u8 audio_out_compensated = 0;
		__u8 audio_out_delay = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			case 1:
				video_latency = parse_latency(value);
				break;
			case 2:
				low_latency_mode = parse_enum(value, opt->args[2]);
				break;
			case 3:
				audio_out_compensated = parse_enum(value, opt->args[3]);
				break;
			case 4:
				audio_out_delay = parse_latency(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_report_current_latency(&msg, phys_addr, video_latency, low_latency_mode, audio_out_compensated, audio_out_delay);
		break;
	}

	case OptRequestCurrentLatency: {
		__u16 phys_addr = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_request_current_latency(&msg, reply, phys_addr);
		break;
	}

	case OptCdcHecInquireState: {
		__u16 phys_addr1 = 0;
		__u16 phys_addr2 = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr1 = cec_parse_phys_addr(value);
				break;
			case 1:
				phys_addr2 = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hec_inquire_state(&msg, phys_addr1, phys_addr2);
		break;
	}

	case OptCdcHecReportState: {
		__u16 target_phys_addr = 0;
		__u8 hec_func_state = 0;
		__u8 host_func_state = 0;
		__u8 enc_func_state = 0;
		__u8 cdc_errcode = 0;
		__u8 has_field = 0;
		__u16 hec_field = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				target_phys_addr = cec_parse_phys_addr(value);
				break;
			case 1:
				hec_func_state = parse_enum(value, opt->args[1]);
				break;
			case 2:
				host_func_state = parse_enum(value, opt->args[2]);
				break;
			case 3:
				enc_func_state = parse_enum(value, opt->args[3]);
				break;
			case 4:
				cdc_errcode = parse_enum(value, opt->args[4]);
				break;
			case 5:
				has_field = strtol(value, 0L, 0);
				break;
			case 6:
				hec_field = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hec_report_state(&msg, target_phys_addr, hec_func_state, host_func_state, enc_func_state, cdc_errcode, has_field, hec_field);
		break;
	}

	case OptCdcHecSetState: {
		__u16 phys_addr1 = 0;
		__u16 phys_addr2 = 0;
		__u8 hec_set_state = 0;
		__u16 phys_addr3 = 0;
		__u16 phys_addr4 = 0;
		__u16 phys_addr5 = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr1 = cec_parse_phys_addr(value);
				break;
			case 1:
				phys_addr2 = cec_parse_phys_addr(value);
				break;
			case 2:
				hec_set_state = parse_enum(value, opt->args[2]);
				break;
			case 3:
				phys_addr3 = cec_parse_phys_addr(value);
				break;
			case 4:
				phys_addr4 = cec_parse_phys_addr(value);
				break;
			case 5:
				phys_addr5 = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hec_set_state(&msg, phys_addr1, phys_addr2, hec_set_state, phys_addr3, phys_addr4, phys_addr5);
		break;
	}

	case OptCdcHecSetStateAdjacent: {
		__u16 phys_addr1 = 0;
		__u8 hec_set_state = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr1 = cec_parse_phys_addr(value);
				break;
			case 1:
				hec_set_state = parse_enum(value, opt->args[1]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hec_set_state_adjacent(&msg, phys_addr1, hec_set_state);
		break;
	}

	case OptCdcHecRequestDeactivation: {
		__u16 phys_addr1 = 0;
		__u16 phys_addr2 = 0;
		__u16 phys_addr3 = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				phys_addr1 = cec_parse_phys_addr(value);
				break;
			case 1:
				phys_addr2 = cec_parse_phys_addr(value);
				break;
			case 2:
				phys_addr3 = cec_parse_phys_addr(value);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hec_request_deactivation(&msg, phys_addr1, phys_addr2, phys_addr3);
		break;
	}

	case OptCdcHecNotifyAlive: {
		cec_msg_cdc_hec_notify_alive(&msg);
		break;
	}

	case OptCdcHecDiscover: {
		cec_msg_cdc_hec_discover(&msg);
		break;
	}

	case OptCdcHpdSetState: {
		__u8 input_port = 0;
		__u8 hpd_state = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input_port = strtol(value, 0L, 0);
				break;
			case 1:
				hpd_state = parse_enum(value, opt->args[1]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hpd_set_state(&msg, input_port, hpd_state);
		break;
	}

	case OptCdcHpdReportState: {
		__u8 hpd_state = 0;
		__u8 hpd_error = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				hpd_state = parse_enum(value, opt->args[0]);
				break;
			case 1:
				hpd_error = parse_enum(value, opt->args[1]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_cdc_hpd_report_state(&msg, hpd_state, hpd_error);
		break;
	}

	case OptHtngTuner_1partChan: {
		__u8 htng_tuner_type = 0;
		__u16 chan = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_tuner_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				chan = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_tuner_1part_chan(&msg, htng_tuner_type, chan);
		break;
	}

	case OptHtngTuner_2partChan: {
		__u8 htng_tuner_type = 0;
		__u8 major_chan = 0;
		__u16 minor_chan = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_tuner_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				major_chan = strtol(value, 0L, 0);
				break;
			case 2:
				minor_chan = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_tuner_2part_chan(&msg, htng_tuner_type, major_chan, minor_chan);
		break;
	}

	case OptHtngInputSelAv: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_av(&msg, input);
		break;
	}

	case OptHtngInputSelPc: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_pc(&msg, input);
		break;
	}

	case OptHtngInputSelHdmi: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_hdmi(&msg, input);
		break;
	}

	case OptHtngInputSelComponent: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_component(&msg, input);
		break;
	}

	case OptHtngInputSelDvi: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_dvi(&msg, input);
		break;
	}

	case OptHtngInputSelDp: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_dp(&msg, input);
		break;
	}

	case OptHtngInputSelUsb: {
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_input_sel_usb(&msg, input);
		break;
	}

	case OptHtngSetDefPwrOnInputSrc: {
		__u8 htng_input_src = 0;
		__u8 htng_tuner_type = 0;
		__u8 major = 0;
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_input_src = parse_enum(value, opt->args[0]);
				break;
			case 1:
				htng_tuner_type = parse_enum(value, opt->args[1]);
				break;
			case 2:
				major = strtol(value, 0L, 0);
				break;
			case 3:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_def_pwr_on_input_src(&msg, htng_input_src, htng_tuner_type, major, input);
		break;
	}

	case OptHtngSetTvSpeakers: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_tv_speakers(&msg, on);
		break;
	}

	case OptHtngSetDigAudio: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_dig_audio(&msg, on);
		break;
	}

	case OptHtngSetAnaAudio: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_ana_audio(&msg, on);
		break;
	}

	case OptHtngSetDefPwrOnVol: {
		__u8 vol = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				vol = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_def_pwr_on_vol(&msg, vol);
		break;
	}

	case OptHtngSetMaxVol: {
		__u8 vol = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				vol = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_max_vol(&msg, vol);
		break;
	}

	case OptHtngSetMinVol: {
		__u8 vol = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				vol = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_min_vol(&msg, vol);
		break;
	}

	case OptHtngSetBlueScreen: {
		__u8 blue = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				blue = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_blue_screen(&msg, blue);
		break;
	}

	case OptHtngSetBrightness: {
		__u8 brightness = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				brightness = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_brightness(&msg, brightness);
		break;
	}

	case OptHtngSetColor: {
		__u8 color = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				color = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_color(&msg, color);
		break;
	}

	case OptHtngSetContrast: {
		__u8 contrast = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				contrast = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_contrast(&msg, contrast);
		break;
	}

	case OptHtngSetSharpness: {
		__u8 sharpness = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				sharpness = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_sharpness(&msg, sharpness);
		break;
	}

	case OptHtngSetHue: {
		__u8 hue = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				hue = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_hue(&msg, hue);
		break;
	}

	case OptHtngSetLedBacklight: {
		__u8 led_backlight = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				led_backlight = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_led_backlight(&msg, led_backlight);
		break;
	}

	case OptHtngSetTvOsdControl: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_tv_osd_control(&msg, on);
		break;
	}

	case OptHtngSetAudioOnlyDisplay: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_audio_only_display(&msg, on);
		break;
	}

	case OptHtngSetDate: {
		const char *date = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				date = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_date(&msg, date);
		break;
	}

	case OptHtngSetDateFormat: {
		__u8 ddmm = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				ddmm = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_date_format(&msg, ddmm);
		break;
	}

	case OptHtngSetTime: {
		const char *time = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				time = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_time(&msg, time);
		break;
	}

	case OptHtngSetClkBrightnessStandby: {
		__u8 brightness = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				brightness = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_clk_brightness_standby(&msg, brightness);
		break;
	}

	case OptHtngSetClkBrightnessOn: {
		__u8 brightness = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				brightness = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_clk_brightness_on(&msg, brightness);
		break;
	}

	case OptHtngLedControl: {
		__u8 htng_led_control = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_led_control = parse_enum(value, opt->args[0]);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_led_control(&msg, htng_led_control);
		break;
	}

	case OptHtngLockTvPwrButton: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_tv_pwr_button(&msg, on);
		break;
	}

	case OptHtngLockTvVolButtons: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_tv_vol_buttons(&msg, on);
		break;
	}

	case OptHtngLockTvChanButtons: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_tv_chan_buttons(&msg, on);
		break;
	}

	case OptHtngLockTvInputButtons: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_tv_input_buttons(&msg, on);
		break;
	}

	case OptHtngLockTvOtherButtons: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_tv_other_buttons(&msg, on);
		break;
	}

	case OptHtngLockEverything: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_everything(&msg, on);
		break;
	}

	case OptHtngLockEverythingButPwr: {
		__u8 on = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_lock_everything_but_pwr(&msg, on);
		break;
	}

	case OptHtngHotelMode: {
		__u8 on = 0;
		__u8 options = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			case 1:
				options = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_hotel_mode(&msg, on, options);
		break;
	}

	case OptHtngSetPwrSavingProfile: {
		__u8 on = 0;
		__u8 val = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				on = strtol(value, 0L, 0);
				break;
			case 1:
				val = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_pwr_saving_profile(&msg, on, val);
		break;
	}

	case OptHtngSetSleepTimer: {
		__u8 minutes = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				minutes = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_sleep_timer(&msg, minutes);
		break;
	}

	case OptHtngSetWakeupTime: {
		const char *time = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				time = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_wakeup_time(&msg, time);
		break;
	}

	case OptHtngSetAutoOffTime: {
		const char *time = "";

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				time = value;
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_auto_off_time(&msg, time);
		break;
	}

	case OptHtngSetWakeupSrc: {
		__u8 htng_input_src = 0;
		__u8 htng_tuner_type = 0;
		__u8 major = 0;
		__u16 input = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_input_src = parse_enum(value, opt->args[0]);
				break;
			case 1:
				htng_tuner_type = parse_enum(value, opt->args[1]);
				break;
			case 2:
				major = strtol(value, 0L, 0);
				break;
			case 3:
				input = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_wakeup_src(&msg, htng_input_src, htng_tuner_type, major, input);
		break;
	}

	case OptHtngSetInitWakeupVol: {
		__u8 vol = 0;
		__u8 minutes = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				vol = strtol(value, 0L, 0);
				break;
			case 1:
				minutes = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_set_init_wakeup_vol(&msg, vol, minutes);
		break;
	}

	case OptHtngClrAllSleepWake: {
		cec_msg_htng_clr_all_sleep_wake(&msg);
		break;
	}

	case OptHtngGlobalDirectTuneFreq: {
		__u8 htng_chan_type = 0;
		__u8 htng_prog_type = 0;
		__u8 htng_system_type = 0;
		__u16 freq = 0;
		__u16 service_id = 0;
		__u8 htng_mod_type = 0;
		__u8 htng_symbol_rate = 0;
		__u16 symbol_rate = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_chan_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				htng_prog_type = parse_enum(value, opt->args[1]);
				break;
			case 2:
				htng_system_type = parse_enum(value, opt->args[2]);
				break;
			case 3:
				freq = strtol(value, 0L, 0);
				break;
			case 4:
				service_id = strtol(value, 0L, 0);
				break;
			case 5:
				htng_mod_type = parse_enum(value, opt->args[5]);
				break;
			case 6:
				htng_symbol_rate = parse_enum(value, opt->args[6]);
				break;
			case 7:
				symbol_rate = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_global_direct_tune_freq(&msg, htng_chan_type, htng_prog_type, htng_system_type, freq, service_id, htng_mod_type, htng_symbol_rate, symbol_rate);
		break;
	}

	case OptHtngGlobalDirectTuneChan: {
		__u8 htng_chan_type = 0;
		__u8 htng_prog_type = 0;
		__u16 chan = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_chan_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				htng_prog_type = parse_enum(value, opt->args[1]);
				break;
			case 2:
				chan = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_global_direct_tune_chan(&msg, htng_chan_type, htng_prog_type, chan);
		break;
	}

	case OptHtngGlobalDirectTuneExtFreq: {
		__u8 htng_ext_chan_type = 0;
		__u8 htng_prog_type = 0;
		__u8 htng_system_type = 0;
		__u16 freq = 0;
		__u16 service_id = 0;
		__u8 htng_mod_type = 0;
		__u8 htng_onid = 0;
		__u16 onid = 0;
		__u8 htng_nid = 0;
		__u16 nid = 0;
		__u8 htng_tsid_plp = 0;
		__u16 tsid_plp = 0;
		__u8 htng_symbol_rate = 0;
		__u16 symbol_rate = 0;

		while (*subs != '\0') {
			switch (cec_parse_subopt(&subs, opt->arg_names, &value)) {
			case 0:
				htng_ext_chan_type = parse_enum(value, opt->args[0]);
				break;
			case 1:
				htng_prog_type = parse_enum(value, opt->args[1]);
				break;
			case 2:
				htng_system_type = parse_enum(value, opt->args[2]);
				break;
			case 3:
				freq = strtol(value, 0L, 0);
				break;
			case 4:
				service_id = strtol(value, 0L, 0);
				break;
			case 5:
				htng_mod_type = parse_enum(value, opt->args[5]);
				break;
			case 6:
				htng_onid = parse_enum(value, opt->args[6]);
				break;
			case 7:
				onid = strtol(value, 0L, 0);
				break;
			case 8:
				htng_nid = parse_enum(value, opt->args[8]);
				break;
			case 9:
				nid = strtol(value, 0L, 0);
				break;
			case 10:
				htng_tsid_plp = parse_enum(value, opt->args[10]);
				break;
			case 11:
				tsid_plp = strtol(value, 0L, 0);
				break;
			case 12:
				htng_symbol_rate = parse_enum(value, opt->args[12]);
				break;
			case 13:
				symbol_rate = strtol(value, 0L, 0);
				break;
			default:
				exit(1);
			}
		}
		cec_msg_htng_global_direct_tune_ext_freq(&msg, htng_ext_chan_type, htng_prog_type, htng_system_type, freq, service_id, htng_mod_type, htng_onid, onid, htng_nid, nid, htng_tsid_plp, tsid_plp, htng_symbol_rate, symbol_rate);
		break;
	}

	}
};

