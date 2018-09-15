#include <kernel.h>
#include "csl.h"
#include "target_timer.h"
#include "syssvc/syslog.h"
#include "syssvc/banner.h"
#include "target_serial.h"
#include "target_serial_dbsio.h"
#include "syssvc/serial.h"
#include "syssvc/logtask.h"
#include "api.cfg.h"
#include "app.h"
#include "platform_interface_layer.h"


ID _ev3api_id_EV3_CYC_TRACER;

void _initialize_ev3api_cyc() {
	ER_ID ercd;
	T_CCYC pk_ccyc;

	pk_ccyc.cycatr = TA_NULL;
	pk_ccyc.exinf = 0;
	pk_ccyc.cychdr = ev3_cyc_tracer;
	pk_ccyc.cyctim = 4;
	pk_ccyc.cycphs = 1;
	ercd = _ev3_acre_cyc(&pk_ccyc);
	assert(ercd > 0);
	_ev3api_id_EV3_CYC_TRACER = ercd;
}
