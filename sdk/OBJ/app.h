/******************************************************************************
 *  app.h (for LEGO Mindstorms EV3)
 *  Created on: 2015/01/25
 *  Definition of the Task main_task
 *  Author: Kazuhiro.Kawachi
 *  Copyright (c) 2015 Embedded Technology Software Design Robot Contest
 *****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

#include "ev3api.h"

/*
 *  各タスクの優先度の定義
 */
<<<<<<< HEAD
<<<<<<< HEAD
// #define TMIN_TPRI        1            /* タスク優先度の最小値（最高値） */
// #define TMIN_APP_TPRI        (TMIN_TPRI + 8)
#define MAIN_PRIORITY       TMIN_APP_TPRI + 1      /* mainタスクの優先度       (10) */
#define TRACER_PRIORITY     TMIN_APP_TPRI + 2      /* Tracerタスクの優先度     (12) */
#define ODMETRY_PRIORITY    TMIN_APP_TPRI + 3      /* Odmetryタスクの優先度    (13) */
#define TAILMOTOR_PRIORITY  TMIN_APP_TPRI + 4      /* TailMotorタスクの優先度  (14) */
#define LOGGER_PRIORITY     TMIN_APP_TPRI + 5      /* Loggerタスクの優先度     (15) */
#define REMOTE_PRIORITY     TMIN_APP_TPRI + 6      /* Remoteタスクの優先度     (15) */
#define UI_PRIORITY         TMIN_APP_TPRI + 6      /* UIタスクの優先度         (16) */
=======
#define MAIN_PRIORITY    TMIN_APP_TPRI + 1  /* メインタスクの優先度 */
#define TRACER_PRIORITY  TMIN_APP_TPRI + 2
>>>>>>> parent of a0735ed... 訂正
=======
#define MAIN_PRIORITY    TMIN_APP_TPRI + 1  /* メインタスクの優先度 */
#define TRACER_PRIORITY  TMIN_APP_TPRI + 2
#define TAILMOTOR_PRIORITY  TMIN_APP_TPRI + 4      /* TailMotorタスクの優先度  (14) */
>>>>>>> parent of 4bca7fb... 定周期走行、オドメトリとか本来のクラスを一通り統合した

/*
 *  ターゲットに依存する可能性のある定数の定義
 */
#ifndef STACK_SIZE
#define STACK_SIZE      4096        /* タスクのスタックサイズ */
#endif /* STACK_SIZE */

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

extern void main_task(intptr_t exinf);
extern void tracer_task(intptr_t exinf);
extern void ev3_cyc_tracer(intptr_t exinf);
<<<<<<< HEAD
extern void tailmotor_task(intptr_t exinf);
extern void ev3_cyc_tailmotor(intptr_t exinf);
<<<<<<< HEAD
extern void odmetry_task(intptr_t exinf);
extern void ev3_cyc_odmetry(intptr_t exinf);
extern void ui_task(intptr_t exinf);
extern void ev3_cyc_ui(intptr_t exinf);
extern void logger_task(intptr_t exinf);
extern void ev3_cyc_logger(intptr_t exinf);
extern void remote_task(intptr_t exinf);
extern void ev3_cyc_remote(intptr_t exinf);
=======
>>>>>>> parent of a0735ed... 訂正
=======
>>>>>>> parent of 4bca7fb... 定周期走行、オドメトリとか本来のクラスを一通り統合した

#endif /* TOPPERS_MACRO_ONLY */

#ifdef __cplusplus
}
#endif
