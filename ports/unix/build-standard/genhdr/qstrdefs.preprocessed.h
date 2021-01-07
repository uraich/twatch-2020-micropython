# 1 "<stdin>"
# 1 "/opt/ucc/micros/esp32/lilygo-ttgo-twatch-2020-micropython/ports/unix//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "<stdin>"
# 29 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 62 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 31 "./mpconfigport.h"
# 1 "variants/standard/mpconfigvariant.h" 1
# 32 "./mpconfigport.h" 2
# 196 "./mpconfigport.h"
extern const struct _mp_print_t mp_stderr_print;
# 211 "./mpconfigport.h"
extern const struct _mp_obj_module_t mp_module_machine;
extern const struct _mp_obj_module_t mp_module_os;
extern const struct _mp_obj_module_t mp_module_uos_vfs;
extern const struct _mp_obj_module_t mp_module_uselect;
extern const struct _mp_obj_module_t mp_module_time;
extern const struct _mp_obj_module_t mp_module_termios;
extern const struct _mp_obj_module_t mp_module_socket;
extern const struct _mp_obj_module_t mp_module_ffi;
extern const struct _mp_obj_module_t mp_module_jni;
extern const struct _mp_obj_module_t mp_module_lvgl;
extern const struct _mp_obj_module_t mp_module_lvindev;
extern const struct _mp_obj_module_t mp_module_SDL;
extern const struct _mp_obj_module_t mp_module_fb;
extern const struct _mp_obj_module_t mp_module_lodepng;
# 263 "./mpconfigport.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdint.h" 2 3 4
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdbool.h" 1 3 4
# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_conf_internal.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_conf_internal.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_conf_kconfig.h" 1
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_conf_internal.h" 2
# 40 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_conf_internal.h"
# 1 "../../lib/lv_bindings/lv_conf.h" 1
# 70 "../../lib/lv_bindings/lv_conf.h"

# 70 "../../lib/lv_bindings/lv_conf.h"
typedef int16_t lv_coord_t;
# 153 "../../lib/lv_bindings/lv_conf.h"
typedef void * lv_anim_user_data_t;
# 188 "../../lib/lv_bindings/lv_conf.h"
typedef void * lv_group_user_data_t;
# 215 "../../lib/lv_bindings/lv_conf.h"
typedef void * lv_fs_drv_user_data_t;
# 247 "../../lib/lv_bindings/lv_conf.h"
typedef void * lv_img_decoder_user_data_t;
# 307 "../../lib/lv_bindings/lv_conf.h"
typedef void * lv_disp_drv_user_data_t;
typedef void * lv_indev_drv_user_data_t;
# 444 "../../lib/lv_bindings/lv_conf.h"
typedef void * lv_font_user_data_t;
# 41 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_conf_internal.h" 2
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2


# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4

# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef int wchar_t;
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h" 1
# 33 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h"

# 33 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_log.h"
struct _silence_gcc_warning;
struct _silence_gcc_warning;
struct _silence_gcc_warning;
struct _silence_gcc_warning;
struct _silence_gcc_warning;
struct _silence_gcc_warning;

typedef int8_t lv_log_level_t;
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_types.h" 1
# 47 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_types.h"
enum {
    LV_RES_INV = 0,

    LV_RES_OK,
};
typedef uint8_t lv_res_t;





typedef uintptr_t lv_uintptr_t;
# 22 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h" 2
# 42 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
typedef struct {
    uint32_t total_size;
    uint32_t free_cnt;
    uint32_t free_size;
    uint32_t free_biggest_size;
    uint32_t used_cnt;
    uint32_t max_used;
    uint8_t used_pct;
    uint8_t frag_pct;
} lv_mem_monitor_t;

typedef struct {
    void * p;
    uint16_t size;
    uint8_t used : 1;
} lv_mem_buf_t;

typedef lv_mem_buf_t lv_mem_buf_arr_t[16];
extern lv_mem_buf_arr_t _lv_mem_buf;
# 69 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
void _lv_mem_init(void);





void _lv_mem_deinit(void);






void * lv_mem_alloc(size_t size);





void lv_mem_free(const void * data);
# 97 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
void * lv_mem_realloc(void * data_p, size_t new_size);




void lv_mem_defrag(void);





lv_res_t lv_mem_test(void);






void lv_mem_monitor(lv_mem_monitor_t * mon_p);






uint32_t _lv_mem_get_size(const void * data);





void * _lv_mem_buf_get(uint32_t size);





void _lv_mem_buf_release(void * p);




void _lv_mem_buf_free_all(void);
# 206 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_mem.h"
 void * _lv_memcpy(void * dst, const void * src, size_t len);







 static inline void * _lv_memcpy_small(void * dst, const void * src, size_t len)
{
    uint8_t * d8 = (uint8_t *)dst;
    const uint8_t * s8 = (const uint8_t *)src;

    while(len) {
        *d8 = *s8;
        d8++;
        s8++;
        len--;
    }

    return dst;
}







 void _lv_memset(void * dst, uint8_t v, size_t len);






 void _lv_memset_00(void * dst, size_t len);






 void _lv_memset_ff(void * dst, size_t len);
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h" 1
# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h" 2
# 30 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
typedef uint8_t lv_ll_node_t;


typedef struct {
    uint32_t n_size;
    lv_ll_node_t * head;
    lv_ll_node_t * tail;
} lv_ll_t;
# 48 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
void _lv_ll_init(lv_ll_t * ll_p, uint32_t node_size);






void * _lv_ll_ins_head(lv_ll_t * ll_p);







void * _lv_ll_ins_prev(lv_ll_t * ll_p, void * n_act);






void * _lv_ll_ins_tail(lv_ll_t * ll_p);







void _lv_ll_remove(lv_ll_t * ll_p, void * node_p);





void _lv_ll_clear(lv_ll_t * ll_p);
# 94 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
void _lv_ll_chg_list(lv_ll_t * ll_ori_p, lv_ll_t * ll_new_p, void * node, 
# 94 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h" 3 4
                                                                         _Bool 
# 94 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
                                                                              head);






void * _lv_ll_get_head(const lv_ll_t * ll_p);






void * _lv_ll_get_tail(const lv_ll_t * ll_p);







void * _lv_ll_get_next(const lv_ll_t * ll_p, const void * n_act);







void * _lv_ll_get_prev(const lv_ll_t * ll_p, const void * n_act);






uint32_t _lv_ll_get_len(const lv_ll_t * ll_p);
# 147 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
void _lv_ll_move_before(lv_ll_t * ll_p, void * n_act, void * n_after);







# 154 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h" 3 4
_Bool 
# 154 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_ll.h"
    _lv_ll_is_empty(lv_ll_t * ll_p);
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h" 1
# 36 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h"
struct _lv_task_t;




typedef void (*lv_task_cb_t)(struct _lv_task_t *);




enum {
    LV_TASK_PRIO_OFF = 0,
    LV_TASK_PRIO_LOWEST,
    LV_TASK_PRIO_LOW,
    LV_TASK_PRIO_MID,
    LV_TASK_PRIO_HIGH,
    LV_TASK_PRIO_HIGHEST,
    _LV_TASK_PRIO_NUM,
};
typedef uint8_t lv_task_prio_t;




typedef struct _lv_task_t {
    uint32_t period;
    uint32_t last_run;
    lv_task_cb_t task_cb;

    void * user_data;

    int32_t repeat_count;
    uint8_t prio : 3;
} lv_task_t;
# 78 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h"
void _lv_task_core_init(void);







 uint32_t lv_task_handler(void);
# 95 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h"
lv_task_t * lv_task_create_basic(void);
# 107 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h"
lv_task_t * lv_task_create(lv_task_cb_t task_xcb, uint32_t period, lv_task_prio_t prio, void * user_data);





void lv_task_del(lv_task_t * task);






void lv_task_set_cb(lv_task_t * task, lv_task_cb_t task_cb);






void lv_task_set_prio(lv_task_t * task, lv_task_prio_t prio);






void lv_task_set_period(lv_task_t * task, uint32_t period);





void lv_task_ready(lv_task_t * task);






void lv_task_set_repeat_count(lv_task_t * task, int32_t repeat_count);






void lv_task_reset(lv_task_t * task);





void lv_task_enable(
# 160 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h" 3 4
                   _Bool 
# 160 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_task.h"
                        en);





uint8_t lv_task_get_idle(void);






lv_task_t * lv_task_get_next(lv_task_t * task);
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_conf_internal.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2


# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/../lv_conf_internal.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h" 1
# 49 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h"
typedef struct {
    uint16_t i;
    uint16_t f;
} lv_sqrt_res_t;
# 65 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h"
 int16_t _lv_trigo_sin(int16_t angle);
# 78 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h"
int32_t _lv_bezier3(uint32_t t, int32_t u0, int32_t u1, int32_t u2, int32_t u3);







uint16_t _lv_atan2(int x, int y);
# 101 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h"
 void _lv_sqrt(uint32_t x, lv_sqrt_res_t * q, uint32_t mask);
# 111 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h"
int64_t _lv_pow(int64_t base, int8_t exp);
# 122 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_math.h"
int16_t _lv_map(int32_t x, int32_t min_in, int32_t max_in, int32_t min, int32_t max);
# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h" 2
# 59 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
enum {
    LV_OPA_TRANSP = 0,
    LV_OPA_0 = 0,
    LV_OPA_10 = 25,
    LV_OPA_20 = 51,
    LV_OPA_30 = 76,
    LV_OPA_40 = 102,
    LV_OPA_50 = 127,
    LV_OPA_60 = 153,
    LV_OPA_70 = 178,
    LV_OPA_80 = 204,
    LV_OPA_90 = 229,
    LV_OPA_100 = 255,
    LV_OPA_COVER = 255,
};
# 215 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
typedef union {
    uint8_t full;
    union {
        uint8_t blue : 1;
        uint8_t green : 1;
        uint8_t red : 1;
    } ch;
} lv_color1_t;

typedef union {
    struct {
        uint8_t blue : 2;
        uint8_t green : 3;
        uint8_t red : 3;
    } ch;
    uint8_t full;
} lv_color8_t;

typedef union {
    struct {

        uint16_t blue : 5;
        uint16_t green : 6;
        uint16_t red : 5;






    } ch;
    uint16_t full;
} lv_color16_t;

typedef union {
    struct {
        uint8_t blue;
        uint8_t green;
        uint8_t red;
        uint8_t alpha;
    } ch;
    uint32_t full;
} lv_color32_t;
# 268 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
typedef uint16_t lv_color_int_t;
typedef lv_color16_t lv_color_t;
# 284 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
typedef struct {
    uint16_t h;
    uint8_t s;
    uint8_t v;
} lv_color_hsv_t;



typedef uint8_t lv_opa_t;
# 312 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
static inline uint8_t lv_color_to1(lv_color_t color)
{
# 324 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
    if(((color).ch.red & 0x10) || ((color).ch.green & 0x20) || ((color).ch.blue & 0x10)) {
        return 1;
    }
    else {
        return 0;
    }
# 338 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
}

static inline uint8_t lv_color_to8(lv_color_t color)
{
# 350 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
    lv_color8_t ret;
    (ret).ch.red = (uint8_t)((color).ch.red >> 2) & 0x7U;;
    (ret).ch.green = (uint8_t)((color).ch.green >> 3) & 0x7U;;
    (ret).ch.blue = (uint8_t)((color).ch.blue >> 3) & 0x3U;;
    return ret.full;







}

static inline uint16_t lv_color_to16(lv_color_t color)
{
# 382 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
    return color.full;
# 395 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
}

static inline uint32_t lv_color_to32(lv_color_t color)
{
# 441 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
    lv_color32_t ret;
    (ret).ch.red = (uint32_t)((((color).ch.red * 263 + 7) >> 5) & 0xFF);;
    (ret).ch.green = (uint32_t)((((color).ch.green * 259 + 3) >> 6) & 0xFF);;
    (ret).ch.blue = (uint32_t)((((color).ch.blue * 263 + 7) >> 5) & 0xFF);;
    (ret).ch.alpha = (uint32_t)((0xFF) & 0xFF);;
    return ret.full;



}
# 462 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
 static inline lv_color_t lv_color_mix(lv_color_t c1, lv_color_t c2, uint8_t mix)
{
    lv_color_t ret;


    (ret).ch.red = (uint8_t)(((uint32_t)((uint32_t) ((uint16_t) (c1).ch.red * mix + (c2).ch.red * (255 - mix) + 128) * 0x8081) >> 0x17)) & 0x1FU;
                                                                              ;
    (ret).ch.green = (uint8_t)(((uint32_t)((uint32_t) ((uint16_t) (c1).ch.green * mix + (c2).ch.green * (255 - mix) + 128) * 0x8081) >> 0x17)) & 0x3FU;
                                                                              ;
    (ret).ch.blue = (uint8_t)(((uint32_t)((uint32_t) ((uint16_t) (c1).ch.blue * mix + (c2).ch.blue * (255 - mix) + 128) * 0x8081) >> 0x17)) & 0x1FU;
                                                                              ;
    do {} while(0);





    return ret;
}

 static inline void lv_color_premult(lv_color_t c, uint8_t mix, uint16_t * out)
{

    out[0] = (uint16_t) (c).ch.red * mix;
    out[1] = (uint16_t) (c).ch.green * mix;
    out[2] = (uint16_t) (c).ch.blue * mix;
# 496 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
}
# 508 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
 static inline lv_color_t lv_color_mix_premult(uint16_t * premult_c1, lv_color_t c2, uint8_t mix)
{
    lv_color_t ret;


    (ret).ch.red = (uint8_t)(((uint32_t)((uint32_t) ((uint16_t) premult_c1[0] + (c2).ch.red * mix + 128) * 0x8081) >> 0x17)) & 0x1FU;;
    (ret).ch.green = (uint8_t)(((uint32_t)((uint32_t) ((uint16_t) premult_c1[1] + (c2).ch.green * mix + 128) * 0x8081) >> 0x17)) & 0x3FU;;
    (ret).ch.blue = (uint8_t)(((uint32_t)((uint32_t) ((uint16_t) premult_c1[2] + (c2).ch.blue * mix + 128) * 0x8081) >> 0x17)) & 0x1FU;;
    do {} while(0);
# 527 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
    return ret;
}
# 540 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
 static inline void lv_color_mix_with_alpha(lv_color_t bg_color, lv_opa_t bg_opa,
                                                                 lv_color_t fg_color, lv_opa_t fg_opa,
                                                                 lv_color_t * res_color, lv_opa_t * res_opa)
{

    if(fg_opa >= 253 || bg_opa <= 2) {
        res_color->full = fg_color.full;
        *res_opa = fg_opa;
    }

    else if(fg_opa <= 2) {
        res_color->full = bg_color.full;
        *res_opa = bg_opa;
    }

    else if(bg_opa >= 253) {
        *res_color = lv_color_mix(fg_color, bg_color, fg_opa);
        *res_opa = LV_OPA_COVER;
    }

    else {

        static lv_opa_t fg_opa_save = 0;
        static lv_opa_t bg_opa_save = 0;
        static lv_color_t fg_color_save = {{0x00, 0x00, 0x00}};
        static lv_color_t bg_color_save = {{0x00, 0x00, 0x00}};
        static lv_color_t res_color_saved = {{0x00, 0x00, 0x00}};
        static lv_opa_t res_opa_saved = 0;

        if(fg_opa != fg_opa_save || bg_opa != bg_opa_save || fg_color.full != fg_color_save.full ||
           bg_color.full != bg_color_save.full) {
            fg_opa_save = fg_opa;
            bg_opa_save = bg_opa;
            fg_color_save.full = fg_color.full;
            bg_color_save.full = bg_color.full;


            res_opa_saved = 255 - ((uint16_t)((uint16_t)(255 - fg_opa) * (255 - bg_opa)) >> 8);
            if(res_opa_saved == 0) {
                while(1)
                    ;
            }
            lv_opa_t ratio = (uint16_t)((uint16_t)fg_opa * 255) / res_opa_saved;
            res_color_saved = lv_color_mix(fg_color, bg_color, ratio);

        }

        res_color->full = res_color_saved.full;
        *res_opa = res_opa_saved;
    }
}
# 599 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
static inline uint8_t lv_color_brightness(lv_color_t color)
{
    lv_color32_t c32;
    c32.full = lv_color_to32(color);
    uint16_t bright = (uint16_t)(3u * (c32).ch.red + (c32).ch.blue + 4u * (c32).ch.green);
    return (uint8_t)(bright >> 3);
}
# 650 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
static inline lv_color_t lv_color_make(uint8_t r, uint8_t g, uint8_t b)
{
    return ((lv_color_t){{(uint16_t)((b >> 3) & 0x1FU), (uint16_t)((g >> 2) & 0x3FU), (uint16_t)((r >> 3) & 0x1FU)}});
}

static inline lv_color_t lv_color_hex(uint32_t c)
{
    return lv_color_make((uint8_t)((c >> 16) & 0xFF), (uint8_t)((c >> 8) & 0xFF), (uint8_t)(c & 0xFF));
}

static inline lv_color_t lv_color_hex3(uint32_t c)
{
    return lv_color_make((uint8_t)(((c >> 4) & 0xF0) | ((c >> 8) & 0xF)), (uint8_t)((c & 0xF0) | ((c & 0xF0) >> 4)),
                         (uint8_t)((c & 0xF) | ((c & 0xF) << 4)));
}




 void lv_color_fill(lv_color_t * buf, lv_color_t color, uint32_t px_num);


lv_color_t lv_color_lighten(lv_color_t c, lv_opa_t lvl);

lv_color_t lv_color_darken(lv_color_t c, lv_opa_t lvl);
# 683 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
lv_color_t lv_color_hsv_to_rgb(uint16_t h, uint8_t s, uint8_t v);
# 692 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_color.h"
lv_color_hsv_t lv_color_rgb_to_hsv(uint8_t r8, uint8_t g8, uint8_t b8);






lv_color_hsv_t lv_color_to_hsv(lv_color_t color);
# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4

# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 122 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 154 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 385 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 410 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 428 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 499 "/usr/include/string.h" 3 4

# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 2


# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_mem.h" 1
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 2
# 29 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"

# 29 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
struct _silence_gcc_warning;
struct _silence_gcc_warning;
# 39 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
typedef struct {
    lv_coord_t x;
    lv_coord_t y;
} lv_point_t;


typedef struct {
    lv_coord_t x1;
    lv_coord_t y1;
    lv_coord_t x2;
    lv_coord_t y2;
} lv_area_t;




enum {
    LV_ALIGN_CENTER = 0,
    LV_ALIGN_IN_TOP_LEFT,
    LV_ALIGN_IN_TOP_MID,
    LV_ALIGN_IN_TOP_RIGHT,
    LV_ALIGN_IN_BOTTOM_LEFT,
    LV_ALIGN_IN_BOTTOM_MID,
    LV_ALIGN_IN_BOTTOM_RIGHT,
    LV_ALIGN_IN_LEFT_MID,
    LV_ALIGN_IN_RIGHT_MID,
    LV_ALIGN_OUT_TOP_LEFT,
    LV_ALIGN_OUT_TOP_MID,
    LV_ALIGN_OUT_TOP_RIGHT,
    LV_ALIGN_OUT_BOTTOM_LEFT,
    LV_ALIGN_OUT_BOTTOM_MID,
    LV_ALIGN_OUT_BOTTOM_RIGHT,
    LV_ALIGN_OUT_LEFT_TOP,
    LV_ALIGN_OUT_LEFT_MID,
    LV_ALIGN_OUT_LEFT_BOTTOM,
    LV_ALIGN_OUT_RIGHT_TOP,
    LV_ALIGN_OUT_RIGHT_MID,
    LV_ALIGN_OUT_RIGHT_BOTTOM,
};
typedef uint8_t lv_align_t;
# 93 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
void lv_area_set(lv_area_t * area_p, lv_coord_t x1, lv_coord_t y1, lv_coord_t x2, lv_coord_t y2);






inline static void lv_area_copy(lv_area_t * dest, const lv_area_t * src)
{
    _lv_memcpy_small(dest, src, sizeof(lv_area_t));
}






static inline lv_coord_t lv_area_get_width(const lv_area_t * area_p)
{
    return (lv_coord_t)(area_p->x2 - area_p->x1 + 1);
}






static inline lv_coord_t lv_area_get_height(const lv_area_t * area_p)
{
    return (lv_coord_t)(area_p->y2 - area_p->y1 + 1);
}






void lv_area_set_width(lv_area_t * area_p, lv_coord_t w);






void lv_area_set_height(lv_area_t * area_p, lv_coord_t h);







void _lv_area_set_pos(lv_area_t * area_p, lv_coord_t x, lv_coord_t y);






uint32_t lv_area_get_size(const lv_area_t * area_p);
# 161 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"

# 161 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 3 4
_Bool 
# 161 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
    _lv_area_intersect(lv_area_t * res_p, const lv_area_t * a1_p, const lv_area_t * a2_p);







void _lv_area_join(lv_area_t * a_res_p, const lv_area_t * a1_p, const lv_area_t * a2_p);
# 178 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"

# 178 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 3 4
_Bool 
# 178 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
    _lv_area_is_point_on(const lv_area_t * a_p, const lv_point_t * p_p, lv_coord_t radius);








# 186 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 3 4
_Bool 
# 186 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
    _lv_area_is_on(const lv_area_t * a1_p, const lv_area_t * a2_p);
# 195 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"

# 195 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h" 3 4
_Bool 
# 195 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
    _lv_area_is_in(const lv_area_t * ain_p, const lv_area_t * aholder_p, lv_coord_t radius);
# 205 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_area.h"
void _lv_area_align(const lv_area_t * base, const lv_area_t * to_align, lv_align_t align, lv_point_t * res);
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 2
# 59 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
enum {
    LV_IMG_CF_UNKNOWN = 0,

    LV_IMG_CF_RAW,
    LV_IMG_CF_RAW_ALPHA,

    LV_IMG_CF_RAW_CHROMA_KEYED,


    LV_IMG_CF_TRUE_COLOR,
    LV_IMG_CF_TRUE_COLOR_ALPHA,
    LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED,


    LV_IMG_CF_INDEXED_1BIT,
    LV_IMG_CF_INDEXED_2BIT,
    LV_IMG_CF_INDEXED_4BIT,
    LV_IMG_CF_INDEXED_8BIT,

    LV_IMG_CF_ALPHA_1BIT,
    LV_IMG_CF_ALPHA_2BIT,
    LV_IMG_CF_ALPHA_4BIT,
    LV_IMG_CF_ALPHA_8BIT,

    LV_IMG_CF_RESERVED_15,
    LV_IMG_CF_RESERVED_16,
    LV_IMG_CF_RESERVED_17,
    LV_IMG_CF_RESERVED_18,
    LV_IMG_CF_RESERVED_19,
    LV_IMG_CF_RESERVED_20,
    LV_IMG_CF_RESERVED_21,
    LV_IMG_CF_RESERVED_22,
    LV_IMG_CF_RESERVED_23,

    LV_IMG_CF_USER_ENCODED_0,
    LV_IMG_CF_USER_ENCODED_1,
    LV_IMG_CF_USER_ENCODED_2,
    LV_IMG_CF_USER_ENCODED_3,
    LV_IMG_CF_USER_ENCODED_4,
    LV_IMG_CF_USER_ENCODED_5,
    LV_IMG_CF_USER_ENCODED_6,
    LV_IMG_CF_USER_ENCODED_7,
};
typedef uint8_t lv_img_cf_t;
# 126 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
typedef struct {

    uint32_t cf : 5;
    uint32_t always_zero : 3;


    uint32_t reserved : 2;

    uint32_t w : 11;
    uint32_t h : 11;
} lv_img_header_t;




typedef struct {
    lv_img_header_t header;
    uint32_t data_size;
    const uint8_t * data;
} lv_img_dsc_t;

typedef struct {
    struct {
        const void * src;
        lv_coord_t src_w;
        lv_coord_t src_h;
        lv_coord_t pivot_x;
        lv_coord_t pivot_y;
        int16_t angle;
        uint16_t zoom;
        lv_color_t color;
        lv_img_cf_t cf;
        
# 158 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
       _Bool 
# 158 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
            antialias;
    } cfg;

    struct {
        lv_color_t color;
        lv_opa_t opa;
    } res;


    struct {
        lv_img_dsc_t img_dsc;
        int32_t pivot_x_256;
        int32_t pivot_y_256;
        int32_t sinma;
        int32_t cosma;

        uint8_t chroma_keyed : 1;
        uint8_t has_alpha : 1;
        uint8_t native_color : 1;

        uint32_t zoom_inv;


        lv_coord_t xs;
        lv_coord_t ys;
        lv_coord_t xs_int;
        lv_coord_t ys_int;
        uint32_t pxi;
        uint8_t px_size;
    } tmp;
} lv_img_transform_dsc_t;
# 201 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
lv_img_dsc_t * lv_img_buf_alloc(lv_coord_t w, lv_coord_t h, lv_img_cf_t cf);
# 213 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
lv_color_t lv_img_buf_get_px_color(lv_img_dsc_t * dsc, lv_coord_t x, lv_coord_t y, lv_color_t color);
# 223 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
lv_opa_t lv_img_buf_get_px_alpha(lv_img_dsc_t * dsc, lv_coord_t x, lv_coord_t y);
# 233 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
void lv_img_buf_set_px_color(lv_img_dsc_t * dsc, lv_coord_t x, lv_coord_t y, lv_color_t c);
# 243 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
void lv_img_buf_set_px_alpha(lv_img_dsc_t * dsc, lv_coord_t x, lv_coord_t y, lv_opa_t opa);
# 255 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
void lv_img_buf_set_palette(lv_img_dsc_t * dsc, uint8_t id, lv_color_t c);





void lv_img_buf_free(lv_img_dsc_t * dsc);
# 270 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
uint32_t lv_img_buf_get_img_size(lv_coord_t w, lv_coord_t h, lv_img_cf_t cf);







void _lv_img_buf_transform_init(lv_img_transform_dsc_t * dsc);






# 284 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
_Bool 
# 284 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
    _lv_img_buf_transform_anti_alias(lv_img_transform_dsc_t * dsc);
# 295 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
static inline 
# 295 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
             _Bool 
# 295 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                  _lv_img_buf_transform(lv_img_transform_dsc_t * dsc, lv_coord_t x, lv_coord_t y)
{
    const uint8_t * src_u8 = (const uint8_t *)dsc->cfg.src;


    int32_t xt = x - dsc->cfg.pivot_x;
    int32_t yt = y - dsc->cfg.pivot_y;

    int32_t xs;
    int32_t ys;
    if(dsc->cfg.zoom == 256) {

        xs = ((dsc->tmp.cosma * xt - dsc->tmp.sinma * yt) >> (10 - 8)) + dsc->tmp.pivot_x_256;
        ys = ((dsc->tmp.sinma * xt + dsc->tmp.cosma * yt) >> (10 - 8)) + dsc->tmp.pivot_y_256;
    }
    else if(dsc->cfg.angle == 0) {
        xt = (int32_t)((int32_t)xt * dsc->tmp.zoom_inv) >> 5;
        yt = (int32_t)((int32_t)yt * dsc->tmp.zoom_inv) >> 5;
        xs = xt + dsc->tmp.pivot_x_256;
        ys = yt + dsc->tmp.pivot_y_256;
    }
    else {
        xt = (int32_t)((int32_t)xt * dsc->tmp.zoom_inv) >> 5;
        yt = (int32_t)((int32_t)yt * dsc->tmp.zoom_inv) >> 5;
        xs = ((dsc->tmp.cosma * xt - dsc->tmp.sinma * yt) >> (10)) + dsc->tmp.pivot_x_256;
        ys = ((dsc->tmp.sinma * xt + dsc->tmp.cosma * yt) >> (10)) + dsc->tmp.pivot_y_256;
    }


    int32_t xs_int = xs >> 8;
    int32_t ys_int = ys >> 8;

    if(xs_int >= dsc->cfg.src_w) return 
# 327 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                                       0
# 327 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                            ;
    else if(xs_int < 0) return 
# 328 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                              0
# 328 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                   ;

    if(ys_int >= dsc->cfg.src_h) return 
# 330 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                                       0
# 330 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                            ;
    else if(ys_int < 0) return 
# 331 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                              0
# 331 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                   ;

    uint8_t px_size;
    uint32_t pxi;
    if(dsc->tmp.native_color) {
        if(dsc->tmp.has_alpha == 0) {
            px_size = 16 >> 3;

            pxi = dsc->cfg.src_w * ys_int * px_size + xs_int * px_size;
            _lv_memcpy_small(&dsc->res.color, &src_u8[pxi], px_size);
        }
        else {
            px_size = 3;
            pxi = dsc->cfg.src_w * ys_int * px_size + xs_int * px_size;
            _lv_memcpy_small(&dsc->res.color, &src_u8[pxi], px_size - 1);
            dsc->res.opa = src_u8[pxi + px_size - 1];
        }
    }
    else {
        pxi = 0;
        px_size = 0;
        dsc->res.color = lv_img_buf_get_px_color(&dsc->tmp.img_dsc, xs_int, ys_int, dsc->cfg.color);
        dsc->res.opa = lv_img_buf_get_px_alpha(&dsc->tmp.img_dsc, xs_int, ys_int);
    }

    if(dsc->tmp.chroma_keyed) {
        lv_color_t ct = ((lv_color_t){{(uint16_t)((0x00 >> 3) & 0x1FU), (uint16_t)((0xFF >> 2) & 0x3FU), (uint16_t)((0x00 >> 3) & 0x1FU)}});
        if(dsc->res.color.full == ct.full) return 
# 358 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                                                 0
# 358 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                                      ;
    }

    if(dsc->cfg.antialias == 
# 361 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                            0
# 361 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                 ) return 
# 361 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
                                          1
# 361 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
                                              ;

    dsc->tmp.xs = xs;
    dsc->tmp.ys = ys;
    dsc->tmp.xs_int = xs_int;
    dsc->tmp.ys_int = ys_int;
    dsc->tmp.pxi = pxi;
    dsc->tmp.px_size = px_size;

    
# 370 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h" 3 4
   _Bool 
# 370 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
        ret;
    ret = _lv_img_buf_transform_anti_alias(dsc);

    return ret;
}
# 385 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_buf.h"
void _lv_img_buf_get_transformed_area(lv_area_t * res, lv_coord_t w, lv_coord_t h, int16_t angle, uint16_t zoom,
                                      const lv_point_t * pivot);
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h" 1
# 37 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
enum {
    LV_FS_RES_OK = 0,
    LV_FS_RES_HW_ERR,
    LV_FS_RES_FS_ERR,
    LV_FS_RES_NOT_EX,
    LV_FS_RES_FULL,
    LV_FS_RES_LOCKED,
    LV_FS_RES_DENIED,
    LV_FS_RES_BUSY,
    LV_FS_RES_TOUT,
    LV_FS_RES_NOT_IMP,
    LV_FS_RES_OUT_OF_MEM,
    LV_FS_RES_INV_PARAM,
    LV_FS_RES_UNKNOWN,
};
typedef uint8_t lv_fs_res_t;




enum {
    LV_FS_MODE_WR = 0x01,
    LV_FS_MODE_RD = 0x02,
};
typedef uint8_t lv_fs_mode_t;

typedef struct _lv_fs_drv_t {
    char letter;
    uint16_t file_size;
    uint16_t rddir_size;
    
# 67 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h" 3 4
   _Bool 
# 67 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
        (*ready_cb)(struct _lv_fs_drv_t * drv);

    lv_fs_res_t (*open_cb)(struct _lv_fs_drv_t * drv, void * file_p, const char * path, lv_fs_mode_t mode);
    lv_fs_res_t (*close_cb)(struct _lv_fs_drv_t * drv, void * file_p);
    lv_fs_res_t (*remove_cb)(struct _lv_fs_drv_t * drv, const char * fn);
    lv_fs_res_t (*read_cb)(struct _lv_fs_drv_t * drv, void * file_p, void * buf, uint32_t btr, uint32_t * br);
    lv_fs_res_t (*write_cb)(struct _lv_fs_drv_t * drv, void * file_p, const void * buf, uint32_t btw, uint32_t * bw);
    lv_fs_res_t (*seek_cb)(struct _lv_fs_drv_t * drv, void * file_p, uint32_t pos);
    lv_fs_res_t (*tell_cb)(struct _lv_fs_drv_t * drv, void * file_p, uint32_t * pos_p);
    lv_fs_res_t (*trunc_cb)(struct _lv_fs_drv_t * drv, void * file_p);
    lv_fs_res_t (*size_cb)(struct _lv_fs_drv_t * drv, void * file_p, uint32_t * size_p);
    lv_fs_res_t (*rename_cb)(struct _lv_fs_drv_t * drv, const char * oldname, const char * newname);
    lv_fs_res_t (*free_space_cb)(struct _lv_fs_drv_t * drv, uint32_t * total_p, uint32_t * free_p);

    lv_fs_res_t (*dir_open_cb)(struct _lv_fs_drv_t * drv, void * rddir_p, const char * path);
    lv_fs_res_t (*dir_read_cb)(struct _lv_fs_drv_t * drv, void * rddir_p, char * fn);
    lv_fs_res_t (*dir_close_cb)(struct _lv_fs_drv_t * drv, void * rddir_p);




} lv_fs_drv_t;

typedef struct {
    void * file_d;
    lv_fs_drv_t * drv;
} lv_fs_file_t;

typedef struct {
    void * dir_d;
    lv_fs_drv_t * drv;
} lv_fs_dir_t;
# 107 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
void _lv_fs_init(void);







void lv_fs_drv_init(lv_fs_drv_t * drv);






void lv_fs_drv_register(lv_fs_drv_t * drv_p);






lv_fs_drv_t * lv_fs_get_drv(char letter);








# 137 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h" 3 4
_Bool 
# 137 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
    lv_fs_is_ready(char letter);
# 146 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_open(lv_fs_file_t * file_p, const char * path, lv_fs_mode_t mode);






lv_fs_res_t lv_fs_close(lv_fs_file_t * file_p);






lv_fs_res_t lv_fs_remove(const char * path);
# 170 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_read(lv_fs_file_t * file_p, void * buf, uint32_t btr, uint32_t * br);
# 180 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_write(lv_fs_file_t * file_p, const void * buf, uint32_t btw, uint32_t * bw);







lv_fs_res_t lv_fs_seek(lv_fs_file_t * file_p, uint32_t pos);







lv_fs_res_t lv_fs_tell(lv_fs_file_t * file_p, uint32_t * pos);







lv_fs_res_t lv_fs_trunc(lv_fs_file_t * file_p);







lv_fs_res_t lv_fs_size(lv_fs_file_t * file_p, uint32_t * size);







lv_fs_res_t lv_fs_rename(const char * oldname, const char * newname);







lv_fs_res_t lv_fs_dir_open(lv_fs_dir_t * rddir_p, const char * path);
# 237 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_dir_read(lv_fs_dir_t * rddir_p, char * fn);






lv_fs_res_t lv_fs_dir_close(lv_fs_dir_t * rddir_p);
# 253 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_fs.h"
lv_fs_res_t lv_fs_free_space(char letter, uint32_t * total_p, uint32_t * free_p);






char * lv_fs_get_letters(char * buf);






const char * lv_fs_get_ext(const char * fn);






char * lv_fs_up(char * path);






const char * lv_fs_get_last(const char * path);
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_misc/lv_types.h" 1
# 22 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2

# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/../lv_conf_internal.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2


# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_symbol_def.h" 1
# 94 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_symbol_def.h"
enum {
    _LV_STR_SYMBOL_AUDIO,
    _LV_STR_SYMBOL_VIDEO,
    _LV_STR_SYMBOL_LIST,
    _LV_STR_SYMBOL_OK,
    _LV_STR_SYMBOL_CLOSE,
    _LV_STR_SYMBOL_POWER,
    _LV_STR_SYMBOL_SETTINGS,
    _LV_STR_SYMBOL_HOME,
    _LV_STR_SYMBOL_DOWNLOAD,
    _LV_STR_SYMBOL_DRIVE,
    _LV_STR_SYMBOL_REFRESH,
    _LV_STR_SYMBOL_MUTE,
    _LV_STR_SYMBOL_VOLUME_MID,
    _LV_STR_SYMBOL_VOLUME_MAX,
    _LV_STR_SYMBOL_IMAGE,
    _LV_STR_SYMBOL_EDIT,
    _LV_STR_SYMBOL_PREV,
    _LV_STR_SYMBOL_PLAY,
    _LV_STR_SYMBOL_PAUSE,
    _LV_STR_SYMBOL_STOP,
    _LV_STR_SYMBOL_NEXT,
    _LV_STR_SYMBOL_EJECT,
    _LV_STR_SYMBOL_LEFT,
    _LV_STR_SYMBOL_RIGHT,
    _LV_STR_SYMBOL_PLUS,
    _LV_STR_SYMBOL_MINUS,
    _LV_STR_SYMBOL_EYE_OPEN,
    _LV_STR_SYMBOL_EYE_CLOSE,
    _LV_STR_SYMBOL_WARNING,
    _LV_STR_SYMBOL_SHUFFLE,
    _LV_STR_SYMBOL_UP,
    _LV_STR_SYMBOL_DOWN,
    _LV_STR_SYMBOL_LOOP,
    _LV_STR_SYMBOL_DIRECTORY,
    _LV_STR_SYMBOL_UPLOAD,
    _LV_STR_SYMBOL_CALL,
    _LV_STR_SYMBOL_CUT,
    _LV_STR_SYMBOL_COPY,
    _LV_STR_SYMBOL_SAVE,
    _LV_STR_SYMBOL_CHARGE,
    _LV_STR_SYMBOL_PASTE,
    _LV_STR_SYMBOL_BELL,
    _LV_STR_SYMBOL_KEYBOARD,
    _LV_STR_SYMBOL_GPS,
    _LV_STR_SYMBOL_FILE,
    _LV_STR_SYMBOL_WIFI,
    _LV_STR_SYMBOL_BATTERY_FULL,
    _LV_STR_SYMBOL_BATTERY_3,
    _LV_STR_SYMBOL_BATTERY_2,
    _LV_STR_SYMBOL_BATTERY_1,
    _LV_STR_SYMBOL_BATTERY_EMPTY,
    _LV_STR_SYMBOL_USB,
    _LV_STR_SYMBOL_BLUETOOTH,
    _LV_STR_SYMBOL_TRASH,
    _LV_STR_SYMBOL_BACKSPACE,
    _LV_STR_SYMBOL_SD_CARD,
    _LV_STR_SYMBOL_NEW_LINE,
    _LV_STR_SYMBOL_DUMMY,
};
# 22 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/../lv_misc/lv_area.h" 1
# 23 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 2
# 37 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
typedef struct {
    uint16_t adv_w;
    uint16_t box_w;
    uint16_t box_h;
    int16_t ofs_x;
    int16_t ofs_y;
    uint8_t bpp;
} lv_font_glyph_dsc_t;



enum {
    LV_FONT_SUBPX_NONE,
    LV_FONT_SUBPX_HOR,
    LV_FONT_SUBPX_VER,
    LV_FONT_SUBPX_BOTH,
};

typedef uint8_t lv_font_subpx_t;


typedef struct _lv_font_struct {

    
# 60 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 3 4
   _Bool 
# 60 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
        (*get_glyph_dsc)(const struct _lv_font_struct *, lv_font_glyph_dsc_t *, uint32_t letter, uint32_t letter_next);


    const uint8_t * (*get_glyph_bitmap)(const struct _lv_font_struct *, uint32_t);


    lv_coord_t line_height;
    lv_coord_t base_line;
    uint8_t subpx : 2;

    int8_t underline_position;
    int8_t underline_thickness;

    void * dsc;





} lv_font_t;
# 91 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
const uint8_t * lv_font_get_glyph_bitmap(const lv_font_t * font_p, uint32_t letter);
# 101 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"

# 101 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h" 3 4
_Bool 
# 101 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
    lv_font_get_glyph_dsc(const lv_font_t * font_p, lv_font_glyph_dsc_t * dsc_out, uint32_t letter,
                           uint32_t letter_next);
# 111 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
uint16_t lv_font_get_glyph_width(const lv_font_t * font, uint32_t letter, uint32_t letter_next);






static inline lv_coord_t lv_font_get_line_height(const lv_font_t * font_p)
{
    return font_p->line_height;
}
# 142 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"
extern lv_font_t lv_font_montserrat_14;
# 239 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_font/lv_font.h"

# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_color.h" 1
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_area.h" 1
# 20 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/../lv_conf_internal.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h" 2




# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_mem.h" 1
# 22 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h" 2
# 32 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
enum {
    LV_ANIM_OFF,
    LV_ANIM_ON,
};

typedef uint8_t lv_anim_enable_t;


typedef lv_coord_t lv_anim_value_t;






struct _lv_anim_t;
struct _lv_anim_path_t;

typedef lv_anim_value_t (*lv_anim_path_cb_t)(const struct _lv_anim_path_t *, const struct _lv_anim_t *);

typedef struct _lv_anim_path_t {
    lv_anim_path_cb_t cb;
    void * user_data;
} lv_anim_path_t;
# 65 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
typedef void (*lv_anim_exec_xcb_t)(void *, lv_anim_value_t);



typedef void (*lv_anim_custom_exec_cb_t)(struct _lv_anim_t *, lv_anim_value_t);


typedef void (*lv_anim_ready_cb_t)(struct _lv_anim_t *);


typedef void (*lv_anim_start_cb_t)(struct _lv_anim_t *);


typedef struct _lv_anim_t {
    void * var;
    lv_anim_exec_xcb_t exec_cb;
    lv_anim_start_cb_t start_cb;
    lv_anim_ready_cb_t ready_cb;
    lv_anim_path_t path;
    int32_t start;
    int32_t current;
    int32_t end;
    int32_t time;
    int32_t act_time;
    uint32_t playback_delay;
    uint32_t playback_time;
    uint32_t repeat_delay;
    uint16_t repeat_cnt;
    uint8_t early_apply : 1;





    uint32_t time_orig;
    uint8_t playback_now : 1;
    uint32_t has_run : 1;
} lv_anim_t;
# 112 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
void _lv_anim_core_init(void);
# 122 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
void lv_anim_init(lv_anim_t * a);






static inline void lv_anim_set_var(lv_anim_t * a, void * var)
{
    a->var = var;
}
# 141 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
static inline void lv_anim_set_exec_cb(lv_anim_t * a, lv_anim_exec_xcb_t exec_cb)
{
    a->exec_cb = exec_cb;
}






static inline void lv_anim_set_time(lv_anim_t * a, uint32_t duration)
{
    a->time = duration;
}






static inline void lv_anim_set_delay(lv_anim_t * a, uint32_t delay)
{
    a->act_time = -(int32_t)(delay);
}







static inline void lv_anim_set_values(lv_anim_t * a, lv_anim_value_t start, lv_anim_value_t end)
{
    a->start = start;
    a->current = start;
    a->end = end;
}
# 188 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
static inline void lv_anim_set_custom_exec_cb(lv_anim_t * a, lv_anim_custom_exec_cb_t exec_cb)
{
    a->var = a;
    a->exec_cb = (lv_anim_exec_xcb_t)exec_cb;
}







static inline void lv_anim_set_path(lv_anim_t * a, const lv_anim_path_t * path)
{
    _lv_memcpy_small(&a->path, path, sizeof(lv_anim_path_t));
}







static inline void lv_anim_set_start_cb(lv_anim_t * a, lv_anim_ready_cb_t start_cb)
{
    a->start_cb = start_cb;
}






static inline void lv_anim_set_ready_cb(lv_anim_t * a, lv_anim_ready_cb_t ready_cb)
{
    a->ready_cb = ready_cb;
}






static inline void lv_anim_set_playback_time(lv_anim_t * a, uint16_t time)
{
    a->playback_time = time;
}






static inline void lv_anim_set_playback_delay(lv_anim_t * a, uint16_t delay)
{
    a->playback_delay = delay;
}






static inline void lv_anim_set_repeat_count(lv_anim_t * a, uint16_t cnt)
{
    a->repeat_cnt = cnt;
}






static inline void lv_anim_set_repeat_delay(lv_anim_t * a, uint16_t delay)
{
    a->repeat_delay = delay;
}





void lv_anim_start(lv_anim_t * a);





static inline void lv_anim_path_init(lv_anim_path_t * path)
{
    _lv_memset_00(path, sizeof(lv_anim_path_t));
}






static inline void lv_anim_path_set_cb(lv_anim_path_t * path, lv_anim_path_cb_t cb)
{
    path->cb = cb;
}






static inline void lv_anim_path_set_user_data(lv_anim_path_t * path, void * user_data)
{
    path->user_data = user_data;
}






static inline int32_t lv_anim_get_delay(lv_anim_t * a)
{
    return -a->act_time;
}
# 318 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"

# 318 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h" 3 4
_Bool 
# 318 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
    lv_anim_del(void * var, lv_anim_exec_xcb_t exec_cb);
# 328 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
lv_anim_t * lv_anim_get(void * var, lv_anim_exec_xcb_t exec_cb);
# 341 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
static inline 
# 341 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h" 3 4
             _Bool 
# 341 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
                  lv_anim_custom_del(lv_anim_t * a, lv_anim_custom_exec_cb_t exec_cb)
{
    return lv_anim_del(a->var, (lv_anim_exec_xcb_t)exec_cb);
}





uint16_t lv_anim_count_running(void);
# 359 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_anim.h"
uint16_t lv_anim_speed_to_time(uint16_t speed, lv_anim_value_t start, lv_anim_value_t end);







void lv_anim_refr_now(void);






lv_anim_value_t lv_anim_path_linear(const lv_anim_path_t * path, const lv_anim_t * a);






lv_anim_value_t lv_anim_path_ease_in(const lv_anim_path_t * path, const lv_anim_t * a);






lv_anim_value_t lv_anim_path_ease_out(const lv_anim_path_t * path, const lv_anim_t * a);






lv_anim_value_t lv_anim_path_ease_in_out(const lv_anim_path_t * path, const lv_anim_t * a);






lv_anim_value_t lv_anim_path_overshoot(const lv_anim_path_t * path, const lv_anim_t * a);






lv_anim_value_t lv_anim_path_bounce(const lv_anim_path_t * path, const lv_anim_t * a);







lv_anim_value_t lv_anim_path_step(const lv_anim_path_t * path, const lv_anim_t * a);




extern const lv_anim_path_t lv_anim_path_def;
# 21 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_types.h" 1
# 22 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h" 1
# 32 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h"

# 32 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h" 3 4
_Bool 
# 32 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h"
    lv_debug_check_null(const void * p);


# 34 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h" 3 4
_Bool 
# 34 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h"
    lv_debug_check_mem_integrity(void);


# 36 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h" 3 4
_Bool 
# 36 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_misc/lv_debug.h"
    lv_debug_check_str(const void * str);

void lv_debug_log_error(const char * msg, uint64_t value);
# 23 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_blend.h" 1
# 16 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_blend.h"
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/../lv_misc/lv_color.h" 1
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_blend.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/../lv_misc/lv_area.h" 1
# 18 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_blend.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h" 1
# 30 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
enum {
    LV_DRAW_MASK_RES_TRANSP,
    LV_DRAW_MASK_RES_FULL_COVER,
    LV_DRAW_MASK_RES_CHANGED,
    LV_DRAW_MASK_RES_UNKNOWN
};

typedef uint8_t lv_draw_mask_res_t;


enum {
    LV_DRAW_MASK_TYPE_LINE,
    LV_DRAW_MASK_TYPE_ANGLE,
    LV_DRAW_MASK_TYPE_RADIUS,
    LV_DRAW_MASK_TYPE_FADE,
    LV_DRAW_MASK_TYPE_MAP,
};

typedef uint8_t lv_draw_mask_type_t;

enum {
    LV_DRAW_MASK_LINE_SIDE_LEFT = 0,
    LV_DRAW_MASK_LINE_SIDE_RIGHT,
    LV_DRAW_MASK_LINE_SIDE_TOP,
    LV_DRAW_MASK_LINE_SIDE_BOTTOM,
};





typedef lv_draw_mask_res_t (*lv_draw_mask_xcb_t)(lv_opa_t * mask_buf, lv_coord_t abs_x, lv_coord_t abs_y,
                                                 lv_coord_t len,
                                                 void * p);

typedef uint8_t lv_draw_mask_line_side_t;

typedef struct {
    lv_draw_mask_xcb_t cb;
    lv_draw_mask_type_t type;
} lv_draw_mask_common_dsc_t;

typedef struct {

    lv_draw_mask_common_dsc_t dsc;

    struct {

        lv_point_t p1;


        lv_point_t p2;


        lv_draw_mask_line_side_t side : 2;
    } cfg;


    lv_point_t origo;


    int32_t xy_steep;


    int32_t yx_steep;


    int32_t steep;


    int32_t spx;


    uint8_t flat : 1;




    uint8_t inv: 1;
} lv_draw_mask_line_param_t;

typedef struct {

    lv_draw_mask_common_dsc_t dsc;

    struct {
        lv_point_t vertex_p;
        lv_coord_t start_angle;
        lv_coord_t end_angle;
    } cfg;

    lv_draw_mask_line_param_t start_line;
    lv_draw_mask_line_param_t end_line;
    uint16_t delta_deg;
} lv_draw_mask_angle_param_t;

typedef struct {

    lv_draw_mask_common_dsc_t dsc;

    struct {
        lv_area_t rect;
        lv_coord_t radius;

        uint8_t outer: 1;
    } cfg;
    int32_t y_prev;
    lv_sqrt_res_t y_prev_x;

} lv_draw_mask_radius_param_t;

typedef struct {

    lv_draw_mask_common_dsc_t dsc;

    struct {
        lv_area_t coords;
        lv_coord_t y_top;
        lv_coord_t y_bottom;
        lv_opa_t opa_top;
        lv_opa_t opa_bottom;
    } cfg;

} lv_draw_mask_fade_param_t;

typedef struct _lv_draw_mask_map_param_t {

    lv_draw_mask_common_dsc_t dsc;

    struct {
        lv_area_t coords;
        const lv_opa_t * map;
    } cfg;
} lv_draw_mask_map_param_t;

typedef struct {
    void * param;
    void * custom_id;
} _lv_draw_mask_saved_t;

typedef _lv_draw_mask_saved_t _lv_draw_mask_saved_arr_t[16];
# 182 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
int16_t lv_draw_mask_add(void * param, void * custom_id);
# 198 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
 lv_draw_mask_res_t lv_draw_mask_apply(lv_opa_t * mask_buf, lv_coord_t abs_x, lv_coord_t abs_y,
                                                            lv_coord_t len);
# 210 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
void * lv_draw_mask_remove_id(int16_t id);







void * lv_draw_mask_remove_custom(void * custom_id);







 uint8_t lv_draw_mask_get_cnt(void);
# 242 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
void lv_draw_mask_line_points_init(lv_draw_mask_line_param_t * param, lv_coord_t p1x, lv_coord_t p1y, lv_coord_t p2x,
                                   lv_coord_t p2y, lv_draw_mask_line_side_t side);
# 255 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
void lv_draw_mask_line_angle_init(lv_draw_mask_line_param_t * param, lv_coord_t p1x, lv_coord_t py, int16_t angle,
                                  lv_draw_mask_line_side_t side);
# 266 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
void lv_draw_mask_angle_init(lv_draw_mask_angle_param_t * param, lv_coord_t vertex_x, lv_coord_t vertex_y,
                             lv_coord_t start_angle, lv_coord_t end_angle);
# 276 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
void lv_draw_mask_radius_init(lv_draw_mask_radius_param_t * param, const lv_area_t * rect, lv_coord_t radius, 
# 276 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h" 3 4
                                                                                                             _Bool 
# 276 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
                                                                                                                  inv);
# 287 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_mask.h"
void lv_draw_mask_fade_init(lv_draw_mask_fade_param_t * param, const lv_area_t * coords, lv_opa_t opa_top,
                            lv_coord_t y_top,
                            lv_opa_t opa_bottom, lv_coord_t y_bottom);







void lv_draw_mask_map_init(lv_draw_mask_map_param_t * param, const lv_area_t * coords, const lv_opa_t * map);
# 19 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_blend.h" 2
# 27 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/../lv_draw/lv_draw_blend.h"
enum {
    LV_BLEND_MODE_NORMAL,

    LV_BLEND_MODE_ADDITIVE,
    LV_BLEND_MODE_SUBTRACTIVE,

};

typedef uint8_t lv_blend_mode_t;






 void _lv_blend_fill(const lv_area_t * clip_area, const lv_area_t * fill_area, lv_color_t color,
                                          lv_opa_t * mask, lv_draw_mask_res_t mask_res, lv_opa_t opa, lv_blend_mode_t mode);


 void _lv_blend_map(const lv_area_t * clip_area, const lv_area_t * map_area,
                                         const lv_color_t * map_buf,
                                         lv_opa_t * mask, lv_draw_mask_res_t mask_res, lv_opa_t opa, lv_blend_mode_t mode);
# 24 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 2






struct _silence_gcc_warning;
# 53 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
enum {
    LV_BORDER_SIDE_NONE = 0x00,
    LV_BORDER_SIDE_BOTTOM = 0x01,
    LV_BORDER_SIDE_TOP = 0x02,
    LV_BORDER_SIDE_LEFT = 0x04,
    LV_BORDER_SIDE_RIGHT = 0x08,
    LV_BORDER_SIDE_FULL = 0x0F,
    LV_BORDER_SIDE_INTERNAL = 0x10,
    _LV_BORDER_SIDE_LAST
};
typedef uint8_t lv_border_side_t;

enum {
    LV_GRAD_DIR_NONE,
    LV_GRAD_DIR_VER,
    LV_GRAD_DIR_HOR,
    _LV_GRAD_DIR_LAST
};

typedef uint8_t lv_grad_dir_t;


enum {
    LV_TEXT_DECOR_NONE = 0x00,
    LV_TEXT_DECOR_UNDERLINE = 0x01,
    LV_TEXT_DECOR_STRIKETHROUGH = 0x02,
    _LV_TEXT_DECOR_LAST
};

typedef uint8_t lv_text_decor_t;

typedef uint8_t lv_style_attr_t;
# 94 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
enum {

    LV_STYLE_RADIUS = (((0x0 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_CLIP_CORNER = (((0x0 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_SIZE = (((0x0 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_TRANSFORM_WIDTH = (((0x0 << 4) + 0x0 + 4) | ((0) << 8)),
    LV_STYLE_TRANSFORM_HEIGHT = (((0x0 << 4) + 0x0 + 5) | ((0) << 8)),
    LV_STYLE_TRANSFORM_ANGLE = (((0x0 << 4) + 0x0 + 6) | ((0) << 8)),
    LV_STYLE_TRANSFORM_ZOOM = (((0x0 << 4) + 0x0 + 7) | ((0) << 8)),
    LV_STYLE_OPA_SCALE = (((0x0 << 4) + 0xC + 0) | (((1 << 7)) << 8)),

    LV_STYLE_PAD_TOP = (((0x1 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_PAD_BOTTOM = (((0x1 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_PAD_LEFT = (((0x1 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_PAD_RIGHT = (((0x1 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_PAD_INNER = (((0x1 << 4) + 0x0 + 4) | ((0) << 8)),
    LV_STYLE_MARGIN_TOP = (((0x1 << 4) + 0x0 + 5) | ((0) << 8)),
    LV_STYLE_MARGIN_BOTTOM = (((0x1 << 4) + 0x0 + 6) | ((0) << 8)),
    LV_STYLE_MARGIN_LEFT = (((0x1 << 4) + 0x0 + 7) | ((0) << 8)),
    LV_STYLE_MARGIN_RIGHT = (((0x1 << 4) + 0x0 + 8) | ((0) << 8)),

    LV_STYLE_BG_BLEND_MODE = (((0x2 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_BG_MAIN_STOP = (((0x2 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_BG_GRAD_STOP = (((0x2 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_BG_GRAD_DIR = (((0x2 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_BG_COLOR = (((0x2 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_BG_GRAD_COLOR = (((0x2 << 4) + 0x9 + 1) | ((0) << 8)),
    LV_STYLE_BG_OPA = (((0x2 << 4) + 0xC + 0) | ((0) << 8)),

    LV_STYLE_BORDER_WIDTH = (((0x3 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_BORDER_SIDE = (((0x3 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_BORDER_BLEND_MODE = (((0x3 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_BORDER_POST = (((0x3 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_BORDER_COLOR = (((0x3 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_BORDER_OPA = (((0x3 << 4) + 0xC + 0) | ((0) << 8)),

    LV_STYLE_OUTLINE_WIDTH = (((0x4 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_OUTLINE_PAD = (((0x4 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_OUTLINE_BLEND_MODE = (((0x4 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_OUTLINE_COLOR = (((0x4 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_OUTLINE_OPA = (((0x4 << 4) + 0xC + 0) | ((0) << 8)),

    LV_STYLE_SHADOW_WIDTH = (((0x5 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_SHADOW_OFS_X = (((0x5 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_SHADOW_OFS_Y = (((0x5 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_SHADOW_SPREAD = (((0x5 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_SHADOW_BLEND_MODE = (((0x5 << 4) + 0x0 + 4) | ((0) << 8)),
    LV_STYLE_SHADOW_COLOR = (((0x5 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_SHADOW_OPA = (((0x5 << 4) + 0xC + 0) | ((0) << 8)),

    LV_STYLE_PATTERN_BLEND_MODE = (((0x6 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_PATTERN_REPEAT = (((0x6 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_PATTERN_RECOLOR = (((0x6 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_PATTERN_OPA = (((0x6 << 4) + 0xC + 0) | ((0) << 8)),
    LV_STYLE_PATTERN_RECOLOR_OPA = (((0x6 << 4) + 0xC + 1) | ((0) << 8)),
    LV_STYLE_PATTERN_IMAGE = (((0x6 << 4) + 0xE + 0) | ((0) << 8)),

    LV_STYLE_VALUE_LETTER_SPACE = (((0x7 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_VALUE_LINE_SPACE = (((0x7 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_VALUE_BLEND_MODE = (((0x7 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_VALUE_OFS_X = (((0x7 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_VALUE_OFS_Y = (((0x7 << 4) + 0x0 + 4) | ((0) << 8)),
    LV_STYLE_VALUE_ALIGN = (((0x7 << 4) + 0x0 + 5) | ((0) << 8)),
    LV_STYLE_VALUE_COLOR = (((0x7 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_VALUE_OPA = (((0x7 << 4) + 0xC + 0) | ((0) << 8)),
    LV_STYLE_VALUE_FONT = (((0x7 << 4) + 0xE + 0) | ((0) << 8)),
    LV_STYLE_VALUE_STR = (((0x7 << 4) + 0xE + 1) | ((0) << 8)),

    LV_STYLE_TEXT_LETTER_SPACE = (((0x8 << 4) + 0x0 + 0) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_LINE_SPACE = (((0x8 << 4) + 0x0 + 1) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_DECOR = (((0x8 << 4) + 0x0 + 2) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_BLEND_MODE = (((0x8 << 4) + 0x0 + 3) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_COLOR = (((0x8 << 4) + 0x9 + 0) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_SEL_COLOR = (((0x8 << 4) + 0x9 + 1) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_SEL_BG_COLOR = (((0x8 << 4) + 0x9 + 2) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_OPA = (((0x8 << 4) + 0xC + 0) | (((1 << 7)) << 8)),
    LV_STYLE_TEXT_FONT = (((0x8 << 4) + 0xE + 0) | (((1 << 7)) << 8)),

    LV_STYLE_LINE_WIDTH = (((0x9 << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_LINE_BLEND_MODE = (((0x9 << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_LINE_DASH_WIDTH = (((0x9 << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_LINE_DASH_GAP = (((0x9 << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_LINE_ROUNDED = (((0x9 << 4) + 0x0 + 4) | ((0) << 8)),
    LV_STYLE_LINE_COLOR = (((0x9 << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_LINE_OPA = (((0x9 << 4) + 0xC + 0) | ((0) << 8)),

    LV_STYLE_IMAGE_BLEND_MODE = (((0xA << 4) + 0x0 + 0) | (((1 << 7)) << 8)),
    LV_STYLE_IMAGE_RECOLOR = (((0xA << 4) + 0x9 + 0) | (((1 << 7)) << 8)),
    LV_STYLE_IMAGE_OPA = (((0xA << 4) + 0xC + 0) | (((1 << 7)) << 8)),
    LV_STYLE_IMAGE_RECOLOR_OPA = (((0xA << 4) + 0xC + 1) | (((1 << 7)) << 8)),

    LV_STYLE_TRANSITION_TIME = (((0xB << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_TRANSITION_DELAY = (((0xB << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_TRANSITION_PROP_1 = (((0xB << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_TRANSITION_PROP_2 = (((0xB << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_TRANSITION_PROP_3 = (((0xB << 4) + 0x0 + 4) | ((0) << 8)),
    LV_STYLE_TRANSITION_PROP_4 = (((0xB << 4) + 0x0 + 5) | ((0) << 8)),
    LV_STYLE_TRANSITION_PROP_5 = (((0xB << 4) + 0x0 + 6) | ((0) << 8)),
    LV_STYLE_TRANSITION_PROP_6 = (((0xB << 4) + 0x0 + 7) | ((0) << 8)),
    LV_STYLE_TRANSITION_PATH = (((0xB << 4) + 0xE + 0) | ((0) << 8)),

    LV_STYLE_SCALE_WIDTH = (((0xC << 4) + 0x0 + 0) | ((0) << 8)),
    LV_STYLE_SCALE_BORDER_WIDTH = (((0xC << 4) + 0x0 + 1) | ((0) << 8)),
    LV_STYLE_SCALE_END_BORDER_WIDTH = (((0xC << 4) + 0x0 + 2) | ((0) << 8)),
    LV_STYLE_SCALE_END_LINE_WIDTH = (((0xC << 4) + 0x0 + 3) | ((0) << 8)),
    LV_STYLE_SCALE_GRAD_COLOR = (((0xC << 4) + 0x9 + 0) | ((0) << 8)),
    LV_STYLE_SCALE_END_COLOR = (((0xC << 4) + 0x9 + 1) | ((0) << 8)),
};

typedef uint16_t lv_style_property_t;





typedef uint16_t lv_style_state_t;

typedef struct {
    uint8_t * map;



} lv_style_t;

typedef int16_t lv_style_int_t;

typedef struct {
    lv_style_t ** style_list;



    uint32_t style_cnt : 6;
    uint32_t has_local : 1;
    uint32_t has_trans : 1;
    uint32_t skip_trans : 1;
    uint32_t ignore_trans : 1;
    uint32_t valid_cache : 1;
    uint32_t ignore_cache : 1;

    uint32_t radius_zero : 1;
    uint32_t opa_scale_cover : 1;
    uint32_t clip_corner_off : 1;
    uint32_t transform_all_zero : 1;
    uint32_t pad_all_zero : 1;
    uint32_t margin_all_zero : 1;
    uint32_t blend_mode_all_normal : 1;
    uint32_t bg_opa_transp : 1;
    uint32_t bg_opa_cover : 1;

    uint32_t border_width_zero : 1;
    uint32_t border_side_full : 1;
    uint32_t border_post_off : 1;

    uint32_t outline_width_zero : 1;
    uint32_t pattern_img_null : 1;
    uint32_t shadow_width_zero : 1;
    uint32_t value_txt_str : 1;
    uint32_t img_recolor_opa_transp : 1;

    uint32_t text_space_zero : 1;
    uint32_t text_decor_none : 1;
    uint32_t text_font_normal : 1;
} lv_style_list_t;
# 266 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void lv_style_init(lv_style_t * style);






void lv_style_copy(lv_style_t * style_dest, const lv_style_t * style_src);





void lv_style_list_init(lv_style_list_t * list);






void lv_style_list_copy(lv_style_list_t * list_dest, const lv_style_list_t * list_src);
# 295 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_list_add_style(lv_style_list_t * list, lv_style_t * style);






void _lv_style_list_remove_style(lv_style_list_t * list, lv_style_t * style);






void _lv_style_list_reset(lv_style_list_t * style_list);

static inline lv_style_t * lv_style_list_get_style(lv_style_list_t * list, uint8_t id)
{
    if(list->has_trans && list->skip_trans) id++;
    if(list->style_cnt == 0 || id >= list->style_cnt) return 
# 314 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 3 4
                                                            ((void *)0)
# 314 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
                                                                ;
    return list->style_list[id];
}





void lv_style_reset(lv_style_t * style);






uint16_t _lv_style_get_mem_size(const lv_style_t * style);






void lv_style_copy(lv_style_t * dest, const lv_style_t * src);
# 345 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"

# 345 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 3 4
_Bool 
# 345 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
    lv_style_remove_prop(lv_style_t * style, lv_style_property_t prop);
# 357 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_set_int(lv_style_t * style, lv_style_property_t prop, lv_style_int_t value);
# 369 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_set_color(lv_style_t * style, lv_style_property_t prop, lv_color_t color);
# 381 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_set_opa(lv_style_t * style, lv_style_property_t prop, lv_opa_t opa);
# 393 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_set_ptr(lv_style_t * style, lv_style_property_t prop, const void * p);
# 408 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
int16_t _lv_style_get_int(const lv_style_t * style, lv_style_property_t prop, void * res);
# 423 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
int16_t _lv_style_get_color(const lv_style_t * style, lv_style_property_t prop, void * res);
# 438 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
int16_t _lv_style_get_opa(const lv_style_t * style, lv_style_property_t prop, void * res);
# 453 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
int16_t _lv_style_get_ptr(const lv_style_t * style, lv_style_property_t prop, void * res);






lv_style_t * lv_style_list_get_local_style(lv_style_list_t * list);






lv_style_t * _lv_style_list_get_transition_style(lv_style_list_t * list);






lv_style_t * _lv_style_list_add_trans_style(lv_style_list_t * list);
# 484 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_list_set_local_int(lv_style_list_t * list, lv_style_property_t prop, lv_style_int_t value);
# 494 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_list_set_local_color(lv_style_list_t * list, lv_style_property_t prop, lv_color_t value);
# 504 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_list_set_local_opa(lv_style_list_t * list, lv_style_property_t prop, lv_opa_t value);
# 514 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
void _lv_style_list_set_local_ptr(lv_style_list_t * list, lv_style_property_t prop, const void * value);
# 527 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
lv_res_t _lv_style_list_get_int(lv_style_list_t * list, lv_style_property_t prop, lv_style_int_t * res);
# 540 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
lv_res_t _lv_style_list_get_color(lv_style_list_t * list, lv_style_property_t prop, lv_color_t * res);
# 554 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
lv_res_t _lv_style_list_get_opa(lv_style_list_t * list, lv_style_property_t prop, lv_opa_t * res);
# 567 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
lv_res_t _lv_style_list_get_ptr(lv_style_list_t * list, lv_style_property_t prop, const void ** res);







# 574 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 3 4
_Bool 
# 574 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
    lv_debug_check_style(const lv_style_t * style);







# 581 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h" 3 4
_Bool 
# 581 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/../lv_core/lv_style.h"
    lv_debug_check_style_list(const lv_style_list_t * list);
# 24 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h" 2
# 35 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
enum {
    LV_IMG_SRC_VARIABLE,
    LV_IMG_SRC_FILE,
    LV_IMG_SRC_SYMBOL,
    LV_IMG_SRC_UNKNOWN,
};

typedef uint8_t lv_img_src_t;



struct _lv_img_decoder;
struct _lv_img_decoder_dsc;
# 56 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
typedef lv_res_t (*lv_img_decoder_info_f_t)(struct _lv_img_decoder * decoder, const void * src,
                                            lv_img_header_t * header);






typedef lv_res_t (*lv_img_decoder_open_f_t)(struct _lv_img_decoder * decoder, struct _lv_img_decoder_dsc * dsc);
# 77 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
typedef lv_res_t (*lv_img_decoder_read_line_f_t)(struct _lv_img_decoder * decoder, struct _lv_img_decoder_dsc * dsc,
                                                 lv_coord_t x, lv_coord_t y, lv_coord_t len, uint8_t * buf);






typedef void (*lv_img_decoder_close_f_t)(struct _lv_img_decoder * decoder, struct _lv_img_decoder_dsc * dsc);

typedef struct _lv_img_decoder {
    lv_img_decoder_info_f_t info_cb;
    lv_img_decoder_open_f_t open_cb;
    lv_img_decoder_read_line_f_t read_line_cb;
    lv_img_decoder_close_f_t close_cb;




} lv_img_decoder_t;


typedef struct _lv_img_decoder_dsc {

    lv_img_decoder_t * decoder;


    const void * src;


    lv_color_t color;


    lv_img_src_t src_type;


    lv_img_header_t header;



    const uint8_t * img_data;



    uint32_t time_to_open;



    const char * error_msg;


    void * user_data;
} lv_img_decoder_dsc_t;
# 138 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
void _lv_img_decoder_init(void);
# 150 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_get_info(const char * src, lv_img_header_t * header);
# 164 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_open(lv_img_decoder_dsc_t * dsc, const void * src, lv_color_t color);
# 175 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_read_line(lv_img_decoder_dsc_t * dsc, lv_coord_t x, lv_coord_t y, lv_coord_t len,
                                  uint8_t * buf);





void lv_img_decoder_close(lv_img_decoder_dsc_t * dsc);





lv_img_decoder_t * lv_img_decoder_create(void);





void lv_img_decoder_delete(lv_img_decoder_t * decoder);






void lv_img_decoder_set_info_cb(lv_img_decoder_t * decoder, lv_img_decoder_info_f_t info_cb);






void lv_img_decoder_set_open_cb(lv_img_decoder_t * decoder, lv_img_decoder_open_f_t open_cb);






void lv_img_decoder_set_read_line_cb(lv_img_decoder_t * decoder, lv_img_decoder_read_line_f_t read_line_cb);






void lv_img_decoder_set_close_cb(lv_img_decoder_t * decoder, lv_img_decoder_close_f_t close_cb);
# 231 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_built_in_info(lv_img_decoder_t * decoder, const void * src, lv_img_header_t * header);







lv_res_t lv_img_decoder_built_in_open(lv_img_decoder_t * decoder, lv_img_decoder_dsc_t * dsc);
# 252 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_decoder.h"
lv_res_t lv_img_decoder_built_in_read_line(lv_img_decoder_t * decoder, lv_img_decoder_dsc_t * dsc, lv_coord_t x,
                                           lv_coord_t y, lv_coord_t len, uint8_t * buf);






void lv_img_decoder_built_in_close(lv_img_decoder_t * decoder, lv_img_decoder_dsc_t * dsc);
# 17 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h" 2
# 31 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h"
typedef struct {
    lv_img_decoder_dsc_t dec_dsc;




    int32_t life;
} lv_img_cache_entry_t;
# 52 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_img_cache.h"
lv_img_cache_entry_t * _lv_img_cache_open(const void * src, lv_color_t color);







void lv_img_cache_set_size(uint16_t new_slot_num);






void lv_img_cache_invalidate_src(const void * src);
# 22 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 1 "../../lib/lv_bindings/lvgl/src/lv_misc/../lv_draw/lv_draw_mask.h" 1
# 23 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h" 2
# 59 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h"
extern lv_ll_t _lv_task_ll; extern lv_ll_t _lv_disp_ll; extern lv_ll_t _lv_indev_ll; extern lv_ll_t _lv_drv_ll; extern lv_ll_t _lv_file_ll; extern lv_ll_t _lv_anim_ll; extern lv_ll_t _lv_group_ll; extern lv_ll_t _lv_img_defoder_ll; extern lv_ll_t _lv_obj_style_trans_ll; extern lv_img_cache_entry_t* _lv_img_cache_array; extern lv_task_t* _lv_task_act; extern lv_mem_buf_arr_t _lv_mem_buf; extern _lv_draw_mask_saved_arr_t _lv_draw_mask_list; extern void * _lv_theme_material_styles; extern void * _lv_theme_template_styles; extern void * _lv_theme_mono_styles; extern void * _lv_theme_empty_styles; extern uint8_t * _lv_font_decompr_buf;
# 70 "../../lib/lv_bindings/lvgl/src/lv_misc/lv_gc.h"
void _lv_gc_clear_roots(void);
# 264 "./mpconfigport.h" 2
# 302 "./mpconfigport.h"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 220 "/usr/include/unistd.h" 3 4

# 220 "/usr/include/unistd.h" 3 4
typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 700 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 756 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 870 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 967 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 991 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1014 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1035 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1056 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1079 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1124 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1161 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) ;
# 1170 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 1171 "/usr/include/unistd.h" 2 3 4


# 303 "./mpconfigport.h" 2





# 307 "./mpconfigport.h"
typedef long mp_int_t;
typedef unsigned long mp_uint_t;
# 321 "./mpconfigport.h"
typedef long mp_off_t;


void mp_unix_alloc_exec(size_t min_size, void **ptr, size_t *size);
void mp_unix_free_exec(void *ptr, size_t size);
void mp_unix_mark_exec(void);
# 385 "./mpconfigport.h"
# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4








# 32 "/usr/include/alloca.h" 3 4
extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 386 "./mpconfigport.h" 2
# 405 "./mpconfigport.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 173 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 279 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 292 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 379 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 577 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 873 "/usr/include/stdio.h" 3 4

# 406 "./mpconfigport.h" 2
# 420 "./mpconfigport.h"
# 1 "/usr/include/sched.h" 1 3 4
# 29 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 30 "/usr/include/sched.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 32 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 7 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 2 3 4



struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 33 "/usr/include/sched.h" 2 3 4
# 43 "/usr/include/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 76 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sched_param.h" 3 4
struct sched_param
{
  int sched_priority;
};
# 77 "/usr/include/x86_64-linux-gnu/bits/sched.h" 2 3 4


# 98 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4

# 44 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/cpu-set.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/cpu-set.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 115 "/usr/include/x86_64-linux-gnu/bits/cpu-set.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


# 45 "/usr/include/sched.h" 2 3 4









extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
# 129 "/usr/include/sched.h" 3 4

# 421 "./mpconfigport.h" 2
# 63 "../../py/mpconfig.h" 2
# 699 "../../py/mpconfig.h"

# 699 "../../py/mpconfig.h"
typedef double mp_float_t;
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(_)
Q(/)

Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 93 "<stdin>"
Q(ADDITIVE)

Q(AF_INET)

Q(AF_INET6)

Q(AF_UNIX)

Q(ALIGN)

Q(ALIGN)

Q(ALL)

Q(ALPHA_1BIT)

Q(ALPHA_2BIT)

Q(ALPHA_4BIT)

Q(ALPHA_8BIT)

Q(ANGLE)

Q(ANIM)

Q(APPLY)

Q(ARC)

Q(ARRAY)

Q(AUDIO)

Q(AUTO)

Q(AUTO)

Q(AUTO)

Q(AXIS)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(B115200)

Q(B57600)

Q(B9600)

Q(BACKSPACE)

Q(BACKSPACE)

Q(BACKWARD)

Q(BAR)

Q(BASE_DIR_CHG)

Q(BATTERY_1)

Q(BATTERY_2)

Q(BATTERY_3)

Q(BATTERY_EMPTY)

Q(BATTERY_FULL)

Q(BELL)

Q(BFINT16)

Q(BFINT32)

Q(BFINT8)

Q(BFUINT16)

Q(BFUINT32)

Q(BFUINT8)

Q(BF_LEN)

Q(BF_POS)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG)

Q(BG_BLEND_MODE)

Q(BG_COLOR)

Q(BG_GRAD_COLOR)

Q(BG_GRAD_DIR)

Q(BG_GRAD_STOP)

Q(BG_MAIN_STOP)

Q(BG_OPA)

Q(BG_SCRLLABLE)

Q(BIDI_DIR)

Q(BIG_ENDIAN)

Q(BLEND_MODE)

Q(BLUETOOTH)

Q(BORDER_BLEND_MODE)

Q(BORDER_COLOR)

Q(BORDER_OPA)

Q(BORDER_POST)

Q(BORDER_SIDE)

Q(BORDER_SIDE)

Q(BORDER_WIDTH)

Q(BOTH)

Q(BOTH)

Q(BOTTOM)

Q(BOTTOM)

Q(BOTTOM)

Q(BOTTOM)

Q(BOTTOM)

Q(BREAK)

Q(BTN)

Q(BTN)

Q(BTN)

Q(BTN)

Q(BTNMATRIX)

Q(BTN_BG)

Q(BULLET)

Q(BUSY)

Q(BUTTON)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(Blob)

Q(Blob)

Q(BytesIO)

Q(BytesIO)

Q(CALENDAR)

Q(CALL)

Q(CANCEL)

Q(CANVAS)

Q(CELL1)

Q(CELL2)

Q(CELL3)

Q(CELL4)

Q(CENTER)

Q(CENTER)

Q(CENTER)

Q(CENTER)

Q(CF)

Q(CHANGED)

Q(CHARGE)

Q(CHART)

Q(CHECKABLE)

Q(CHECKBOX)

Q(CHECKED)

Q(CHECKED_DISABLED)

Q(CHECKED_PRESSED)

Q(CHECKED_RELEASED)

Q(CHECK_STATE)

Q(CHILD_CHG)

Q(CHILD_CHG)

Q(CIRCULAR)

Q(CLEANUP)

Q(CLICKED)

Q(CLICK_FOCUS)

Q(CLICK_TRIG)

Q(CLIP_CORNER)

Q(CLOSE)

Q(COLOR_MODE)

Q(COLUMN)

Q(COLUMN_LEFT)

Q(COLUMN_MID)

Q(COLUMN_RIGHT)

Q(COMPRESSED)

Q(COMPRESSED_NO_PREFILTER)

Q(CONSTANT_ARC)

Q(CONT)

Q(CONTENT_SCROLLABLE)

Q(CONTROL)

Q(COORD_CHG)

Q(COPY)

Q(COVER)

Q(COVER)

Q(COVER_CHK)

Q(CPICKER)

Q(CROP)

Q(CTRL)

Q(CURSOR)

Q(CURSOR)

Q(CURSOR)

Q(CURSOR)

Q(CUSTOM)

Q(CUSTOM_START)

Q(CUT)

Q(C_Pointer)

Q(C_Pointer)

Q(C_Pointer)

Q(C_Pointer)

Q(DARK)

Q(DATE)

Q(DAY_NAMES)

Q(DEFAULT)

Q(DEFOCUS)

Q(DEFOCUSED)

Q(DEL)

Q(DELETE)

Q(DENIED)

Q(DESC)

Q(DESIGN)

Q(DESIGN_RES)

Q(DIR)

Q(DIR)

Q(DIRECTORY)

Q(DISABLED)

Q(DISABLED)

Q(DISABLED)

Q(DISC)

Q(DISP_SIZE)

Q(DOT)

Q(DOWN)

Q(DOWN)

Q(DOWN)

Q(DOWN)

Q(DOWNLOAD)

Q(DRAG)

Q(DRAG_BEGIN)

Q(DRAG_BEGIN)

Q(DRAG_DIR)

Q(DRAG_END)

Q(DRAG_END)

Q(DRAG_THROW_BEGIN)

Q(DRAG_THROW_BEGIN)

Q(DRAW_LAST_TICK)

Q(DRAW_MAIN)

Q(DRAW_MASK_LINE_SIDE)

Q(DRAW_MASK_RES)

Q(DRAW_MASK_TYPE)

Q(DRAW_POST)

Q(DRIVE)

Q(DROPDOWN)

Q(DUMMY)

Q(DecompIO)

Q(DecompIO)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EDGE)

Q(EDGE_FLASH)

Q(EDGE_FLASH)

Q(EDGE_FLASH)

Q(EDGE_FLASH)

Q(EDIT)

Q(EDITED)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(EJECT)

Q(ENCODER)

Q(END)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(ENTER)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(ESC)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(EVENT)

Q(EXPAND)

Q(EXPAND)

Q(EXTRA_LARGE)

Q(EYE_CLOSE)

Q(EYE_OPEN)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FADE)

Q(FADE_ON)

Q(FILE)

Q(FILE)

Q(FILLSPIN_ARC)

Q(FIT)

Q(FIT)

Q(FLOAT32)

Q(FLOAT64)

Q(FOCUS)

Q(FOCUSED)

Q(FOCUSED)

Q(FOLLOW)

Q(FONT_FMT_TXT)

Q(FONT_FMT_TXT_CMAP)

Q(FONT_SUBPX)

Q(FORMAT0_FULL)

Q(FORMAT0_TINY)

Q(FORWARD)

Q(FS_ERR)

Q(FS_MODE)

Q(FS_RES)

Q(FULL)

Q(FULL)

Q(FULL_COVER)

Q(FileIO)

Q(FileIO)

Q(GAUGE)

Q(GESTURE)

Q(GESTURE)

Q(GESTURE_DIR)

Q(GET_EDITABLE)

Q(GET_STATE_DSC)

Q(GET_STYLE)

Q(GET_TYPE)

Q(GPS)

Q(GRAD_DIR)

Q(GREY)

Q(GREY_ALPHA)

Q(GRID)

Q(GROUP_REFOCUS_POLICY)

Q(GeneratorExit)

Q(GeneratorExit)

Q(HEADER)

Q(HEADER)

Q(HIDDEN)

Q(HIDE)

Q(HIGH)

Q(HIGHEST)

Q(HIT_TEST)

Q(HOME)

Q(HOME)

Q(HOR)

Q(HOR)

Q(HOR)

Q(HOVERED)

Q(HUE)

Q(HW_ERR)

Q(IMAGE)

Q(IMAGE)

Q(IMAGE_BLEND_MODE)

Q(IMAGE_OPA)

Q(IMAGE_RECOLOR)

Q(IMAGE_RECOLOR_OPA)

Q(IMGBTN)

Q(IN)

Q(INCL)

Q(INDEV_STATE)

Q(INDEV_TYPE)

Q(INDEXED_1BIT)

Q(INDEXED_2BIT)

Q(INDEXED_4BIT)

Q(INDEXED_8BIT)

Q(INDIC)

Q(INDIC)

Q(INDIC)

Q(INDIC)

Q(INDIC)

Q(INDIC)

Q(INHERIT)

Q(INIFINITE)

Q(INSERT)

Q(INT)

Q(INT16)

Q(INT32)

Q(INT64)

Q(INT8)

Q(INTERNAL)

Q(INV)

Q(INVERSE_LABELS_ORDER)

Q(INV_PARAM)

Q(IN_BOTTOM_LEFT)

Q(IN_BOTTOM_MID)

Q(IN_BOTTOM_RIGHT)

Q(IN_LEFT_MID)

Q(IN_RIGHT_MID)

Q(IN_TOP_LEFT)

Q(IN_TOP_MID)

Q(IN_TOP_RIGHT)

Q(IOBase)

Q(IOBase)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KEY)

Q(KEY)

Q(KEYBOARD)

Q(KEYBOARD)

Q(KEYPAD)

Q(KNOB)

Q(KNOB)

Q(KNOB)

Q(KNOB)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LABEL)

Q(LARGE)

Q(LAYOUT)

Q(LCT)

Q(LCT)

Q(LEAVE)

Q(LEAVE)

Q(LED)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LEFT)

Q(LIGHT)

Q(LINE)

Q(LINE)

Q(LINE)

Q(LINEMETER)

Q(LINE_BLEND_MODE)

Q(LINE_COLOR)

Q(LINE_DASH_GAP)

Q(LINE_DASH_WIDTH)

Q(LINE_OPA)

Q(LINE_ROUNDED)

Q(LINE_WIDTH)

Q(LIST)

Q(LIST)

Q(LIST)

Q(LIST_BTN)

Q(LITTLE_ENDIAN)

Q(LOCKED)

Q(LONG)

Q(LONG)

Q(LONGLONG)

Q(LONG_PRESS)

Q(LONG_PRESSED)

Q(LONG_PRESSED_REPEAT)

Q(LONG_PRESS_REP)

Q(LOOP)

Q(LOW)

Q(LOWEST)

Q(LTR)

Q(LV_ALIGN)

Q(LV_ANIM)

Q(LV_ARC_PART)

Q(LV_ARC_TYPE)

Q(LV_BAR_PART)

Q(LV_BAR_TYPE)

Q(LV_BIDI_DIR)

Q(LV_BLEND_MODE)

Q(LV_BORDER_SIDE)

Q(LV_BTNMATRIX_CTRL)

Q(LV_BTNMATRIX_PART)

Q(LV_BTN_PART)

Q(LV_BTN_STATE)

Q(LV_CALENDAR_PART)

Q(LV_CANVAS_PART)

Q(LV_CHART_AXIS)

Q(LV_CHART_CURSOR)

Q(LV_CHART_PART)

Q(LV_CHART_TYPE)

Q(LV_CHART_UPDATE_MODE)

Q(LV_CHECKBOX_PART)

Q(LV_CONT_PART)

Q(LV_CPICKER_COLOR_MODE)

Q(LV_CPICKER_PART)

Q(LV_CPICKER_TYPE)

Q(LV_DESIGN)

Q(LV_DESIGN_RES)

Q(LV_DISP_SIZE)

Q(LV_DRAG_DIR)

Q(LV_DRAW_MASK_LINE_SIDE)

Q(LV_DRAW_MASK_RES)

Q(LV_DRAW_MASK_TYPE)

Q(LV_DROPDOWN_DIR)

Q(LV_DROPDOWN_PART)

Q(LV_EVENT)

Q(LV_FIT)

Q(LV_FONT_FMT_TXT)

Q(LV_FONT_FMT_TXT_CMAP)

Q(LV_FONT_SUBPX)

Q(LV_FS_MODE)

Q(LV_FS_RES)

Q(LV_GAUGE_PART)

Q(LV_GESTURE_DIR)

Q(LV_GRAD_DIR)

Q(LV_GROUP_REFOCUS_POLICY)

Q(LV_IMGBTN_PART)

Q(LV_IMG_CF)

Q(LV_IMG_PART)

Q(LV_IMG_SRC)

Q(LV_INDEV_STATE)

Q(LV_INDEV_TYPE)

Q(LV_KEY)

Q(LV_KEYBOARD_MODE)

Q(LV_KEYBOARD_PART)

Q(LV_LABEL_ALIGN)

Q(LV_LABEL_LONG)

Q(LV_LABEL_PART)

Q(LV_LAYOUT)

Q(LV_LED_PART)

Q(LV_LINEMETER_PART)

Q(LV_LINE_PART)

Q(LV_LIST_PART)

Q(LV_MSGBOX_PART)

Q(LV_OBJMASK_PART)

Q(LV_OBJ_PART)

Q(LV_OPA)

Q(LV_PAGE_EDGE)

Q(LV_PAGE_PART)

Q(LV_PROTECT)

Q(LV_RES)

Q(LV_ROLLER_MODE)

Q(LV_ROLLER_PART)

Q(LV_SCROLLBAR_MODE)

Q(LV_SCR_LOAD_ANIM)

Q(LV_SIGNAL)

Q(LV_SLIDER_PART)

Q(LV_SLIDER_TYPE)

Q(LV_SPINBOX_PART)

Q(LV_SPINNER_DIR)

Q(LV_SPINNER_PART)

Q(LV_SPINNER_TYPE)

Q(LV_STATE)

Q(LV_STYLE)

Q(LV_SWITCH_PART)

Q(LV_SYMBOL)

Q(LV_TABLE_PART)

Q(LV_TABVIEW_PART)

Q(LV_TABVIEW_TAB_POS)

Q(LV_TASK_PRIO)

Q(LV_TEXTAREA_PART)

Q(LV_TEXT_DECOR)

Q(LV_THEME)

Q(LV_THEME_MATERIAL_FLAG)

Q(LV_TILEVIEW_PART)

Q(LV_TXT_CMD_STATE)

Q(LV_TXT_FLAG)

Q(LV_WIN_PART)

Q(LockType)

Q(LodePNGColorMode)

Q(LodePNGColorMode)

Q(LodePNGDecoderSettings)

Q(LodePNGDecoderSettings)

Q(LodePNGDecompressSettings)

Q(LodePNGDecompressSettings)

Q(LodePNGDecompressSettings_custom_inflate)

Q(LodePNGDecompressSettings_custom_zlib)

Q(LodePNGInfo)

Q(LodePNGInfo)

Q(LodePNGState)

Q(LodePNGState)

Q(LodePNGTime)

Q(LodePNGTime)

Q(LookupError)

Q(LookupError)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAIN)

Q(MAJOR)

Q(MAP)

Q(MARGIN_BOTTOM)

Q(MARGIN_LEFT)

Q(MARGIN_RIGHT)

Q(MARGIN_TOP)

Q(MASKED)

Q(MAX)

Q(MAX_OCTET_VALUE)

Q(MEDIUM)

Q(MID)

Q(MINUS)

Q(MODE)

Q(MODE)

Q(MOVE_BOTTOM)

Q(MOVE_LEFT)

Q(MOVE_RIGHT)

Q(MOVE_TOP)

Q(MSGBOX)

Q(MSGBOX_BTNS)

Q(MSG_DONTROUTE)

Q(MSG_DONTWAIT)

Q(MUTE)

Q(MemoryError)

Q(MemoryError)

Q(NATIVE)

Q(NEEDLE)

Q(NEUTRAL)

Q(NEW_LINE)

Q(NEXT)

Q(NEXT)

Q(NEXT)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NONE)

Q(NORMAL)

Q(NORMAL)

Q(NORMAL)

Q(NORMAL)

Q(NORMAL)

Q(NOT_COVER)

Q(NOT_EX)

Q(NOT_IMP)

Q(NO_FOCUS)

Q(NO_REPEAT)

Q(NO_TRANSITION)

Q(NUM)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(NotImplemented)

Q(NotImplemented)

Q(NotImplementedError)

Q(NotImplementedError)

Q(OBJ)

Q(OBJMASK)

Q(OFF)

Q(OFF)

Q(OFF)

Q(OFF)

Q(OK)

Q(OK)

Q(OK)

Q(OK)

Q(ON)

Q(ON)

Q(ONE)

Q(OPA)

Q(OPA_SCALE)

Q(OSError)

Q(OSError)

Q(OUTLINE_BLEND_MODE)

Q(OUTLINE_COLOR)

Q(OUTLINE_OPA)

Q(OUTLINE_PAD)

Q(OUTLINE_WIDTH)

Q(OUT_BOTTOM_LEFT)

Q(OUT_BOTTOM_MID)

Q(OUT_BOTTOM_RIGHT)

Q(OUT_LEFT_BOTTOM)

Q(OUT_LEFT_MID)

Q(OUT_LEFT_TOP)

Q(OUT_OF_MEM)

Q(OUT_RIGHT_BOTTOM)

Q(OUT_RIGHT_MID)

Q(OUT_RIGHT_TOP)

Q(OUT_TOP_LEFT)

Q(OUT_TOP_MID)

Q(OUT_TOP_RIGHT)

Q(OVER_BOTTOM)

Q(OVER_LEFT)

Q(OVER_RIGHT)

Q(OVER_TOP)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PAD_BOTTOM)

Q(PAD_INNER)

Q(PAD_LEFT)

Q(PAD_RIGHT)

Q(PAD_TOP)

Q(PAGE)

Q(PALETTE)

Q(PAR)

Q(PARENT)

Q(PARENT)

Q(PARENT_SIZE_CHG)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PART)

Q(PASTE)

Q(PATTERN_BLEND_MODE)

Q(PATTERN_IMAGE)

Q(PATTERN_OPA)

Q(PATTERN_RECOLOR)

Q(PATTERN_RECOLOR_OPA)

Q(PATTERN_REPEAT)

Q(PAUSE)

Q(PLACEHOLDER)

Q(PLAIN)

Q(PLAY)

Q(PLUS)

Q(POINTER)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(POS)

Q(POWER)

Q(PR)

Q(PRESSED)

Q(PRESSED)

Q(PRESSED)

Q(PRESSED)

Q(PRESSING)

Q(PRESSING)

Q(PRESS_LOST)

Q(PRESS_LOST)

Q(PRESS_LOST)

Q(PRETTY_BOTTOM)

Q(PRETTY_MID)

Q(PRETTY_TOP)

Q(PREV)

Q(PREV)

Q(PREV)

Q(PRIMARY_Y)

Q(PROTECT)

Q(PTR)

Q(PinBase)

Q(PinBase)

Q(RADIUS)

Q(RADIUS)

Q(RANGE)

Q(RAW)

Q(RAW_ALPHA)

Q(RAW_CHROMA_KEYED)

Q(RD)

Q(RECOLOR)

Q(RECT)

Q(REFRESH)

Q(REFRESH)

Q(REFR_EXT_DRAW_PAD)

Q(REL)

Q(RELEASED)

Q(RELEASED)

Q(RELEASED)

Q(RES)

Q(RESERVED_15)

Q(RESERVED_16)

Q(RESERVED_17)

Q(RESERVED_18)

Q(RESERVED_19)

Q(RESERVED_20)

Q(RESERVED_21)

Q(RESERVED_22)

Q(RESERVED_23)

Q(REVERSE)

Q(RGB)

Q(RGBA)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(RIGHT)

Q(ROLLER)

Q(ROW_BOTTOM)

Q(ROW_MID)

Q(ROW_TOP)

Q(RTL)

Q(RuntimeError)

Q(RuntimeError)

Q(SATURATION)

Q(SAVE)

Q(SCALE_BORDER_WIDTH)

Q(SCALE_END_BORDER_WIDTH)

Q(SCALE_END_COLOR)

Q(SCALE_END_LINE_WIDTH)

Q(SCALE_GRAD_COLOR)

Q(SCALE_WIDTH)

Q(SCR)

Q(SCROLLABLE)

Q(SCROLLABLE)

Q(SCROLLBAR)

Q(SCROLLBAR)

Q(SCROLLBAR)

Q(SCROLLBAR)

Q(SCROLLBAR)

Q(SCROLLBAR)

Q(SCROLLBAR_MODE)

Q(SCR_LOAD_ANIM)

Q(SDL)

Q(SDL)

Q(SD_CARD)

Q(SECONDARY_Y)

Q(SELECTED)

Q(SELECTED)

Q(SERIES)

Q(SERIES_BG)

Q(SETTINGS)

Q(SHADOW_BLEND_MODE)

Q(SHADOW_COLOR)

Q(SHADOW_OFS_X)

Q(SHADOW_OFS_Y)

Q(SHADOW_OPA)

Q(SHADOW_SPREAD)

Q(SHADOW_WIDTH)

Q(SHIFT)

Q(SHORT)

Q(SHORT_CLICKED)

Q(SHUFFLE)

Q(SIGNAL)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SIZE)

Q(SKIP_LAST_TICK)

Q(SLIDER)

Q(SMALL)

Q(SOCK_DGRAM)

Q(SOCK_RAW)

Q(SOCK_STREAM)

Q(SOL_SOCKET)

Q(SO_BROADCAST)

Q(SO_ERROR)

Q(SO_KEEPALIVE)

Q(SO_LINGER)

Q(SO_REUSEADDR)

Q(SPARSE_FULL)

Q(SPARSE_TINY)

Q(SPECIAL)

Q(SPINBOX)

Q(SPINBOX_BTN)

Q(SPINNER)

Q(SPINNING_ARC)

Q(SRC)

Q(SROLL)

Q(SROLL_CIRC)

Q(STATE)

Q(STATE)

Q(STOP)

Q(STRIKETHROUGH)

Q(STYLE)

Q(STYLE_CHG)

Q(SUBTRACTIVE)

Q(SWITCH)

Q(SYMBOL)

Q(SYMBOL)

Q(SYMMETRIC)

Q(SYMMETRICAL)

Q(SYMMETRICAL)

Q(Signal)

Q(Signal)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TABLE)

Q(TABVIEW)

Q(TABVIEW_PAGE)

Q(TAB_BG)

Q(TAB_BTN)

Q(TAB_POS)

Q(TASK_PRIO)

Q(TCSANOW)

Q(TEXTAREA)

Q(TEXT_BLEND_MODE)

Q(TEXT_COLOR)

Q(TEXT_DECOR)

Q(TEXT_DECOR)

Q(TEXT_FONT)

Q(TEXT_LETTER_SPACE)

Q(TEXT_LINE_SPACE)

Q(TEXT_LOWER)

Q(TEXT_OPA)

Q(TEXT_SEL_BG_COLOR)

Q(TEXT_SEL_COLOR)

Q(TEXT_UPPER)

Q(THEME)

Q(THEME_MATERIAL_FLAG)

Q(TIGHT)

Q(TILEVIEW)

Q(TOP)

Q(TOP)

Q(TOP)

Q(TOP)

Q(TOP)

Q(TOUT)

Q(TRANSFORM_ANGLE)

Q(TRANSFORM_HEIGHT)

Q(TRANSFORM_WIDTH)

Q(TRANSFORM_ZOOM)

Q(TRANSITION_DELAY)

Q(TRANSITION_PATH)

Q(TRANSITION_PROP_1)

Q(TRANSITION_PROP_2)

Q(TRANSITION_PROP_3)

Q(TRANSITION_PROP_4)

Q(TRANSITION_PROP_5)

Q(TRANSITION_PROP_6)

Q(TRANSITION_TIME)

Q(TRANSP)

Q(TRANSP)

Q(TRASH)

Q(TRUE_COLOR)

Q(TRUE_COLOR_ALPHA)

Q(TRUE_COLOR_CHROMA_KEYED)

Q(TXT_CMD_STATE)

Q(TXT_FLAG)

Q(TYPE)

Q(TYPE)

Q(TYPE)

Q(TYPE)

Q(TYPE)

Q(TYPE)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(TypeError)

Q(TypeError)

Q(UINT)

Q(UINT16)

Q(UINT32)

Q(UINT64)

Q(UINT8)

Q(ULONG)

Q(ULONGLONG)

Q(UNDERLINE)

Q(UNHIDE)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UNKNOWN)

Q(UP)

Q(UP)

Q(UP)

Q(UP)

Q(UPDATE_MODE)

Q(UPLOAD)

Q(USB)

Q(USER_ENCODED_0)

Q(USER_ENCODED_1)

Q(USER_ENCODED_2)

Q(USER_ENCODED_3)

Q(USER_ENCODED_4)

Q(USER_ENCODED_5)

Q(USER_ENCODED_6)

Q(USER_ENCODED_7)

Q(USHORT)

Q(UnicodeError)

Q(UnicodeError)

Q(VALUE)

Q(VALUE_ALIGN)

Q(VALUE_BLEND_MODE)

Q(VALUE_CHANGED)

Q(VALUE_COLOR)

Q(VALUE_FONT)

Q(VALUE_LETTER_SPACE)

Q(VALUE_LINE_SPACE)

Q(VALUE_OFS_X)

Q(VALUE_OFS_Y)

Q(VALUE_OPA)

Q(VALUE_STR)

Q(VARIABLE)

Q(VER)

Q(VER)

Q(VER)

Q(VIDEO)

Q(VOID)

Q(VOLUME_MAX)

Q(VOLUME_MID)

Q(ValueError)

Q(ValueError)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WAIT)

Q(WARNING)

Q(WEAK)

Q(WIFI)

Q(WIN)

Q(WIN_BTN)

Q(WR)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0)

Q(_0x0a_)

Q(_10)

Q(_100)

Q(_20)

Q(_30)

Q(_40)

Q(_50)

Q(_60)

Q(_70)

Q(_80)

Q(_90)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__cast__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dereference__)

Q(__dict__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__floordiv__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__radd__)

Q(__rand__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rfloordiv__)

Q(__rlshift__)

Q(__rmatmul__)

Q(__rmod__)

Q(__rmul__)

Q(__ror__)

Q(__rpow__)

Q(__rrshift__)

Q(__rshift__)

Q(__rsub__)

Q(__rtruediv__)

Q(__rxor__)

Q(__set__)

Q(__set__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__truediv__)

Q(__xor__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_del)

Q(_del)

Q(_lt_dictcomp_gt_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_stdin_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(_thread)

Q(_thread)

Q(a2b_base64)

Q(abs)

Q(abs_tol)

Q(accept)

Q(acos)

Q(acosh)

Q(acquire)

Q(act_obj)

Q(act_obj)

Q(act_point)

Q(act_point)

Q(act_scr)

Q(act_scr)

Q(act_time)

Q(act_time)

Q(activate)

Q(add)

Q(add_btn)

Q(add_btn)

Q(add_btn_left)

Q(add_btn_right)

Q(add_btns)

Q(add_char)

Q(add_cursor)

Q(add_element)

Q(add_itext)

Q(add_mask)

Q(add_obj)

Q(add_option)

Q(add_protect)

Q(add_series)

Q(add_state)

Q(add_style)

Q(add_tab)

Q(add_text)

Q(add_text)

Q(addr)

Q(addressof)

Q(adv_w)

Q(adv_w)

Q(aes)

Q(aes)

Q(align)

Q(align_mid)

Q(align_mid_x)

Q(align_mid_y)

Q(align_origo)

Q(align_origo_x)

Q(align_origo_y)

Q(align_x)

Q(align_y)

Q(all)

Q(allocate_ext_attr)

Q(allocate_lock)

Q(always_zero)

Q(always_zero)

Q(angle)

Q(angle)

Q(angle_init)

Q(anim_cb)

Q(anim_count_running)

Q(anim_del)

Q(anim_get)

Q(anim_path_def)

Q(anim_path_t)

Q(anim_refr_now)

Q(anim_speed_to_time)

Q(anim_t)

Q(antialias)

Q(antialias)

Q(antialiasing)

Q(antialiasing)

Q(any)

Q(append)

Q(append)

Q(append)

Q(apply_cb)

Q(apply_cb)

Q(apply_xcb)

Q(apply_xcb)

Q(arc)

Q(arc)

Q(area)

Q(area)

Q(area_is_visible)

Q(area_t)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(as_bytearray)

Q(asin)

Q(asinh)

Q(assign_screen)

Q(async_call)

Q(async_xcb)

Q(async_xcb)

Q(atan)

Q(atan2)

Q(atanh)

Q(atexit)

Q(auto_refresh)

Q(axes)

Q(axes)

Q(b2a_base64)

Q(background_b)

Q(background_b)

Q(background_defined)

Q(background_defined)

Q(background_g)

Q(background_g)

Q(background_r)

Q(background_r)

Q(bar)

Q(bar)

Q(base)

Q(base)

Q(base_line)

Q(base_line)

Q(bg_blend_mode)

Q(bg_blend_mode)

Q(bg_color)

Q(bg_color)

Q(bg_color)

Q(bg_color)

Q(bg_grad_color)

Q(bg_grad_color)

Q(bg_grad_color_stop)

Q(bg_grad_color_stop)

Q(bg_grad_dir)

Q(bg_grad_dir)

Q(bg_img)

Q(bg_img)

Q(bg_main_color_stop)

Q(bg_main_color_stop)

Q(bg_opa)

Q(bg_opa)

Q(bg_opa)

Q(bg_opa)

Q(bg_opa_cover)

Q(bg_opa_cover)

Q(bg_opa_transp)

Q(bg_opa_transp)

Q(bidi_dir)

Q(bidi_dir)

Q(bin)

Q(bind)

Q(bitdepth)

Q(bitdepth)

Q(blend_mode)

Q(blend_mode)

Q(blend_mode)

Q(blend_mode)

Q(blend_mode)

Q(blend_mode)

Q(blend_mode_all_normal)

Q(blend_mode_all_normal)

Q(blue)

Q(blue)

Q(blur_hor)

Q(blur_ver)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(border_blend_mode)

Q(border_blend_mode)

Q(border_color)

Q(border_color)

Q(border_opa)

Q(border_opa)

Q(border_post)

Q(border_post)

Q(border_post_off)

Q(border_post_off)

Q(border_side)

Q(border_side)

Q(border_side_full)

Q(border_side_full)

Q(border_width)

Q(border_width)

Q(border_width_zero)

Q(border_width_zero)

Q(bounce)

Q(bound_method)

Q(box_h)

Q(box_h)

Q(box_w)

Q(box_w)

Q(bpp)

Q(bpp)

Q(btn)

Q(btn)

Q(btn_points)

Q(btn_points)

Q(btnmatrix)

Q(btnmatrix)

Q(btree)

Q(btree)

Q(btree)

Q(buf1)

Q(buf1)

Q(buf2)

Q(buf2)

Q(buf_act)

Q(buf_act)

Q(buf_alloc)

Q(buf_free)

Q(buf_free)

Q(buf_get_img_size)

Q(buf_get_px_alpha)

Q(buf_get_px_alpha)

Q(buf_get_px_color)

Q(buf_get_px_color)

Q(buf_set_palette)

Q(buf_set_palette)

Q(buf_set_px_alpha)

Q(buf_set_px_alpha)

Q(buf_set_px_color)

Q(buf_set_px_color)

Q(buffer)

Q(buffer)

Q(buffering)

Q(built_in_close)

Q(built_in_info)

Q(built_in_open)

Q(built_in_read_line)

Q(builtins)

Q(builtins)

Q(bytearray)

Q(bytearray)

Q(bytearray_at)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_at)

Q(cache_invalidate_src)

Q(cache_set_size)

Q(cachesize)

Q(calcsize)

Q(calendar)

Q(calendar)

Q(calendar_date_t)

Q(callable)

Q(callback)

Q(callback)

Q(can_have_alpha)

Q(canvas)

Q(canvas)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cast_instance)

Q(cb)

Q(cb)

Q(cb)

Q(cb)

Q(ceil)

Q(center)

Q(center)

Q(cert)

Q(cf)

Q(cf)

Q(cf_get_px_size)

Q(cf_has_alpha)

Q(cf_is_chroma_keyed)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(cfg)

Q(ch)

Q(ch)

Q(char_val)

Q(char_val)

Q(char_val)

Q(char_val)

Q(chart)

Q(chart)

Q(chart_cursor_t)

Q(chart_series_t)

Q(checkbox)

Q(checkbox)

Q(chr)

Q(chrm_blue_x)

Q(chrm_blue_x)

Q(chrm_blue_y)

Q(chrm_blue_y)

Q(chrm_defined)

Q(chrm_defined)

Q(chrm_green_x)

Q(chrm_green_x)

Q(chrm_green_y)

Q(chrm_green_y)

Q(chrm_red_x)

Q(chrm_red_x)

Q(chrm_red_y)

Q(chrm_red_y)

Q(chrm_white_x)

Q(chrm_white_x)

Q(chrm_white_y)

Q(chrm_white_y)

Q(chunk_ancillary)

Q(chunk_append)

Q(chunk_check_crc)

Q(chunk_create)

Q(chunk_data)

Q(chunk_data_const)

Q(chunk_find)

Q(chunk_find_const)

Q(chunk_generate_crc)

Q(chunk_length)

Q(chunk_next)

Q(chunk_next_const)

Q(chunk_private)

Q(chunk_safetocopy)

Q(chunk_type)

Q(chunk_type_equals)

Q(classmethod)

Q(classmethod)

Q(clean)

Q(clean)

Q(clean)

Q(clean)

Q(clean_dcache)

Q(clean_dcache_cb)

Q(clean_dcache_cb)

Q(clean_style_list)

Q(clean_tab)

Q(clear)

Q(clear)

Q(clear)

Q(clear_btn_ctrl)

Q(clear_btn_ctrl_all)

Q(clear_icc)

Q(clear_itext)

Q(clear_options)

Q(clear_protect)

Q(clear_selection)

Q(clear_serie)

Q(clear_series)

Q(clear_state)

Q(clear_text)

Q(click_focus)

Q(click_focus)

Q(clip_corner_off)

Q(clip_corner_off)

Q(clock)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close_cb)

Q(close_cb)

Q(close_cb)

Q(close_cb)

Q(close_event_cb)

Q(closure)

Q(cmath)

Q(cmath)

Q(code)

Q(collect)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color)

Q(color16_ch_t)

Q(color16_t)

Q(color_brightness)

Q(color_chroma_key)

Q(color_chroma_key)

Q(color_convert)

Q(color_convert)

Q(color_darken)

Q(color_fill)

Q(color_hex)

Q(color_hex3)

Q(color_hsv_t)

Q(color_hsv_to_rgb)

Q(color_lighten)

Q(color_make)

Q(color_mix)

Q(color_mix_premult)

Q(color_mix_with_alpha)

Q(color_mode_cleanup)

Q(color_mode_copy)

Q(color_mode_init)

Q(color_mode_make)

Q(color_premult)

Q(color_primary)

Q(color_primary)

Q(color_rgb_to_hsv)

Q(color_secondary)

Q(color_secondary)

Q(color_t)

Q(color_to1)

Q(color_to16)

Q(color_to32)

Q(color_to8)

Q(color_to_hsv)

Q(colortype)

Q(colortype)

Q(compile)

Q(compile)

Q(complex)

Q(complex)

Q(compression_method)

Q(compression_method)

Q(connect)

Q(const)

Q(const)

Q(cont)

Q(cont)

Q(convert)

Q(coord_y)

Q(coord_y)

Q(coords)

Q(coords)

Q(coords)

Q(coords)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copy_buf)

Q(copysign)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count_children)

Q(count_children_recursive)

Q(cpicker)

Q(cpicker)

Q(crc32)

Q(crc32)

Q(current)

Q(current)

Q(cursor)

Q(cursor)

Q(cursor_down)

Q(cursor_left)

Q(cursor_right)

Q(cursor_up)

Q(custom_context)

Q(custom_context)

Q(custom_del)

Q(custom_inflate)

Q(custom_inflate)

Q(custom_zlib)

Q(custom_zlib)

Q(cut_text)

Q(dash_gap)

Q(dash_gap)

Q(dash_width)

Q(dash_width)

Q(data)

Q(data)

Q(data_size)

Q(data_size)

Q(day)

Q(day)

Q(day)

Q(day)

Q(debug_check_mem_integrity)

Q(debug_check_null)

Q(debug_check_obj_type)

Q(debug_check_obj_valid)

Q(debug_check_str)

Q(debug_check_style)

Q(debug_check_style_list)

Q(debug_log_error)

Q(decode)

Q(decode)

Q(decode)

Q(decode24)

Q(decode32)

Q(decode_memory)

Q(decoder)

Q(decoder)

Q(decoder)

Q(decoder)

Q(decoder_built_in_close)

Q(decoder_built_in_info)

Q(decoder_built_in_open)

Q(decoder_built_in_read_line)

Q(decoder_close)

Q(decoder_create)

Q(decoder_delete)

Q(decoder_get_info)

Q(decoder_open)

Q(decoder_read_line)

Q(decoder_set_close_cb)

Q(decoder_set_info_cb)

Q(decoder_set_open_cb)

Q(decoder_set_read_line_cb)

Q(decoder_settings_init)

Q(decompress)

Q(decompress_settings_init)

Q(decor)

Q(decor)

Q(decrement)

Q(decrypt)

Q(def_event_cb)

Q(default)

Q(default_decompress_settings)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(del_anim_ready_cb)

Q(del_async)

Q(del_char)

Q(del_char_forward)

Q(del_prev)

Q(del_prev)

Q(delattr)

Q(delete)

Q(delete)

Q(deleter)

Q(delta_deg)

Q(delta_deg)

Q(deque)

Q(deque)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(digest)

Q(digest)

Q(dir)

Q(dir_close_cb)

Q(dir_close_cb)

Q(dir_d)

Q(dir_d)

Q(dir_open_cb)

Q(dir_open_cb)

Q(dir_read_cb)

Q(dir_read_cb)

Q(disable)

Q(disabled)

Q(disabled)

Q(discard)

Q(disp)

Q(disp)

Q(disp_buf_t)

Q(disp_drv_t)

Q(disp_get_default)

Q(disp_load_scr)

Q(disp_t)

Q(divmod)

Q(do_handshake)

Q(doc)

Q(down)

Q(dpi)

Q(dpi)

Q(dpx)

Q(drag_dir)

Q(drag_dir)

Q(drag_in_prog)

Q(drag_in_prog)

Q(drag_limit)

Q(drag_limit)

Q(drag_limit_out)

Q(drag_limit_out)

Q(drag_sum)

Q(drag_sum)

Q(drag_throw)

Q(drag_throw)

Q(drag_throw_vect)

Q(drag_throw_vect)

Q(draw_arc)

Q(draw_arc)

Q(draw_img)

Q(draw_img)

Q(draw_img_dsc_t)

Q(draw_label)

Q(draw_label_dsc_t)

Q(draw_label_hint_t)

Q(draw_line)

Q(draw_line)

Q(draw_line_dsc_t)

Q(draw_mask_add)

Q(draw_mask_angle_param_cfg_t)

Q(draw_mask_angle_param_t)

Q(draw_mask_apply)

Q(draw_mask_common_dsc_t)

Q(draw_mask_fade_param_cfg_t)

Q(draw_mask_fade_param_t)

Q(draw_mask_get_cnt)

Q(draw_mask_line_param_cfg_t)

Q(draw_mask_line_param_t)

Q(draw_mask_map_param_cfg_t)

Q(draw_mask_map_param_t)

Q(draw_mask_radius_param_cfg_t)

Q(draw_mask_radius_param_t)

Q(draw_mask_remove_custom)

Q(draw_mask_remove_id)

Q(draw_polygon)

Q(draw_polygon)

Q(draw_px)

Q(draw_rect)

Q(draw_rect)

Q(draw_rect_dsc_t)

Q(draw_scale)

Q(draw_text)

Q(draw_triangle)

Q(driver)

Q(driver)

Q(driver)

Q(driver)

Q(dropdown)

Q(dropdown)

Q(drv)

Q(drv)

Q(drv)

Q(drv)

Q(drv_update)

Q(drv_update)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dsc)

Q(dump)

Q(dumps)

Q(e)

Q(e)

Q(early_apply)

Q(early_apply)

Q(ease_in)

Q(ease_in_out)

Q(ease_out)

Q(editing)

Q(editing)

Q(enable)

Q(enable)

Q(encode)

Q(encoding)

Q(encrypt)

Q(end)

Q(end)

Q(end)

Q(end_angle)

Q(end_angle)

Q(end_line)

Q(end_line)

Q(endswith)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(erf)

Q(erfc)

Q(errno)

Q(errno)

Q(error)

Q(error)

Q(error_msg)

Q(error_msg)

Q(error_text)

Q(errorcode)

Q(eval)

Q(eval)

Q(event_get_data)

Q(event_send)

Q(event_send_func)

Q(event_send_refresh)

Q(event_send_refresh_recursive)

Q(exc_info)

Q(exec)

Q(exec)

Q(exec_cb)

Q(exec_cb)

Q(exit)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(ext_buf_assigned)

Q(ext_buf_assigned)

Q(extend)

Q(extend)

Q(f)

Q(f)

Q(fabs)

Q(fade_in)

Q(fade_out)

Q(fb)

Q(fb)

Q(fbdev_flush)

Q(feedback_cb)

Q(feedback_cb)

Q(ffi)

Q(ffi)

Q(fficallback)

Q(ffifunc)

Q(ffimod)

Q(ffivar)

Q(file)

Q(file)

Q(file)

Q(file_d)

Q(file_d)

Q(file_size)

Q(file_size)

Q(fileno)

Q(fileno)

Q(fill_bg)

Q(filter)

Q(filter)

Q(filter_method)

Q(filter_method)

Q(find)

Q(find)

Q(finish_drag)

Q(finish_transitions)

Q(flag)

Q(flag)

Q(flags)

Q(flags)

Q(flags)

Q(flat)

Q(flat)

Q(float)

Q(float)

Q(floor)

Q(flush)

Q(flush)

Q(flush)

Q(flush)

Q(flush_cb)

Q(flush_cb)

Q(flush_is_last)

Q(flush_ready)

Q(flushing)

Q(flushing)

Q(flushing_last)

Q(flushing_last)

Q(fmod)

Q(focus)

Q(focus)

Q(focus)

Q(focus_btn)

Q(focus_cb)

Q(focus_cb)

Q(focus_freeze)

Q(focus_next)

Q(focus_prev)

Q(font)

Q(font)

Q(font_glyph_dsc_t)

Q(font_load)

Q(font_montserrat_14)

Q(font_normal)

Q(font_normal)

Q(font_small)

Q(font_small)

Q(font_subtitle)

Q(font_subtitle)

Q(font_t)

Q(font_title)

Q(font_title)

Q(format)

Q(format)

Q(frag_pct)

Q(frag_pct)

Q(free)

Q(free_biggest_size)

Q(free_biggest_size)

Q(free_cnt)

Q(free_cnt)

Q(free_size)

Q(free_size)

Q(free_space_cb)

Q(free_space_cb)

Q(frexp)

Q(from_bytes)

Q(fromkeys)

Q(frozen)

Q(frozen)

Q(frozenset)

Q(frozenset)

Q(fs_dir_t)

Q(fs_drv_t)

Q(fs_file_t)

Q(fs_free_space)

Q(fs_get_drv)

Q(fs_get_ext)

Q(fs_get_last)

Q(fs_get_letters)

Q(fs_is_ready)

Q(fs_remove)

Q(fs_rename)

Q(fs_up)

Q(full)

Q(full)

Q(func)

Q(func)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gama_defined)

Q(gama_defined)

Q(gama_gamma)

Q(gama_gamma)

Q(gamma)

Q(gauge)

Q(gauge)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(gesture_dir)

Q(gesture_dir)

Q(gesture_limit)

Q(gesture_limit)

Q(gesture_min_velocity)

Q(gesture_min_velocity)

Q(gesture_sent)

Q(gesture_sent)

Q(gesture_sum)

Q(gesture_sum)

Q(get)

Q(get)

Q(get)

Q(get_accepted_chars)

Q(get_active_btn)

Q(get_active_btn)

Q(get_active_btn_text)

Q(get_active_btn_text)

Q(get_adjustable)

Q(get_adv_hittest)

Q(get_align)

Q(get_align)

Q(get_align)

Q(get_angle)

Q(get_angle_end)

Q(get_angle_offset)

Q(get_angle_offset)

Q(get_angle_start)

Q(get_anim_speed)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_anim_time)

Q(get_antialias)

Q(get_antialiasing)

Q(get_arc_length)

Q(get_auto_fit)

Q(get_auto_realign)

Q(get_auto_size)

Q(get_auto_size)

Q(get_base_dir)

Q(get_bg_angle_end)

Q(get_bg_angle_start)

Q(get_bitmap_fmt_txt)

Q(get_bpp)

Q(get_bright)

Q(get_btn_ctrl)

Q(get_btn_img)

Q(get_btn_index)

Q(get_btn_label)

Q(get_btn_selected)

Q(get_btn_text)

Q(get_btn_text)

Q(get_btn_width)

Q(get_btnmatrix)

Q(get_btns_pos)

Q(get_buf)

Q(get_cell_align)

Q(get_cell_crop)

Q(get_cell_merge_right)

Q(get_cell_type)

Q(get_cell_value)

Q(get_channels)

Q(get_checkable)

Q(get_checkable)

Q(get_child)

Q(get_child_back)

Q(get_click)

Q(get_click_focus)

Q(get_col_cnt)

Q(get_col_width)

Q(get_color)

Q(get_color_mode)

Q(get_color_mode_fixed)

Q(get_content)

Q(get_coords)

Q(get_critical_value)

Q(get_cursor_blink_time)

Q(get_cursor_click_pos)

Q(get_cursor_hidden)

Q(get_cursor_manage)

Q(get_cursor_point)

Q(get_cursor_pos)

Q(get_day_names)

Q(get_delay)

Q(get_design_cb)

Q(get_dir)

Q(get_dir)

Q(get_disp)

Q(get_dpi)

Q(get_drag)

Q(get_drag)

Q(get_drag_dir)

Q(get_drag_parent)

Q(get_drag_throw)

Q(get_draw_arrow)

Q(get_draw_rect_ext_pad_size)

Q(get_edge_flash)

Q(get_edge_flash)

Q(get_edge_flash)

Q(get_edge_flash)

Q(get_editing)

Q(get_event_cb)

Q(get_ext_attr)

Q(get_ext_click_pad_bottom)

Q(get_ext_click_pad_left)

Q(get_ext_click_pad_right)

Q(get_ext_click_pad_top)

Q(get_ext_draw_pad)

Q(get_file_name)

Q(get_fit_bottom)

Q(get_fit_bottom)

Q(get_fit_left)

Q(get_fit_left)

Q(get_fit_right)

Q(get_fit_right)

Q(get_fit_top)

Q(get_fit_top)

Q(get_focus_cb)

Q(get_focus_parent)

Q(get_focused)

Q(get_focused_btn)

Q(get_focused_obj)

Q(get_from_btn)

Q(get_gesture_dir)

Q(get_gesture_parent)

Q(get_glyph_bitmap)

Q(get_glyph_bitmap)

Q(get_glyph_bitmap)

Q(get_glyph_dsc)

Q(get_glyph_dsc)

Q(get_glyph_dsc)

Q(get_glyph_dsc_fmt_txt)

Q(get_glyph_width)

Q(get_group)

Q(get_header_height)

Q(get_height)

Q(get_height)

Q(get_height_fit)

Q(get_height_fit)

Q(get_height_grid)

Q(get_height_grid)

Q(get_height_margin)

Q(get_hidden)

Q(get_highlighted_dates)

Q(get_highlighted_dates_num)

Q(get_hor_res)

Q(get_hsv)

Q(get_hue)

Q(get_ident)

Q(get_img)

Q(get_inactive_time)

Q(get_inner_coords)

Q(get_inv_buf_size)

Q(get_key)

Q(get_knob_colored)

Q(get_label)

Q(get_label_count)

Q(get_layer_sys)

Q(get_layer_top)

Q(get_layout)

Q(get_layout)

Q(get_layout)

Q(get_layout)

Q(get_left_value)

Q(get_letter_on)

Q(get_letter_pos)

Q(get_line_count)

Q(get_line_count)

Q(get_line_height)

Q(get_local_style)

Q(get_local_style)

Q(get_long_mode)

Q(get_map_array)

Q(get_map_array)

Q(get_max_height)

Q(get_max_length)

Q(get_max_value)

Q(get_max_value)

Q(get_max_value)

Q(get_max_value)

Q(get_max_value)

Q(get_min_value)

Q(get_min_value)

Q(get_min_value)

Q(get_min_value)

Q(get_min_value)

Q(get_mirror)

Q(get_mode)

Q(get_month_names)

Q(get_nearest_index_from_coord)

Q(get_needle_count)

Q(get_needle_img)

Q(get_needle_img_pivot_x)

Q(get_needle_img_pivot_y)

Q(get_next)

Q(get_next)

Q(get_next)

Q(get_next_btn)

Q(get_offset_x)

Q(get_offset_y)

Q(get_one_check)

Q(get_one_line)

Q(get_option_cnt)

Q(get_option_cnt)

Q(get_options)

Q(get_options)

Q(get_parent)

Q(get_parent_event)

Q(get_pivot)

Q(get_placeholder_text)

Q(get_point)

Q(get_point_count)

Q(get_point_id)

Q(get_pressed_cell)

Q(get_pressed_date)

Q(get_prev_btn)

Q(get_protect)

Q(get_pwd_mode)

Q(get_pwd_show_time)

Q(get_px)

Q(get_raw_size)

Q(get_recolor)

Q(get_recolor)

Q(get_recolor)

Q(get_rollover)

Q(get_row_cnt)

Q(get_saturation)

Q(get_sb_mode)

Q(get_scale_angle)

Q(get_scale_angle)

Q(get_scr_act)

Q(get_scr_prev)

Q(get_screen)

Q(get_scrl)

Q(get_scrl_fit_bottom)

Q(get_scrl_fit_left)

Q(get_scrl_fit_right)

Q(get_scrl_fit_top)

Q(get_scrl_height)

Q(get_scrl_layout)

Q(get_scrl_width)

Q(get_scrlbar_mode)

Q(get_scroll_propagation)

Q(get_scroll_propagation)

Q(get_scroll_propagation)

Q(get_scrollable)

Q(get_scrollbar_mode)

Q(get_scrollbar_mode)

Q(get_scrollbar_mode)

Q(get_selected)

Q(get_selected)

Q(get_selected_str)

Q(get_selected_str)

Q(get_series_area)

Q(get_series_axis)

Q(get_show_selected)

Q(get_showed_date)

Q(get_signal_cb)

Q(get_size)

Q(get_size)

Q(get_size_category)

Q(get_spin_time)

Q(get_src)

Q(get_src)

Q(get_start_value)

Q(get_state)

Q(get_state)

Q(get_state)

Q(get_state)

Q(get_state)

Q(get_style)

Q(get_style)

Q(get_style_bg_blend_mode)

Q(get_style_bg_color)

Q(get_style_bg_grad_color)

Q(get_style_bg_grad_dir)

Q(get_style_bg_grad_stop)

Q(get_style_bg_main_stop)

Q(get_style_bg_opa)

Q(get_style_border_blend_mode)

Q(get_style_border_color)

Q(get_style_border_opa)

Q(get_style_border_post)

Q(get_style_border_side)

Q(get_style_border_width)

Q(get_style_clip_corner)

Q(get_style_image_blend_mode)

Q(get_style_image_opa)

Q(get_style_image_recolor)

Q(get_style_image_recolor_opa)

Q(get_style_line_blend_mode)

Q(get_style_line_color)

Q(get_style_line_dash_gap)

Q(get_style_line_dash_width)

Q(get_style_line_opa)

Q(get_style_line_rounded)

Q(get_style_line_width)

Q(get_style_list)

Q(get_style_margin_bottom)

Q(get_style_margin_left)

Q(get_style_margin_right)

Q(get_style_margin_top)

Q(get_style_opa_scale)

Q(get_style_outline_blend_mode)

Q(get_style_outline_color)

Q(get_style_outline_opa)

Q(get_style_outline_pad)

Q(get_style_outline_width)

Q(get_style_pad_bottom)

Q(get_style_pad_inner)

Q(get_style_pad_left)

Q(get_style_pad_right)

Q(get_style_pad_top)

Q(get_style_pattern_blend_mode)

Q(get_style_pattern_image)

Q(get_style_pattern_opa)

Q(get_style_pattern_recolor)

Q(get_style_pattern_recolor_opa)

Q(get_style_pattern_repeat)

Q(get_style_radius)

Q(get_style_scale_border_width)

Q(get_style_scale_end_border_width)

Q(get_style_scale_end_color)

Q(get_style_scale_end_line_width)

Q(get_style_scale_grad_color)

Q(get_style_scale_width)

Q(get_style_shadow_blend_mode)

Q(get_style_shadow_color)

Q(get_style_shadow_ofs_x)

Q(get_style_shadow_ofs_y)

Q(get_style_shadow_opa)

Q(get_style_shadow_spread)

Q(get_style_shadow_width)

Q(get_style_size)

Q(get_style_text_blend_mode)

Q(get_style_text_color)

Q(get_style_text_decor)

Q(get_style_text_font)

Q(get_style_text_letter_space)

Q(get_style_text_line_space)

Q(get_style_text_opa)

Q(get_style_text_sel_bg_color)

Q(get_style_text_sel_color)

Q(get_style_transform_angle)

Q(get_style_transform_height)

Q(get_style_transform_width)

Q(get_style_transform_zoom)

Q(get_style_transition_delay)

Q(get_style_transition_path)

Q(get_style_transition_prop_1)

Q(get_style_transition_prop_2)

Q(get_style_transition_prop_3)

Q(get_style_transition_prop_4)

Q(get_style_transition_prop_5)

Q(get_style_transition_prop_6)

Q(get_style_transition_time)

Q(get_style_value_align)

Q(get_style_value_blend_mode)

Q(get_style_value_color)

Q(get_style_value_font)

Q(get_style_value_letter_space)

Q(get_style_value_line_space)

Q(get_style_value_ofs_x)

Q(get_style_value_ofs_y)

Q(get_style_value_opa)

Q(get_style_value_str)

Q(get_sym)

Q(get_sym)

Q(get_symbol)

Q(get_tab)

Q(get_tab_act)

Q(get_tab_count)

Q(get_text)

Q(get_text)

Q(get_text)

Q(get_text)

Q(get_text)

Q(get_text_sel_en)

Q(get_text_sel_end)

Q(get_text_sel_start)

Q(get_textarea)

Q(get_tile_act)

Q(get_title)

Q(get_today_date)

Q(get_top)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_type)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_value)

Q(get_vect)

Q(get_ver_res)

Q(get_width)

Q(get_width)

Q(get_width)

Q(get_width_fit)

Q(get_width_fit)

Q(get_width_grid)

Q(get_width_grid)

Q(get_width_margin)

Q(get_wrap)

Q(get_x)

Q(get_x_from_index)

Q(get_x_start_point)

Q(get_x_start_point)

Q(get_y)

Q(get_y_from_index)

Q(get_y_invert)

Q(get_zoom)

Q(getaddrinfo)

Q(getattr)

Q(getenv)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(globals)

Q(glue_obj)

Q(gmtime)

Q(gpu_blend_cb)

Q(gpu_blend_cb)

Q(gpu_fill_cb)

Q(gpu_fill_cb)

Q(gpu_wait_cb)

Q(gpu_wait_cb)

Q(green)

Q(green)

Q(group)

Q(group)

Q(group)

Q(group_create)

Q(group_focus_obj)

Q(group_remove_obj)

Q(group_t)

Q(h)

Q(h)

Q(h)

Q(h)

Q(h)

Q(handle_get_type_signal)

Q(handle_get_type_signal)

Q(has_local)

Q(has_local)

Q(has_palette_alpha)

Q(has_run)

Q(has_run)

Q(has_trans)

Q(has_trans)

Q(hasattr)

Q(hash)

Q(head)

Q(head)

Q(header)

Q(header)

Q(header)

Q(header)

Q(heap_lock)

Q(heap_unlock)

Q(heapify)

Q(heappop)

Q(heappush)

Q(hex)

Q(hexlify)

Q(hittest)

Q(hor_res)

Q(hor_res)

Q(hour)

Q(hour)

Q(i)

Q(i)

Q(iccp_defined)

Q(iccp_defined)

Q(iccp_name)

Q(iccp_name)

Q(iccp_profile)

Q(iccp_profile)

Q(iccp_profile_size)

Q(iccp_profile_size)

Q(id)

Q(idle)

Q(ignore_adler32)

Q(ignore_adler32)

Q(ignore_cache)

Q(ignore_cache)

Q(ignore_crc)

Q(ignore_crc)

Q(ignore_critical)

Q(ignore_critical)

Q(ignore_end)

Q(ignore_end)

Q(ignore_nlen)

Q(ignore_nlen)

Q(ignore_trans)

Q(ignore_trans)

Q(ilistdir)

Q(imag)

Q(img)

Q(img)

Q(img_data)

Q(img_data)

Q(img_decoder_dsc_t)

Q(img_decoder_t)

Q(img_dsc_t)

Q(img_header_t)

Q(img_recolor_opa_transp)

Q(img_recolor_opa_transp)

Q(imgbtn)

Q(imgbtn)

Q(implementation)

Q(increment)

Q(indev)

Q(indev)

Q(indev)

Q(indev_drv_t)

Q(indev_get_act)

Q(indev_get_obj_act)

Q(indev_get_read_task)

Q(indev_proc_t)

Q(indev_proc_types_keypad_t)

Q(indev_proc_types_pointer_t)

Q(indev_proc_types_t)

Q(indev_read)

Q(indev_search_obj)

Q(indev_t)

Q(index)

Q(index)

Q(index)

Q(index)

Q(indices)

Q(inet_ntop)

Q(inet_pton)

Q(inflate)

Q(info_cb)

Q(info_cb)

Q(info_cleanup)

Q(info_copy)

Q(info_init)

Q(info_png)

Q(info_png)

Q(info_raw)

Q(info_raw)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init_draw_img_dsc)

Q(init_draw_label_dsc)

Q(init_draw_line_dsc)

Q(init_draw_rect_dsc)

Q(init_points)

Q(input)

Q(ins_text)

Q(insert)

Q(inspect)

Q(inspect_chunk)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int_val)

Q(int_val)

Q(int_val)

Q(int_val)

Q(interlace_method)

Q(interlace_method)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(inv)

Q(inv)

Q(inv_area_joined)

Q(inv_area_joined)

Q(inv_areas)

Q(inv_areas)

Q(inv_p)

Q(inv_p)

Q(invalidate)

Q(invalidate_area)

Q(invert)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(is_alpha_type)

Q(is_char_under_pos)

Q(is_checked)

Q(is_double_buf)

Q(is_dragged)

Q(is_dragged)

Q(is_dragging)

Q(is_focused)

Q(is_greyscale_type)

Q(is_inactive)

Q(is_palette_type)

Q(is_point_on_coords)

Q(is_protected)

Q(is_true_double_buf)

Q(is_visible)

Q(isalpha)

Q(isalpha)

Q(isclose)

Q(isdigit)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(islower)

Q(isnan)

Q(isspace)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(isupper)

Q(items)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(itext_keys)

Q(itext_keys)

Q(itext_langtags)

Q(itext_langtags)

Q(itext_num)

Q(itext_num)

Q(itext_strings)

Q(itext_strings)

Q(itext_transkeys)

Q(itext_transkeys)

Q(join)

Q(join)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(key)

Q(key_b)

Q(key_b)

Q(key_defined)

Q(key_defined)

Q(key_g)

Q(key_g)

Q(key_r)

Q(key_r)

Q(keyboard)

Q(keyboard)

Q(keypad)

Q(keypad)

Q(keys)

Q(keys)

Q(keys)

Q(label)

Q(label)

Q(last_activity_time)

Q(last_activity_time)

Q(last_area)

Q(last_area)

Q(last_key)

Q(last_key)

Q(last_obj)

Q(last_obj)

Q(last_part)

Q(last_part)

Q(last_point)

Q(last_point)

Q(last_pressed)

Q(last_pressed)

Q(last_run)

Q(last_run)

Q(last_state)

Q(last_state)

Q(layer_sys)

Q(layer_top)

Q(ldexp)

Q(led)

Q(led)

Q(len)

Q(letter)

Q(letter)

Q(letter_space)

Q(letter_space)

Q(lgamma)

Q(line)

Q(line)

Q(line_height)

Q(line_height)

Q(line_space)

Q(line_space)

Q(line_start)

Q(line_start)

Q(linear)

Q(linemeter)

Q(linemeter)

Q(list)

Q(list)

Q(list)

Q(list)

Q(listen)

Q(little)

Q(little)

Q(little)

Q(little)

Q(ll_t)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(lock)

Q(locked)

Q(lodepng)

Q(lodepng)

Q(log)

Q(log)

Q(log10)

Q(log10)

Q(log2)

Q(long_pr_sent)

Q(long_pr_sent)

Q(long_press_rep_time)

Q(long_press_rep_time)

Q(long_press_time)

Q(long_press_time)

Q(longpr_rep_timestamp)

Q(longpr_rep_timestamp)

Q(lower)

Q(lower)

Q(lstrip)

Q(lstrip)

Q(lv_anim_path_t)

Q(lv_anim_path_t_cb)

Q(lv_anim_path_t_cb)

Q(lv_anim_path_t_cb)

Q(lv_anim_t)

Q(lv_anim_t_exec_cb)

Q(lv_anim_t_ready_cb)

Q(lv_anim_t_start_cb)

Q(lv_area_t)

Q(lv_calendar_date_t)

Q(lv_chart_cursor_t)

Q(lv_chart_series_t)

Q(lv_color16_ch_t)

Q(lv_color16_t)

Q(lv_color_hsv_t)

Q(lv_disp_buf_t)

Q(lv_disp_drv_t)

Q(lv_disp_drv_t_clean_dcache_cb)

Q(lv_disp_drv_t_flush_cb)

Q(lv_disp_drv_t_gpu_blend_cb)

Q(lv_disp_drv_t_gpu_fill_cb)

Q(lv_disp_drv_t_gpu_wait_cb)

Q(lv_disp_drv_t_monitor_cb)

Q(lv_disp_drv_t_rounder_cb)

Q(lv_disp_drv_t_set_px_cb)

Q(lv_disp_drv_t_wait_cb)

Q(lv_disp_t)

Q(lv_draw_img_dsc_t)

Q(lv_draw_label_dsc_t)

Q(lv_draw_label_hint_t)

Q(lv_draw_line_dsc_t)

Q(lv_draw_mask_angle_param_cfg_t)

Q(lv_draw_mask_angle_param_t)

Q(lv_draw_mask_common_dsc_t)

Q(lv_draw_mask_common_dsc_t_cb)

Q(lv_draw_mask_fade_param_cfg_t)

Q(lv_draw_mask_fade_param_t)

Q(lv_draw_mask_line_param_cfg_t)

Q(lv_draw_mask_line_param_t)

Q(lv_draw_mask_map_param_cfg_t)

Q(lv_draw_mask_map_param_t)

Q(lv_draw_mask_radius_param_cfg_t)

Q(lv_draw_mask_radius_param_t)

Q(lv_draw_rect_dsc_t)

Q(lv_font_glyph_dsc_t)

Q(lv_font_t)

Q(lv_font_t_get_glyph_bitmap)

Q(lv_font_t_get_glyph_dsc)

Q(lv_fs_dir_t)

Q(lv_fs_drv_t)

Q(lv_fs_drv_t_close_cb)

Q(lv_fs_drv_t_dir_close_cb)

Q(lv_fs_drv_t_dir_open_cb)

Q(lv_fs_drv_t_dir_read_cb)

Q(lv_fs_drv_t_free_space_cb)

Q(lv_fs_drv_t_open_cb)

Q(lv_fs_drv_t_read_cb)

Q(lv_fs_drv_t_ready_cb)

Q(lv_fs_drv_t_remove_cb)

Q(lv_fs_drv_t_rename_cb)

Q(lv_fs_drv_t_seek_cb)

Q(lv_fs_drv_t_size_cb)

Q(lv_fs_drv_t_tell_cb)

Q(lv_fs_drv_t_trunc_cb)

Q(lv_fs_drv_t_write_cb)

Q(lv_fs_file_t)

Q(lv_group_t)

Q(lv_group_t_focus_cb)

Q(lv_img_decoder_dsc_t)

Q(lv_img_decoder_t)

Q(lv_img_decoder_t_close_cb)

Q(lv_img_decoder_t_info_cb)

Q(lv_img_decoder_t_open_cb)

Q(lv_img_decoder_t_read_line_cb)

Q(lv_img_dsc_t)

Q(lv_img_header_t)

Q(lv_indev_data_t)

Q(lv_indev_drv_t)

Q(lv_indev_drv_t_feedback_cb)

Q(lv_indev_drv_t_read_cb)

Q(lv_indev_proc_t)

Q(lv_indev_proc_types_keypad_t)

Q(lv_indev_proc_types_pointer_t)

Q(lv_indev_proc_types_t)

Q(lv_indev_t)

Q(lv_ll_t)

Q(lv_mem_monitor_t)

Q(lv_obj_type_t)

Q(lv_objmask_mask_t)

Q(lv_point_t)

Q(lv_sqrt_res_t)

Q(lv_style_list_t)

Q(lv_style_t)

Q(lv_task_t)

Q(lv_task_t_task_cb)

Q(lv_task_t_task_cb)

Q(lv_task_t_task_cb)

Q(lv_theme_t)

Q(lv_theme_t_apply_cb)

Q(lv_theme_t_apply_cb)

Q(lv_theme_t_apply_cb)

Q(lv_theme_t_apply_xcb)

Q(lvgl)

Q(lvgl)

Q(makefile)

Q(map)

Q(map)

Q(map)

Q(map)

Q(map)

Q(map)

Q(margin_all_zero)

Q(margin_all_zero)

Q(match)

Q(match)

Q(match)

Q(math)

Q(math)

Q(max)

Q(max_used)

Q(max_used)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(md5)

Q(md5)

Q(mem)

Q(mem16)

Q(mem32)

Q(mem8)

Q(mem_alloc)

Q(mem_alloc)

Q(mem_defrag)

Q(mem_free)

Q(mem_free)

Q(mem_info)

Q(mem_monitor_t)

Q(mem_realloc)

Q(mem_test)

Q(memoryview)

Q(memoryview)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(minkeypage)

Q(minute)

Q(minute)

Q(mkdir)

Q(mktime)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(monitor)

Q(monitor_cb)

Q(monitor_cb)

Q(monitor_flush)

Q(monitor_flush)

Q(month)

Q(month)

Q(month)

Q(month)

Q(mouse_read)

Q(mouse_read)

Q(move_background)

Q(move_foreground)

Q(mpy)

Q(msgbox)

Q(msgbox)

Q(n_size)

Q(n_size)

Q(name)

Q(namedtuple)

Q(native)

Q(next)

Q(obj)

Q(obj)

Q(obj_focus)

Q(obj_focus)

Q(obj_ll)

Q(obj_ll)

Q(obj_type_t)

Q(object)

Q(object)

Q(object)

Q(object)

Q(objmask)

Q(objmask)

Q(objmask_mask_t)

Q(oct)

Q(off)

Q(off)

Q(off)

Q(ofs_x)

Q(ofs_x)

Q(ofs_x)

Q(ofs_x)

Q(ofs_y)

Q(ofs_y)

Q(ofs_y)

Q(ofs_y)

Q(on)

Q(on)

Q(on)

Q(on_edge)

Q(once)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa)

Q(opa_bottom)

Q(opa_bottom)

Q(opa_scale_cover)

Q(opa_scale_cover)

Q(opa_top)

Q(opa_top)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open_cb)

Q(open_cb)

Q(open_cb)

Q(open_cb)

Q(opt_level)

Q(ord)

Q(origo)

Q(origo)

Q(outer)

Q(outer)

Q(outline_blend_mode)

Q(outline_blend_mode)

Q(outline_color)

Q(outline_color)

Q(outline_opa)

Q(outline_opa)

Q(outline_pad)

Q(outline_pad)

Q(outline_width)

Q(outline_width)

Q(outline_width_zero)

Q(outline_width_zero)

Q(overshoot)

Q(p1)

Q(p1)

Q(p2)

Q(p2)

Q(pack)

Q(pack_into)

Q(pad_all_zero)

Q(pad_all_zero)

Q(page)

Q(page)

Q(pagesize)

Q(palette)

Q(palette)

Q(palette_add)

Q(palette_clear)

Q(palettesize)

Q(palettesize)

Q(param)

Q(param)

Q(partition)

Q(partition)

Q(path)

Q(path)

Q(path)

Q(pattern_blend_mode)

Q(pattern_blend_mode)

Q(pattern_font)

Q(pattern_font)

Q(pattern_image)

Q(pattern_image)

Q(pattern_img_null)

Q(pattern_img_null)

Q(pattern_opa)

Q(pattern_opa)

Q(pattern_recolor)

Q(pattern_recolor)

Q(pattern_recolor_opa)

Q(pattern_recolor_opa)

Q(pattern_repeat)

Q(pattern_repeat)

Q(peektime)

Q(pend_throw)

Q(period)

Q(period)

Q(phase)

Q(phys_defined)

Q(phys_defined)

Q(phys_unit)

Q(phys_unit)

Q(phys_x)

Q(phys_x)

Q(phys_y)

Q(phys_y)

Q(pi)

Q(pi)

Q(pivot)

Q(pivot)

Q(platform)

Q(playback_delay)

Q(playback_delay)

Q(playback_now)

Q(playback_now)

Q(playback_time)

Q(playback_time)

Q(point)

Q(point)

Q(point_t)

Q(pointer)

Q(pointer)

Q(points)

Q(points)

Q(points_init)

Q(polar)

Q(poll)

Q(poll)

Q(poll)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(popleft)

Q(pow)

Q(pow)

Q(pr_timestamp)

Q(pr_timestamp)

Q(prev_scr)

Q(prev_scr)

Q(print)

Q(print_exception)

Q(prio)

Q(prio)

Q(proc)

Q(proc)

Q(property)

Q(property)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(ptr_val)

Q(ptr_val)

Q(ptr_val)

Q(ptr_val)

Q(push)

Q(put)

Q(putenv)

Q(qstr_info)

Q(r)

Q(r)

Q(radians)

Q(radius)

Q(radius)

Q(radius)

Q(radius)

Q(radius_zero)

Q(radius_zero)

Q(range)

Q(range)

Q(range)

Q(raw_end)

Q(raw_end)

Q(rddir_size)

Q(rddir_size)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_cb)

Q(read_cb)

Q(read_cb)

Q(read_cb)

Q(read_line)

Q(read_line_cb)

Q(read_line_cb)

Q(read_task)

Q(read_task)

Q(read_text_chunks)

Q(read_text_chunks)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(ready)

Q(ready_cb)

Q(ready_cb)

Q(ready_cb)

Q(ready_cb)

Q(real)

Q(realign)

Q(recolor)

Q(recolor)

Q(recolor_opa)

Q(recolor_opa)

Q(rect)

Q(rect)

Q(rect)

Q(recv)

Q(recvfrom)

Q(red)

Q(red)

Q(refocus_policy)

Q(refocus_policy)

Q(refr_now)

Q(refr_task)

Q(refr_task)

Q(refr_text)

Q(refresh)

Q(refresh)

Q(refresh_ext_draw_pad)

Q(refresh_style)

Q(register)

Q(register)

Q(register)

Q(register)

Q(rel_tol)

Q(release)

Q(remember_unknown_chunks)

Q(remember_unknown_chunks)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove_all_objs)

Q(remove_cb)

Q(remove_cb)

Q(remove_mask)

Q(remove_prop)

Q(remove_style)

Q(remove_style_local_prop)

Q(rename)

Q(rename_cb)

Q(rename_cb)

Q(repeat_cnt)

Q(repeat_cnt)

Q(repeat_count)

Q(repeat_count)

Q(repeat_delay)

Q(repeat_delay)

Q(replace)

Q(replace)

Q(report_style_mod)

Q(repr)

Q(reserved)

Q(reserved)

Q(reset)

Q(reset)

Q(reset)

Q(reset_long_press)

Q(reset_query)

Q(reset_query)

Q(reset_style_list)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rfind)

Q(rindex)

Q(rindex)

Q(rmdir)

Q(roller)

Q(roller)

Q(rotated)

Q(rotated)

Q(round)

Q(round_end)

Q(round_end)

Q(round_start)

Q(round_start)

Q(rounder_cb)

Q(rounder_cb)

Q(rpartition)

Q(rpartition)

Q(rsplit)

Q(rsplit)

Q(rstrip)

Q(rstrip)

Q(s)

Q(s)

Q(schedule)

Q(scr_act)

Q(scr_ll)

Q(scr_ll)

Q(scr_load)

Q(scr_load_anim)

Q(scroll_hor)

Q(scroll_hor)

Q(scroll_ver)

Q(scroll_ver)

Q(search)

Q(search)

Q(second)

Q(second)

Q(seed)

Q(seek)

Q(seek)

Q(seek)

Q(seek_cb)

Q(seek_cb)

Q(sel_bg_color)

Q(sel_bg_color)

Q(sel_color)

Q(sel_color)

Q(sel_end)

Q(sel_end)

Q(sel_start)

Q(sel_start)

Q(send)

Q(send)

Q(send)

Q(send_data)

Q(sendto)

Q(sep)

Q(seq)

Q(server_hostname)

Q(server_side)

Q(set)

Q(set)

Q(set)

Q(set)

Q(set_accepted_chars)

Q(set_act)

Q(set_adjustable)

Q(set_adv_hittest)

Q(set_align)

Q(set_align)

Q(set_align)

Q(set_angle)

Q(set_angle_offset)

Q(set_angle_offset)

Q(set_angles)

Q(set_anim_speed)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_anim_time)

Q(set_antialias)

Q(set_apply_cb)

Q(set_arc_length)

Q(set_auto_fit)

Q(set_auto_realign)

Q(set_auto_size)

Q(set_auto_size)

Q(set_base)

Q(set_base_dir)

Q(set_bg_angles)

Q(set_bg_blend_mode)

Q(set_bg_color)

Q(set_bg_color)

Q(set_bg_end_angle)

Q(set_bg_grad_color)

Q(set_bg_grad_dir)

Q(set_bg_grad_stop)

Q(set_bg_image)

Q(set_bg_main_stop)

Q(set_bg_opa)

Q(set_bg_opa)

Q(set_bg_start_angle)

Q(set_border_blend_mode)

Q(set_border_color)

Q(set_border_opa)

Q(set_border_post)

Q(set_border_side)

Q(set_border_width)

Q(set_bright)

Q(set_btn_ctrl)

Q(set_btn_ctrl_all)

Q(set_btn_width)

Q(set_btn_width)

Q(set_btns_pos)

Q(set_buffer)

Q(set_button_points)

Q(set_cb)

Q(set_cb)

Q(set_cell_align)

Q(set_cell_crop)

Q(set_cell_merge_right)

Q(set_cell_type)

Q(set_cell_value)

Q(set_cell_value_fmt)

Q(set_checkable)

Q(set_checkable)

Q(set_checked)

Q(set_chg_rate)

Q(set_click)

Q(set_click_focus)

Q(set_clip_corner)

Q(set_close_cb)

Q(set_col_cnt)

Q(set_col_width)

Q(set_color)

Q(set_color_mode)

Q(set_color_mode_fixed)

Q(set_content_size)

Q(set_critical_value)

Q(set_ctrl_map)

Q(set_ctrl_map)

Q(set_cursor)

Q(set_cursor_blink_time)

Q(set_cursor_click_pos)

Q(set_cursor_hidden)

Q(set_cursor_manage)

Q(set_cursor_point)

Q(set_cursor_pos)

Q(set_custom_exec_cb)

Q(set_day_names)

Q(set_default)

Q(set_delay)

Q(set_design_cb)

Q(set_digit_format)

Q(set_dir)

Q(set_dir)

Q(set_disabled)

Q(set_div_line_count)

Q(set_drag)

Q(set_drag)

Q(set_drag_dir)

Q(set_drag_parent)

Q(set_drag_throw)

Q(set_draw_arrow)

Q(set_edge_flash)

Q(set_edge_flash)

Q(set_edge_flash)

Q(set_edge_flash)

Q(set_editing)

Q(set_end_angle)

Q(set_event_cb)

Q(set_exec_cb)

Q(set_ext_array)

Q(set_ext_click_area)

Q(set_fit)

Q(set_fit)

Q(set_fit2)

Q(set_fit2)

Q(set_fit4)

Q(set_fit4)

Q(set_fix_width)

Q(set_focus_cb)

Q(set_focus_parent)

Q(set_focused_btn)

Q(set_formatter_cb)

Q(set_gesture_parent)

Q(set_group)

Q(set_header_height)

Q(set_height)

Q(set_height)

Q(set_height_fit)

Q(set_height_margin)

Q(set_hidden)

Q(set_highlighted_dates)

Q(set_hsv)

Q(set_hue)

Q(set_icc)

Q(set_image_blend_mode)

Q(set_image_opa)

Q(set_image_recolor)

Q(set_image_recolor_opa)

Q(set_info_cb)

Q(set_insert_replace)

Q(set_knob_colored)

Q(set_layout)

Q(set_layout)

Q(set_layout)

Q(set_layout)

Q(set_left_value)

Q(set_line_blend_mode)

Q(set_line_color)

Q(set_line_dash_gap)

Q(set_line_dash_width)

Q(set_line_opa)

Q(set_line_rounded)

Q(set_line_width)

Q(set_long_mode)

Q(set_map)

Q(set_map)

Q(set_margin_all)

Q(set_margin_bottom)

Q(set_margin_hor)

Q(set_margin_left)

Q(set_margin_right)

Q(set_margin_top)

Q(set_margin_ver)

Q(set_max_height)

Q(set_max_length)

Q(set_mirror)

Q(set_mode)

Q(set_month_names)

Q(set_needle_count)

Q(set_needle_img)

Q(set_next)

Q(set_offset_x)

Q(set_offset_y)

Q(set_one_check)

Q(set_one_line)

Q(set_opa_scale)

Q(set_open_cb)

Q(set_options)

Q(set_options)

Q(set_options_static)

Q(set_outline_blend_mode)

Q(set_outline_color)

Q(set_outline_opa)

Q(set_outline_pad)

Q(set_outline_width)

Q(set_pad_all)

Q(set_pad_bottom)

Q(set_pad_hor)

Q(set_pad_inner)

Q(set_pad_left)

Q(set_pad_right)

Q(set_pad_top)

Q(set_pad_ver)

Q(set_padding_left)

Q(set_palette)

Q(set_parent)

Q(set_parent_event)

Q(set_path)

Q(set_pattern_blend_mode)

Q(set_pattern_image)

Q(set_pattern_opa)

Q(set_pattern_recolor)

Q(set_pattern_recolor_opa)

Q(set_pattern_repeat)

Q(set_period)

Q(set_pivot)

Q(set_placeholder_text)

Q(set_playback_delay)

Q(set_playback_time)

Q(set_point_count)

Q(set_point_id)

Q(set_points)

Q(set_points)

Q(set_pos)

Q(set_prio)

Q(set_pwd_mode)

Q(set_pwd_show_time)

Q(set_px)

Q(set_px_cb)

Q(set_px_cb)

Q(set_radius)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_range)

Q(set_read_line_cb)

Q(set_ready_cb)

Q(set_recolor)

Q(set_recolor)

Q(set_recolor)

Q(set_refocus_policy)

Q(set_repeat_count)

Q(set_repeat_count)

Q(set_repeat_delay)

Q(set_rollover)

Q(set_rotation)

Q(set_row_cnt)

Q(set_saturation)

Q(set_scale)

Q(set_scale)

Q(set_scale_border_width)

Q(set_scale_end_border_width)

Q(set_scale_end_color)

Q(set_scale_end_line_width)

Q(set_scale_grad_color)

Q(set_scale_width)

Q(set_scrl_height)

Q(set_scrl_layout)

Q(set_scrl_width)

Q(set_scrlbar_mode)

Q(set_scroll_propagation)

Q(set_scroll_propagation)

Q(set_scroll_propagation)

Q(set_scrollable_fit)

Q(set_scrollable_fit2)

Q(set_scrollable_fit4)

Q(set_scrollbar_mode)

Q(set_scrollbar_mode)

Q(set_scrollbar_mode)

Q(set_scrollbar_mode)

Q(set_secondary_y_tick_length)

Q(set_secondary_y_tick_texts)

Q(set_selected)

Q(set_selected)

Q(set_series_axis)

Q(set_shadow_blend_mode)

Q(set_shadow_color)

Q(set_shadow_ofs_x)

Q(set_shadow_ofs_y)

Q(set_shadow_opa)

Q(set_shadow_spread)

Q(set_shadow_width)

Q(set_show_selected)

Q(set_showed_date)

Q(set_signal_cb)

Q(set_size)

Q(set_size)

Q(set_spin_time)

Q(set_src)

Q(set_src)

Q(set_start_angle)

Q(set_start_cb)

Q(set_start_value)

Q(set_state)

Q(set_state)

Q(set_state)

Q(set_state)

Q(set_step)

Q(set_style_local_bg_blend_mode)

Q(set_style_local_bg_color)

Q(set_style_local_bg_grad_color)

Q(set_style_local_bg_grad_dir)

Q(set_style_local_bg_grad_stop)

Q(set_style_local_bg_main_stop)

Q(set_style_local_bg_opa)

Q(set_style_local_border_blend_mode)

Q(set_style_local_border_color)

Q(set_style_local_border_opa)

Q(set_style_local_border_post)

Q(set_style_local_border_side)

Q(set_style_local_border_width)

Q(set_style_local_clip_corner)

Q(set_style_local_image_blend_mode)

Q(set_style_local_image_opa)

Q(set_style_local_image_recolor)

Q(set_style_local_image_recolor_opa)

Q(set_style_local_line_blend_mode)

Q(set_style_local_line_color)

Q(set_style_local_line_dash_gap)

Q(set_style_local_line_dash_width)

Q(set_style_local_line_opa)

Q(set_style_local_line_rounded)

Q(set_style_local_line_width)

Q(set_style_local_margin_all)

Q(set_style_local_margin_bottom)

Q(set_style_local_margin_hor)

Q(set_style_local_margin_left)

Q(set_style_local_margin_right)

Q(set_style_local_margin_top)

Q(set_style_local_margin_ver)

Q(set_style_local_opa_scale)

Q(set_style_local_outline_blend_mode)

Q(set_style_local_outline_color)

Q(set_style_local_outline_opa)

Q(set_style_local_outline_pad)

Q(set_style_local_outline_width)

Q(set_style_local_pad_all)

Q(set_style_local_pad_bottom)

Q(set_style_local_pad_hor)

Q(set_style_local_pad_inner)

Q(set_style_local_pad_left)

Q(set_style_local_pad_right)

Q(set_style_local_pad_top)

Q(set_style_local_pad_ver)

Q(set_style_local_pattern_blend_mode)

Q(set_style_local_pattern_image)

Q(set_style_local_pattern_opa)

Q(set_style_local_pattern_recolor)

Q(set_style_local_pattern_recolor_opa)

Q(set_style_local_pattern_repeat)

Q(set_style_local_radius)

Q(set_style_local_scale_border_width)

Q(set_style_local_scale_end_border_width)

Q(set_style_local_scale_end_color)

Q(set_style_local_scale_end_line_width)

Q(set_style_local_scale_grad_color)

Q(set_style_local_scale_width)

Q(set_style_local_shadow_blend_mode)

Q(set_style_local_shadow_color)

Q(set_style_local_shadow_ofs_x)

Q(set_style_local_shadow_ofs_y)

Q(set_style_local_shadow_opa)

Q(set_style_local_shadow_spread)

Q(set_style_local_shadow_width)

Q(set_style_local_size)

Q(set_style_local_text_blend_mode)

Q(set_style_local_text_color)

Q(set_style_local_text_decor)

Q(set_style_local_text_font)

Q(set_style_local_text_letter_space)

Q(set_style_local_text_line_space)

Q(set_style_local_text_opa)

Q(set_style_local_text_sel_bg_color)

Q(set_style_local_text_sel_color)

Q(set_style_local_transform_angle)

Q(set_style_local_transform_height)

Q(set_style_local_transform_width)

Q(set_style_local_transform_zoom)

Q(set_style_local_transition_delay)

Q(set_style_local_transition_path)

Q(set_style_local_transition_prop_1)

Q(set_style_local_transition_prop_2)

Q(set_style_local_transition_prop_3)

Q(set_style_local_transition_prop_4)

Q(set_style_local_transition_prop_5)

Q(set_style_local_transition_prop_6)

Q(set_style_local_transition_time)

Q(set_style_local_value_align)

Q(set_style_local_value_blend_mode)

Q(set_style_local_value_color)

Q(set_style_local_value_font)

Q(set_style_local_value_letter_space)

Q(set_style_local_value_line_space)

Q(set_style_local_value_ofs_x)

Q(set_style_local_value_ofs_y)

Q(set_style_local_value_opa)

Q(set_style_local_value_str)

Q(set_sym)

Q(set_sym)

Q(set_symbol)

Q(set_tab_act)

Q(set_tab_name)

Q(set_text)

Q(set_text)

Q(set_text)

Q(set_text)

Q(set_text)

Q(set_text_align)

Q(set_text_blend_mode)

Q(set_text_color)

Q(set_text_decor)

Q(set_text_fmt)

Q(set_text_fmt)

Q(set_text_font)

Q(set_text_letter_space)

Q(set_text_line_space)

Q(set_text_opa)

Q(set_text_sel)

Q(set_text_sel_bg_color)

Q(set_text_sel_color)

Q(set_text_sel_end)

Q(set_text_sel_start)

Q(set_text_static)

Q(set_text_static)

Q(set_textarea)

Q(set_tile_act)

Q(set_time)

Q(set_title)

Q(set_today_date)

Q(set_top)

Q(set_transform_angle)

Q(set_transform_height)

Q(set_transform_width)

Q(set_transform_zoom)

Q(set_transition_delay)

Q(set_transition_path)

Q(set_transition_prop_1)

Q(set_transition_prop_2)

Q(set_transition_prop_3)

Q(set_transition_prop_4)

Q(set_transition_prop_5)

Q(set_transition_prop_6)

Q(set_transition_time)

Q(set_type)

Q(set_type)

Q(set_type)

Q(set_type)

Q(set_type)

Q(set_type)

Q(set_update_mode)

Q(set_user_data)

Q(set_valid_positions)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value)

Q(set_value_align)

Q(set_value_blend_mode)

Q(set_value_color)

Q(set_value_font)

Q(set_value_letter_space)

Q(set_value_line_space)

Q(set_value_ofs_x)

Q(set_value_ofs_y)

Q(set_value_opa)

Q(set_value_str)

Q(set_values)

Q(set_var)

Q(set_visible_row_count)

Q(set_width)

Q(set_width)

Q(set_width_fit)

Q(set_width_margin)

Q(set_wrap)

Q(set_x)

Q(set_x_start_point)

Q(set_x_tick_length)

Q(set_x_tick_texts)

Q(set_y)

Q(set_y_invert)

Q(set_y_range)

Q(set_y_tick_length)

Q(set_y_tick_texts)

Q(set_zoom)

Q(setattr)

Q(setblocking)

Q(setblocking)

Q(setblocking)

Q(setblocking)

Q(setdefault)

Q(setraw)

Q(setsockopt)

Q(setter)

Q(settimeout)

Q(sha1)

Q(sha1)

Q(sha256)

Q(sha256)

Q(shadow_blend_mode)

Q(shadow_blend_mode)

Q(shadow_color)

Q(shadow_color)

Q(shadow_ofs_x)

Q(shadow_ofs_x)

Q(shadow_ofs_y)

Q(shadow_ofs_y)

Q(shadow_opa)

Q(shadow_opa)

Q(shadow_spread)

Q(shadow_spread)

Q(shadow_width)

Q(shadow_width)

Q(shadow_width_zero)

Q(shadow_width_zero)

Q(short_val)

Q(short_val)

Q(short_val)

Q(short_val)

Q(side)

Q(side)

Q(signal_send)

Q(sin)

Q(sin)

Q(single)

Q(sinh)

Q(size)

Q(size)

Q(size)

Q(size_cb)

Q(size_cb)

Q(sizeof)

Q(skip_trans)

Q(skip_trans)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(slider)

Q(slider)

Q(snprintf)

Q(sockaddr)

Q(socket)

Q(socket)

Q(sort)

Q(sorted)

Q(spinbox)

Q(spinbox)

Q(spinner)

Q(spinner)

Q(split)

Q(split)

Q(split)

Q(splitlines)

Q(splitlines)

Q(spx)

Q(spx)

Q(sqrt)

Q(sqrt)

Q(sqrt_res_t)

Q(src)

Q(src)

Q(src_get_type)

Q(src_type)

Q(src_type)

Q(srgb_defined)

Q(srgb_defined)

Q(srgb_intent)

Q(srgb_intent)

Q(stack_size)

Q(stack_use)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start_angle)

Q(start_angle)

Q(start_auto_close)

Q(start_cb)

Q(start_cb)

Q(start_edge_flash)

Q(start_line)

Q(start_line)

Q(start_new_thread)

Q(start_point)

Q(start_point)

Q(startswith)

Q(startswith)

Q(stat)

Q(state)

Q(state)

Q(state_cleanup)

Q(state_copy)

Q(state_init)

Q(staticmethod)

Q(staticmethod)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(steep)

Q(steep)

Q(step)

Q(step)

Q(step)

Q(step_next)

Q(step_prev)

Q(stop)

Q(stop)

Q(stop_auto_close)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str_val)

Q(str_val)

Q(str_val)

Q(str_val)

Q(strip)

Q(strip)

Q(struct)

Q(struct)

Q(style_cnt)

Q(style_cnt)

Q(style_list)

Q(style_list)

Q(style_list_t)

Q(style_t)

Q(subpx)

Q(subpx)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(switch)

Q(switch)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sys)

Q(sys_layer)

Q(sys_layer)

Q(system)

Q(table)

Q(table)

Q(tabview)

Q(tabview)

Q(tail)

Q(tail)

Q(tan)

Q(tanh)

Q(task_cb)

Q(task_cb)

Q(task_create)

Q(task_create_basic)

Q(task_enable)

Q(task_get_idle)

Q(task_handler)

Q(task_t)

Q(task_xcb)

Q(task_xcb)

Q(tcgetattr)

Q(tcsetattr)

Q(tell)

Q(tell)

Q(tell)

Q(tell_cb)

Q(tell_cb)

Q(termios)

Q(termios)

Q(text_decor_none)

Q(text_decor_none)

Q(text_font_normal)

Q(text_font_normal)

Q(text_is_selected)

Q(text_keys)

Q(text_keys)

Q(text_num)

Q(text_num)

Q(text_space_zero)

Q(text_space_zero)

Q(text_strings)

Q(text_strings)

Q(textarea)

Q(textarea)

Q(theme_apply)

Q(theme_empty_init)

Q(theme_get_act)

Q(theme_get_color_primary)

Q(theme_get_color_secondary)

Q(theme_get_flags)

Q(theme_get_font_normal)

Q(theme_get_font_small)

Q(theme_get_font_subtitle)

Q(theme_get_font_title)

Q(theme_material_init)

Q(theme_mono_init)

Q(theme_t)

Q(theme_template_init)

Q(threshold)

Q(throw)

Q(throw)

Q(tick_elaps)

Q(tick_get)

Q(tick_inc)

Q(ticks_add)

Q(ticks_cpu)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(tileview)

Q(tileview)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time_defined)

Q(time_defined)

Q(time_ns)

Q(time_orig)

Q(time_orig)

Q(time_pulse_us)

Q(time_to_open)

Q(time_to_open)

Q(to_bytes)

Q(toggle)

Q(toggle)

Q(toggle)

Q(toggle)

Q(top_layer)

Q(top_layer)

Q(total_size)

Q(total_size)

Q(transform)

Q(transform_all_zero)

Q(transform_all_zero)

Q(trig_activity)

Q(trunc)

Q(trunc)

Q(trunc_cb)

Q(trunc_cb)

Q(tuple)

Q(tuple)

Q(tuple)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(type)

Q(types)

Q(types)

Q(uarray)

Q(uarray)

Q(ubinascii)

Q(ubinascii)

Q(uchar_val)

Q(uchar_val)

Q(uchar_val)

Q(uchar_val)

Q(ucollections)

Q(ucollections)

Q(ucryptolib)

Q(ucryptolib)

Q(uctypes)

Q(uctypes)

Q(uctypes)

Q(uerrno)

Q(uerrno)

Q(uhashlib)

Q(uhashlib)

Q(uheapq)

Q(uheapq)

Q(uint)

Q(uint)

Q(uint_val)

Q(uint_val)

Q(uint_val)

Q(uint_val)

Q(uio)

Q(uio)

Q(ujson)

Q(ujson)

Q(umachine)

Q(umachine)

Q(underline_position)

Q(underline_position)

Q(underline_thickness)

Q(underline_thickness)

Q(unhexlify)

Q(union)

Q(union)

Q(unknown_chunks_data)

Q(unknown_chunks_data)

Q(unknown_chunks_size)

Q(unknown_chunks_size)

Q(unpack)

Q(unpack_from)

Q(unregister)

Q(unsetenv)

Q(uos)

Q(uos)

Q(up)

Q(update)

Q(update)

Q(update)

Q(update)

Q(update)

Q(update_mask)

Q(upper)

Q(upper)

Q(urandom)

Q(urandom)

Q(ure)

Q(ure)

Q(ure)

Q(used_cnt)

Q(used_cnt)

Q(used_pct)

Q(used_pct)

Q(uselect)

Q(uselect)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(user_data)

Q(ushort_val)

Q(ushort_val)

Q(ushort_val)

Q(ushort_val)

Q(usocket)

Q(usocket)

Q(ussl)

Q(ussl)

Q(ussl)

Q(ustruct)

Q(ustruct)

Q(usys)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(utime)

Q(utime)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(utimeq)

Q(uwebsocket)

Q(uwebsocket)

Q(uzlib)

Q(uzlib)

Q(v)

Q(v)

Q(valid_cache)

Q(valid_cache)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value_align)

Q(value_align)

Q(value_blend_mode)

Q(value_blend_mode)

Q(value_color)

Q(value_color)

Q(value_font)

Q(value_font)

Q(value_letter_space)

Q(value_letter_space)

Q(value_line_space)

Q(value_line_space)

Q(value_ofs_x)

Q(value_ofs_x)

Q(value_ofs_y)

Q(value_ofs_y)

Q(value_opa)

Q(value_opa)

Q(value_str)

Q(value_str)

Q(value_txt_str)

Q(value_txt_str)

Q(values)

Q(values)

Q(var)

Q(var)

Q(var)

Q(vect)

Q(vect)

Q(ver_res)

Q(ver_res)

Q(version)

Q(version)

Q(version_info)

Q(vertex_p)

Q(vertex_p)

Q(viper)

Q(w)

Q(w)

Q(w)

Q(wait_cb)

Q(wait_cb)

Q(wait_release)

Q(wait_until_release)

Q(wait_until_release)

Q(websocket)

Q(websocket)

Q(width)

Q(width)

Q(win)

Q(win)

Q(wrap)

Q(wrap)

Q(wrap_socket)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_cb)

Q(write_cb)

Q(x)

Q(x)

Q(x1)

Q(x1)

Q(x2)

Q(x2)

Q(xy_steep)

Q(xy_steep)

Q(y)

Q(y)

Q(y)

Q(y)

Q(y1)

Q(y1)

Q(y2)

Q(y2)

Q(y_axis)

Q(y_axis)

Q(y_bottom)

Q(y_bottom)

Q(y_prev)

Q(y_prev)

Q(y_prev_x)

Q(y_prev_x)

Q(y_top)

Q(y_top)

Q(year)

Q(year)

Q(year)

Q(year)

Q(yx_steep)

Q(yx_steep)

Q(zip)

Q(zip)

Q(zlib_decompress)

Q(zlibsettings)

Q(zlibsettings)

Q(zoom)

Q(zoom)
