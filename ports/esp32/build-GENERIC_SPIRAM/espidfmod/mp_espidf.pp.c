# 1 "../../lib/lv_bindings/driver/esp32/espidf.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "../../lib/lv_bindings/driver/esp32/espidf.h"





# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_idf_version.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_idf_version.h"
       
# 54 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_idf_version.h"
const char* esp_get_idf_version(void);
# 7 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 37 "../../lib/lv_bindings/driver/esp32/espidf.h"
typedef int BaseType_t;
typedef unsigned int UBaseType_t;
typedef void* system_event_t;



typedef void *spi_dev_t;



typedef void *lldesc_t;


# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/_fake_defines.h" 1
# 2 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/_fake_typedefs.h" 1



typedef int size_t;
typedef int __builtin_va_list;
typedef int __gnuc_va_list;
typedef int va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int64_t;
typedef int __uint64_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int __s8;
typedef int __u8;
typedef int __s16;
typedef int __u16;
typedef int __s32;
typedef int __u32;
typedef int __s64;
typedef int __u64;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int __sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int jmp_buf;
typedef int rlim_t;
typedef int sa_family_t;
typedef int sigjmp_buf;
typedef int stack_t;
typedef int siginfo_t;
typedef int z_stream;


typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;


typedef int int_least8_t;
typedef int uint_least8_t;
typedef int int_least16_t;
typedef int uint_least16_t;
typedef int int_least32_t;
typedef int uint_least32_t;
typedef int int_least64_t;
typedef int uint_least64_t;


typedef int int_fast8_t;
typedef int uint_fast8_t;
typedef int int_fast16_t;
typedef int uint_fast16_t;
typedef int int_fast32_t;
typedef int uint_fast32_t;
typedef int int_fast64_t;
typedef int uint_fast64_t;


typedef int intptr_t;
typedef int uintptr_t;


typedef int intmax_t;
typedef int uintmax_t;


typedef _Bool bool;


typedef void* MirEGLNativeWindowType;
typedef void* MirEGLNativeDisplayType;
typedef struct MirConnection MirConnection;
typedef struct MirSurface MirSurface;
typedef struct MirSurfaceSpec MirSurfaceSpec;
typedef struct MirScreencast MirScreencast;
typedef struct MirPromptSession MirPromptSession;
typedef struct MirBufferStream MirBufferStream;
typedef struct MirPersistentId MirPersistentId;
typedef struct MirBlob MirBlob;
typedef struct MirDisplayConfig MirDisplayConfig;


typedef struct xcb_connection_t xcb_connection_t;
typedef uint32_t xcb_window_t;
typedef uint32_t xcb_visualid_t;
# 2 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 2
# 51 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
typedef uint32_t TickType_t;


typedef void *mp_obj_t;

static inline void SPH0645_WORKAROUND(int i2s_num);
static inline void get_ccount(int *ccount);
# 90 "../../lib/lv_bindings/driver/esp32/espidf.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
       
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h" 2
# 36 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
uint32_t esp_clk_slowclk_cal_get();
# 47 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
void esp_clk_slowclk_cal_set(uint32_t value);
# 57 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
int esp_clk_cpu_freq(void);
# 68 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
int esp_clk_apb_freq(void);
# 79 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
int esp_clk_xtal_freq(void);
# 91 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp32/clk.h"
uint64_t esp_clk_rtc_time();
# 91 "../../lib/lv_bindings/driver/esp32/espidf.h" 2




# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h" 1
# 14 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h"
       

# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdio.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/assert.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h" 2





typedef int32_t esp_err_t;
# 59 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h"
const char *esp_err_to_name(esp_err_t code);
# 77 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_err.h"
const char *esp_err_to_name_r(esp_err_t code, char *buf, size_t buflen);


void _esp_error_check_failed(esp_err_t rc, const char *file, int line, const char *function, const char *expression) ;


void _esp_error_check_failed_without_abort(esp_err_t rc, const char *file, int line, const char *function, const char *expression);
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_types.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_types.h"
# 1 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/cdefs.h" 1 3 4
# 43 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/cdefs.h" 3 4
# 1 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 1 3 4







# 1 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/features.h" 1 3 4
# 28 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/features.h" 3 4
# 1 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/_newlib_version.h" 1 3 4
# 29 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/features.h" 2 3 4
# 9 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 2 3 4
# 41 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4

# 41 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/machine/_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 44 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/cdefs.h" 2 3 4

# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stddef.h" 1 3 4
# 46 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/cdefs.h" 2 3 4
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_types.h" 2

# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_types.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_types.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stddef.h" 1
# 24 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_types.h" 2
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_bit_defs.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_bit_defs.h"
       
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_attr.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_attr.h"
# 1 "build-GENERIC_SPIRAM/sdkconfig.h" 1




       
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_attr.h" 2
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h" 2
# 56 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"

# 56 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
typedef enum {
    GPIO_PIN_INTR_DISABLE = 0,
    GPIO_PIN_INTR_POSEDGE = 1,
    GPIO_PIN_INTR_NEGEDGE = 2,
    GPIO_PIN_INTR_ANYEDGE = 3,
    GPIO_PIN_INTR_LOLEVEL = 4,
    GPIO_PIN_INTR_HILEVEL = 5
} GPIO_INT_TYPE;
# 72 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
typedef void (* gpio_intr_handler_fn_t)(uint32_t intr_mask, bool high, void *arg);
# 83 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_init(void);
# 100 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_output_set(uint32_t set_mask, uint32_t clear_mask, uint32_t enable_mask, uint32_t disable_mask);
# 117 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_output_set_high(uint32_t set_mask, uint32_t clear_mask, uint32_t enable_mask, uint32_t disable_mask);
# 126 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
uint32_t gpio_input_get(void);
# 135 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
uint32_t gpio_input_get_high(void);
# 148 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_intr_handler_register(gpio_intr_handler_fn_t fn, void *arg);
# 158 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
uint32_t gpio_intr_pending(void);
# 168 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
uint32_t gpio_intr_pending_high(void);
# 178 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_intr_ack(uint32_t ack_mask);
# 188 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_intr_ack_high(uint32_t ack_mask);
# 200 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pin_wakeup_enable(uint32_t i, GPIO_INT_TYPE intr_state);
# 210 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pin_wakeup_disable(void);
# 226 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_matrix_in(uint32_t gpio, uint32_t signal_idx, bool inv);
# 242 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_matrix_out(uint32_t gpio, uint32_t signal_idx, bool out_inv, bool oen_inv);
# 251 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pad_select_gpio(uint8_t gpio_num);
# 262 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pad_set_drv(uint8_t gpio_num, uint8_t drv);
# 271 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pad_pullup(uint8_t gpio_num);
# 280 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pad_pulldown(uint8_t gpio_num);
# 289 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pad_unhold(uint8_t gpio_num);
# 298 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/gpio.h"
void gpio_pad_hold(uint8_t gpio_num);
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_api.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h" 2
# 87 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
typedef void (*intr_handler_t)(void *arg);


typedef struct intr_handle_data_t intr_handle_data_t;
typedef intr_handle_data_t* intr_handle_t ;
# 108 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_mark_shared(int intno, int cpu, bool is_in_iram);
# 122 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_reserve(int intno, int cpu);
# 157 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_alloc(int source, int flags, intr_handler_t handler, void *arg, intr_handle_t *ret_handle);
# 195 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_alloc_intrstatus(int source, int flags, uint32_t intrstatusreg, uint32_t intrstatusmask, intr_handler_t handler, void *arg, intr_handle_t *ret_handle);
# 216 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_free(intr_handle_t handle);
# 226 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
int esp_intr_get_cpu(intr_handle_t handle);
# 235 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
int esp_intr_get_intno(intr_handle_t handle);
# 253 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_disable(intr_handle_t handle);
# 266 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_enable(intr_handle_t handle);
# 280 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp32/include/esp_intr_alloc.h"
esp_err_t esp_intr_set_in_iram(intr_handle_t handle, bool is_in_iram);




void esp_intr_noniram_disable();





void esp_intr_noniram_enable();
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h"
       
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/gpio_pins.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/io_mux_reg.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/gpio_struct.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/gpio_reg.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/gpio_reg.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/soc.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/soc.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/soc.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_assert.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_assert.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/assert.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_assert.h" 2
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/soc.h" 2
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/gpio_reg.h" 2
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/gpio_sig_map.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/gpio_periph.h" 2






extern const uint32_t GPIO_PIN_MUX_REG[40];
# 24 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h" 2
# 132 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
typedef enum {
    GPIO_NUM_NC = -1,
    GPIO_NUM_0 = 0,
    GPIO_NUM_1 = 1,
    GPIO_NUM_2 = 2,





    GPIO_NUM_3 = 3,
    GPIO_NUM_4 = 4,
    GPIO_NUM_5 = 5,
    GPIO_NUM_6 = 6,
    GPIO_NUM_7 = 7,
    GPIO_NUM_8 = 8,
    GPIO_NUM_9 = 9,
    GPIO_NUM_10 = 10,
    GPIO_NUM_11 = 11,
    GPIO_NUM_12 = 12,
    GPIO_NUM_13 = 13,
    GPIO_NUM_14 = 14,
    GPIO_NUM_15 = 15,
    GPIO_NUM_16 = 16,
    GPIO_NUM_17 = 17,
    GPIO_NUM_18 = 18,
    GPIO_NUM_19 = 19,

    GPIO_NUM_21 = 21,
    GPIO_NUM_22 = 22,
    GPIO_NUM_23 = 23,

    GPIO_NUM_25 = 25,
    GPIO_NUM_26 = 26,
    GPIO_NUM_27 = 27,

    GPIO_NUM_32 = 32,
    GPIO_NUM_33 = 33,
    GPIO_NUM_34 = 34,
    GPIO_NUM_35 = 35,
    GPIO_NUM_36 = 36,
    GPIO_NUM_37 = 37,
    GPIO_NUM_38 = 38,
    GPIO_NUM_39 = 39,
    GPIO_NUM_MAX = 40,

} gpio_num_t;

typedef enum {
    GPIO_INTR_DISABLE = 0,
    GPIO_INTR_POSEDGE = 1,
    GPIO_INTR_NEGEDGE = 2,
    GPIO_INTR_ANYEDGE = 3,
    GPIO_INTR_LOW_LEVEL = 4,
    GPIO_INTR_HIGH_LEVEL = 5,
    GPIO_INTR_MAX,
} gpio_int_type_t;

typedef enum {
    GPIO_MODE_DISABLE = (0),
    GPIO_MODE_INPUT = (0x00000001),
    GPIO_MODE_OUTPUT = (0x00000002),
    GPIO_MODE_OUTPUT_OD = (((0x00000002))|((0x00000004))),
    GPIO_MODE_INPUT_OUTPUT_OD = (((0x00000001))|((0x00000002))|((0x00000004))),
    GPIO_MODE_INPUT_OUTPUT = (((0x00000001))|((0x00000002))),
} gpio_mode_t;

typedef enum {
    GPIO_PULLUP_DISABLE = 0x0,
    GPIO_PULLUP_ENABLE = 0x1,
} gpio_pullup_t;

typedef enum {
    GPIO_PULLDOWN_DISABLE = 0x0,
    GPIO_PULLDOWN_ENABLE = 0x1,
} gpio_pulldown_t;




typedef struct {
    uint64_t pin_bit_mask;
    gpio_mode_t mode;
    gpio_pullup_t pull_up_en;
    gpio_pulldown_t pull_down_en;
    gpio_int_type_t intr_type;
} gpio_config_t;

typedef enum {
    GPIO_PULLUP_ONLY,
    GPIO_PULLDOWN_ONLY,
    GPIO_PULLUP_PULLDOWN,
    GPIO_FLOATING,
} gpio_pull_mode_t;

typedef enum {
    GPIO_DRIVE_CAP_0 = 0,
    GPIO_DRIVE_CAP_1 = 1,
    GPIO_DRIVE_CAP_2 = 2,
    GPIO_DRIVE_CAP_DEFAULT = 2,
    GPIO_DRIVE_CAP_3 = 3,
    GPIO_DRIVE_CAP_MAX,
} gpio_drive_cap_t;

typedef void (*gpio_isr_t)(void*);
typedef intr_handle_t gpio_isr_handle_t;
# 251 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_config(const gpio_config_t *pGPIOConfig);
# 264 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_reset_pin(gpio_num_t gpio_num);
# 277 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_set_intr_type(gpio_num_t gpio_num, gpio_int_type_t intr_type);
# 293 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_intr_enable(gpio_num_t gpio_num);
# 305 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_intr_disable(gpio_num_t gpio_num);
# 318 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_set_level(gpio_num_t gpio_num, uint32_t level);
# 332 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
int gpio_get_level(gpio_num_t gpio_num);
# 347 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_set_direction(gpio_num_t gpio_num, gpio_mode_t mode);
# 362 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_set_pull_mode(gpio_num_t gpio_num, gpio_pull_mode_t pull);
# 375 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_wakeup_enable(gpio_num_t gpio_num, gpio_int_type_t intr_type);
# 386 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_wakeup_disable(gpio_num_t gpio_num);
# 412 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_isr_register(void (*fn)(void*), void * arg, int intr_alloc_flags, gpio_isr_handle_t *handle);
# 423 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_pullup_en(gpio_num_t gpio_num);
# 434 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_pullup_dis(gpio_num_t gpio_num);
# 445 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_pulldown_en(gpio_num_t gpio_num);
# 456 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_pulldown_dis(gpio_num_t gpio_num);
# 473 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_install_isr_service(int intr_alloc_flags);




void gpio_uninstall_isr_service();
# 504 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_isr_handler_add(gpio_num_t gpio_num, gpio_isr_t isr_handler, void* args);
# 516 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_isr_handler_remove(gpio_num_t gpio_num);
# 528 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_set_drive_capability(gpio_num_t gpio_num, gpio_drive_cap_t strength);
# 540 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_get_drive_capability(gpio_num_t gpio_num, gpio_drive_cap_t* strength);
# 562 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_hold_en(gpio_num_t gpio_num);
# 581 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
esp_err_t gpio_hold_dis(gpio_num_t gpio_num);
# 592 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
void gpio_deep_sleep_hold_en(void);





void gpio_deep_sleep_hold_dis(void);






void gpio_iomux_in(uint32_t gpio_num, uint32_t signal_idx);
# 614 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/gpio.h"
void gpio_iomux_out(uint8_t gpio_num, int func, bool oen_inv);
# 96 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
       


# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/FreeRTOS.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h"
       

# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/lldesc.h" 1
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h"
       
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/soc.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/periph_defs.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/periph_defs.h"
typedef enum {
    PERIPH_LEDC_MODULE = 0,
    PERIPH_UART0_MODULE,
    PERIPH_UART1_MODULE,
    PERIPH_UART2_MODULE,
    PERIPH_I2C0_MODULE,
    PERIPH_I2C1_MODULE,
    PERIPH_I2S0_MODULE,
    PERIPH_I2S1_MODULE,
    PERIPH_TIMG0_MODULE,
    PERIPH_TIMG1_MODULE,
    PERIPH_PWM0_MODULE,
    PERIPH_PWM1_MODULE,
    PERIPH_PWM2_MODULE,
    PERIPH_PWM3_MODULE,
    PERIPH_UHCI0_MODULE,
    PERIPH_UHCI1_MODULE,
    PERIPH_RMT_MODULE,
    PERIPH_PCNT_MODULE,
    PERIPH_SPI_MODULE,
    PERIPH_HSPI_MODULE,
    PERIPH_VSPI_MODULE,
    PERIPH_SPI_DMA_MODULE,
    PERIPH_SDMMC_MODULE,
    PERIPH_SDIO_SLAVE_MODULE,
    PERIPH_CAN_MODULE,
    PERIPH_EMAC_MODULE,
    PERIPH_RNG_MODULE,
    PERIPH_WIFI_MODULE,
    PERIPH_BT_MODULE,
    PERIPH_WIFI_BT_COMMON_MODULE,
    PERIPH_BT_BASEBAND_MODULE,
    PERIPH_BT_LC_MODULE,
    PERIPH_AES_MODULE,
    PERIPH_SHA_MODULE,
    PERIPH_RSA_MODULE,
} periph_module_t;
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/spi_caps.h" 1
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/spi_reg.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/spi_struct.h" 1
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h" 2
# 33 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/spi_periph.h"
typedef struct {
    const uint8_t spiclk_out;
    const uint8_t spiclk_in;
    const uint8_t spid_out;
    const uint8_t spiq_out;
    const uint8_t spiwp_out;
    const uint8_t spihd_out;
    const uint8_t spid_in;
    const uint8_t spiq_in;
    const uint8_t spiwp_in;
    const uint8_t spihd_in;
    const uint8_t spics_out[3];
    const uint8_t spics_in;
    const uint8_t spiclk_iomux_pin;
    const uint8_t spid_iomux_pin;
    const uint8_t spiq_iomux_pin;
    const uint8_t spiwp_iomux_pin;
    const uint8_t spihd_iomux_pin;
    const uint8_t spics0_iomux_pin;
    const uint8_t irq;
    const uint8_t irq_dma;
    const periph_module_t module;
    const int func;
    spi_dev_t *hw;
} spi_signal_conn_t;

extern const spi_signal_conn_t spi_periph_signal[3];
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/hal/spi_types.h" 1
       







typedef enum {
    SPI1_HOST=0,
    SPI2_HOST=1,
    SPI3_HOST=2,
} spi_host_device_t;
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h" 2
# 84 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h"
typedef struct {
    int mosi_io_num;
    int miso_io_num;
    int sclk_io_num;
    int quadwp_io_num;
    int quadhd_io_num;
    int max_transfer_sz;
    uint32_t flags;
    int intr_flags;




} spi_bus_config_t;
# 126 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h"
esp_err_t spi_bus_initialize(spi_host_device_t host, const spi_bus_config_t *bus_config, int dma_chan);
# 139 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_common.h"
esp_err_t spi_bus_free(spi_host_device_t host);
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h" 2
# 56 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
typedef struct spi_transaction_t spi_transaction_t;
typedef void(*transaction_cb_t)(spi_transaction_t *trans);




typedef struct {
    uint8_t command_bits;
    uint8_t address_bits;
    uint8_t dummy_bits;
    uint8_t mode;
    uint8_t duty_cycle_pos;
    uint8_t cs_ena_pretrans;
    uint8_t cs_ena_posttrans;
    int clock_speed_hz;
    int input_delay_ns;




    int spics_io_num;
    uint32_t flags;
    int queue_size;
    transaction_cb_t pre_cb;
# 89 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
    transaction_cb_t post_cb;
# 99 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
} spi_device_interface_config_t;
# 114 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
struct spi_transaction_t {
    uint32_t flags;
    uint16_t cmd;





    uint64_t addr;





    size_t length;
    size_t rxlength;
    void *user;
    union {
        const void *tx_buffer;
        uint8_t tx_data[4];
    };
    union {
        void *rx_buffer;
        uint8_t rx_data[4];
    };
} ;





typedef struct {
    struct spi_transaction_t base;
    uint8_t command_bits;
    uint8_t address_bits;
    uint8_t dummy_bits;
} spi_transaction_ext_t ;


typedef struct spi_device_t* spi_device_handle_t;
# 173 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_bus_add_device(spi_host_device_t host, const spi_device_interface_config_t *dev_config, spi_device_handle_t *handle);
# 185 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_bus_remove_device(spi_device_handle_t handle);
# 205 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_queue_trans(spi_device_handle_t handle, spi_transaction_t *trans_desc, TickType_t ticks_to_wait);
# 227 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_get_trans_result(spi_device_handle_t handle, spi_transaction_t **trans_desc, TickType_t ticks_to_wait);
# 246 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_transmit(spi_device_handle_t handle, spi_transaction_t *trans_desc);
# 268 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_polling_start(spi_device_handle_t handle, spi_transaction_t *trans_desc, TickType_t ticks_to_wait);
# 286 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_polling_end(spi_device_handle_t handle, TickType_t ticks_to_wait);
# 305 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_polling_transmit(spi_device_handle_t handle, spi_transaction_t *trans_desc);
# 322 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
esp_err_t spi_device_acquire_bus(spi_device_handle_t device, TickType_t wait);






void spi_device_release_bus(spi_device_handle_t dev);
# 344 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
int spi_cal_clock(int fapb, int hz, int duty_cycle, uint32_t* reg_o) ;
# 355 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
int spi_get_actual_clock(int fapb, int hz, int duty_cycle);
# 371 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
void spi_get_timing(bool gpio_is_used, int input_delay_ns, int eff_clk, int* dummy_o, int* cycles_remain_o);
# 382 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/spi_master.h"
int spi_get_freq_limit(bool gpio_is_used, int input_delay_ns);
# 97 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h" 1
# 14 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
       

# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdlib.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h" 1
# 14 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
       
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 16 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdlib.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h" 2
# 30 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
typedef struct multi_heap_info *multi_heap_handle_t;
# 41 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
void *multi_heap_malloc(multi_heap_handle_t heap, size_t size);
# 50 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
void multi_heap_free(multi_heap_handle_t heap, void *p);
# 62 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
void *multi_heap_realloc(multi_heap_handle_t heap, void *p, size_t size);
# 73 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
size_t multi_heap_get_allocated_size(multi_heap_handle_t heap, void *p);
# 87 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
multi_heap_handle_t multi_heap_register(void *start, size_t size);
# 101 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
void multi_heap_set_lock(multi_heap_handle_t heap, void* lock);







void multi_heap_dump(multi_heap_handle_t heap);
# 121 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
bool multi_heap_check(multi_heap_handle_t heap, bool print_errors);
# 135 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
size_t multi_heap_free_size(multi_heap_handle_t heap);
# 147 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
size_t multi_heap_minimum_free_size(multi_heap_handle_t heap);


typedef struct {
    size_t total_free_bytes;
    size_t total_allocated_bytes;
    size_t largest_free_block;
    size_t minimum_free_bytes;
    size_t allocated_blocks;
    size_t free_blocks;
    size_t total_blocks;
} multi_heap_info_t;
# 167 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/multi_heap.h"
void multi_heap_get_info(multi_heap_handle_t heap, multi_heap_info_t *info);
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h" 2
# 55 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void *heap_caps_malloc(size_t size, uint32_t caps);
# 67 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void heap_caps_free( void *ptr);
# 86 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void *heap_caps_realloc( void *ptr, size_t size, int caps);
# 102 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void *heap_caps_calloc(size_t n, size_t size, uint32_t caps);
# 118 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
size_t heap_caps_get_free_size( uint32_t caps );
# 136 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
size_t heap_caps_get_minimum_free_size( uint32_t caps );
# 148 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
size_t heap_caps_get_largest_free_block( uint32_t caps );
# 164 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void heap_caps_get_info( multi_heap_info_t *info, uint32_t caps );
# 177 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void heap_caps_print_heap_info( uint32_t caps );
# 191 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
bool heap_caps_check_integrity_all(bool print_errors);
# 209 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
bool heap_caps_check_integrity(uint32_t caps, bool print_errors);
# 232 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
bool heap_caps_check_integrity_addr(intptr_t addr, bool print_errors);
# 245 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void heap_caps_malloc_extmem_enable(size_t limit);
# 260 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void *heap_caps_malloc_prefer( size_t size, size_t num, ... );
# 271 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void *heap_caps_realloc_prefer( void *ptr, size_t size, size_t num, ... );
# 282 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void *heap_caps_calloc_prefer( size_t n, size_t size, size_t num, ... );
# 301 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void heap_caps_dump(uint32_t caps);
# 311 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/heap/include/esp_heap_caps.h"
void heap_caps_dump_all();
# 98 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdarg.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdlib.h" 1
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h" 2
# 59 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
typedef enum {
    ETS_OK = 0,
    ETS_FAILED = 1
} ETS_STATUS;

typedef uint32_t ETSSignal;
typedef uint32_t ETSParam;

typedef struct ETSEventTag ETSEvent;

struct ETSEventTag {
    ETSSignal sig;
    ETSParam par;
};

typedef void (*ETSTask)(ETSEvent *e);
typedef void (* ets_idle_cb_t)(void *arg);
# 84 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_run(void);
# 95 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_set_idle_cb(ets_idle_cb_t func, void *arg);
# 110 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_task(ETSTask task, uint8_t prio, ETSEvent *queue, uint8_t qlen);
# 124 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
ETS_STATUS ets_post(uint8_t prio, ETSSignal sig, ETSParam par);
# 138 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
extern const char *const exc_cause_table[40];
# 148 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_set_user_start(uint32_t start);
# 158 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_set_startup_callback(uint32_t callback);
# 168 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_set_appcpu_boot_addr(uint32_t start);
# 184 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
ETS_STATUS ets_unpack_flash_code_legacy(uint32_t pos, uint32_t *entry_addr, bool jump, bool config);
# 202 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
ETS_STATUS ets_unpack_flash_code(uint32_t pos, uint32_t *entry_addr, bool jump, bool sb_need_check, bool config);
# 227 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
int ets_printf(const char *fmt, ...);
# 237 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_write_char_uart(char c);
# 247 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_install_putc1(void (*p)(char c));
# 257 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_install_putc2(void (*p)(char c));
# 267 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_install_uart_printf(void);
# 289 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
typedef void ETSTimerFunc(void *timer_arg);

typedef struct _ETSTIMER_ {
    struct _ETSTIMER_ *timer_next;
    uint32_t timer_expire;
    uint32_t timer_period;
    ETSTimerFunc *timer_func;
    void *timer_arg;
} ETSTimer;
# 307 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_init(void);
# 316 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_deinit(void);
# 330 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_arm(ETSTimer *timer, uint32_t tmout, bool repeat);
# 344 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_arm_us(ETSTimer *ptimer, uint32_t us, bool repeat);
# 354 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_disarm(ETSTimer *timer);
# 368 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_setfn(ETSTimer *ptimer, ETSTimerFunc *pfunction, void *parg);
# 378 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_timer_done(ETSTimer *ptimer);
# 388 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_delay_us(uint32_t us);
# 398 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_update_cpu_frequency(uint32_t ticks_per_us);
# 410 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_update_cpu_frequency_rom(uint32_t ticks_per_us);
# 420 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
uint32_t ets_get_cpu_frequency(void);
# 429 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
uint32_t ets_get_xtal_scale(void);
# 442 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
uint32_t ets_get_detected_xtal_freq(void);
# 456 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
typedef void (* ets_isr_t)(void *);
# 471 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_isr_attach(int i, ets_isr_t func, void *arg);
# 482 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_isr_mask(uint32_t mask);
# 493 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_isr_unmask(uint32_t unmask);
# 504 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_intr_lock(void);
# 515 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_intr_unlock(void);
# 526 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void ets_waiti0(void);
# 544 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
void intr_matrix_set(int cpu_no, uint32_t model_num, uint32_t intr_num);
# 634 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_rom/include/esp32/rom/ets_sys.h"
typedef enum {
    OK = 0,
    FAIL,
    PENDING,
    BUSY,
    CANCEL,
} STATUS;
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h" 2
# 31 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
typedef enum {
    ESP_LOG_NONE,
    ESP_LOG_ERROR,
    ESP_LOG_WARN,
    ESP_LOG_INFO,
    ESP_LOG_DEBUG,
    ESP_LOG_VERBOSE
} esp_log_level_t;

typedef int (*vprintf_like_t)(const char *, va_list);
# 60 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
void esp_log_level_set(const char* tag, esp_log_level_t level);
# 73 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
vprintf_like_t esp_log_set_vprintf(vprintf_like_t func);
# 87 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
uint32_t esp_log_timestamp(void);
# 97 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
uint32_t esp_log_early_timestamp(void);
# 107 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
void esp_log_write(esp_log_level_t level, const char* tag, const char* format, ...) ;
# 116 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h"
void esp_log_writev(esp_log_level_t level, const char* tag, const char* format, va_list args);



# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log_internal.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log_internal.h"
void esp_log_buffer_hex_internal(const char *tag, const void *buffer, uint16_t buff_len, esp_log_level_t level);
void esp_log_buffer_char_internal(const char *tag, const void *buffer, uint16_t buff_len, esp_log_level_t level);
void esp_log_buffer_hexdump_internal( const char *tag, const void *buffer, uint16_t buff_len, esp_log_level_t log_level);
# 121 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/log/include/esp_log.h" 2
# 99 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 24 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h" 2


# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/adc_periph.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/adc_periph.h"
       
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/adc_channel.h" 1
# 16 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/adc_periph.h" 2
# 27 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h" 2

typedef enum {
    ADC_ATTEN_DB_0 = 0,
    ADC_ATTEN_DB_2_5 = 1,
    ADC_ATTEN_DB_6 = 2,
    ADC_ATTEN_DB_11 = 3,
    ADC_ATTEN_MAX,
} adc_atten_t;

typedef enum {
    ADC_WIDTH_BIT_9 = 0,
    ADC_WIDTH_BIT_10 = 1,
    ADC_WIDTH_BIT_11 = 2,
    ADC_WIDTH_BIT_12 = 3,
    ADC_WIDTH_MAX,
} adc_bits_width_t;
# 55 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
typedef enum {
    ADC1_CHANNEL_0 = 0,
    ADC1_CHANNEL_1,
    ADC1_CHANNEL_2,
    ADC1_CHANNEL_3,
    ADC1_CHANNEL_4,
    ADC1_CHANNEL_5,
    ADC1_CHANNEL_6,
    ADC1_CHANNEL_7,
    ADC1_CHANNEL_MAX,
} adc1_channel_t;

typedef enum {
    ADC2_CHANNEL_0 = 0,
    ADC2_CHANNEL_1,
    ADC2_CHANNEL_2,
    ADC2_CHANNEL_3,
    ADC2_CHANNEL_4,
    ADC2_CHANNEL_5,
    ADC2_CHANNEL_6,
    ADC2_CHANNEL_7,
    ADC2_CHANNEL_8,
    ADC2_CHANNEL_9,
    ADC2_CHANNEL_MAX,
} adc2_channel_t;

typedef enum {
    ADC_CHANNEL_0 = 0,
    ADC_CHANNEL_1,
    ADC_CHANNEL_2,
    ADC_CHANNEL_3,
    ADC_CHANNEL_4,
    ADC_CHANNEL_5,
    ADC_CHANNEL_6,
    ADC_CHANNEL_7,
    ADC_CHANNEL_8,
    ADC_CHANNEL_9,
    ADC_CHANNEL_MAX,
} adc_channel_t;

typedef enum {
    ADC_UNIT_1 = 1,
    ADC_UNIT_2 = 2,
    ADC_UNIT_BOTH = 3,
    ADC_UNIT_ALTER = 7,
    ADC_UNIT_MAX,
} adc_unit_t;

typedef enum {
    ADC_ENCODE_12BIT,
    ADC_ENCODE_11BIT,
    ADC_ENCODE_MAX,
} adc_i2s_encode_t;

typedef enum {
    ADC_I2S_DATA_SRC_IO_SIG = 0,
    ADC_I2S_DATA_SRC_ADC = 1,
    ADC_I2S_DATA_SRC_MAX,
} adc_i2s_source_t;
# 126 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc1_pad_get_io_num(adc1_channel_t channel, gpio_num_t *gpio_num);
# 137 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc1_config_width(adc_bits_width_t width_bit);
# 147 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc_set_data_width(adc_unit_t adc_unit, adc_bits_width_t width_bit);
# 191 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc1_config_channel_atten(adc1_channel_t channel, adc_atten_t atten);
# 213 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
int adc1_get_raw(adc1_channel_t channel);




void adc_power_on();





void adc_power_off();
# 234 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc_gpio_init(adc_unit_t adc_unit, adc_channel_t channel);
# 244 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc_set_data_inv(adc_unit_t adc_unit, bool inv_en);







esp_err_t adc_set_clk_div(uint8_t clk_div);







esp_err_t adc_set_i2s_data_source(adc_i2s_source_t src);
# 270 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc_i2s_mode_init(adc_unit_t adc_unit, adc_channel_t channel);
# 281 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
void adc1_ulp_enable();
# 302 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
int hall_sensor_read();
# 315 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc2_pad_get_io_num(adc2_channel_t channel, gpio_num_t *gpio_num);
# 347 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc2_config_channel_atten(adc2_channel_t channel, adc_atten_t atten);
# 371 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc2_get_raw(adc2_channel_t channel, adc_bits_width_t width_bit, int* raw_out);
# 387 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/adc.h"
esp_err_t adc2_vref_to_gpio(gpio_num_t gpio);
# 100 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h" 1
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/i2s_periph.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/i2s_periph.h"
       
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/i2s_struct.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/i2s_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/i2s_reg.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/i2s_periph.h" 2
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h"
       
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/rtc_io_reg.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/rtc_io_struct.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/rtc_cntl_reg.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/rtc_cntl_struct.h" 1
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/rtc_gpio_channel.h" 1
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h" 2
# 35 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h"
typedef struct {
    uint32_t reg;
    uint32_t mux;
    uint32_t func;
    uint32_t ie;
    uint32_t pullup;
    uint32_t pulldown;
    uint32_t slpsel;
    uint32_t slpie;
    uint32_t hold;
    uint32_t hold_force;
    uint32_t drv_v;
    uint32_t drv_s;
    int rtc_num;
} rtc_gpio_desc_t;
# 58 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/rtc_periph.h"
extern const rtc_gpio_desc_t rtc_gpio_desc[40];
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h" 2



# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/periph_ctrl.h" 1
# 34 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/periph_ctrl.h"
void periph_module_enable(periph_module_t periph);
# 46 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/periph_ctrl.h"
void periph_module_disable(periph_module_t periph);
# 60 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/periph_ctrl.h"
void periph_module_reset(periph_module_t periph);
# 27 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/semphr.h" 1
# 29 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h" 2
# 38 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
typedef enum {
    I2S_BITS_PER_SAMPLE_8BIT = 8,
    I2S_BITS_PER_SAMPLE_16BIT = 16,
    I2S_BITS_PER_SAMPLE_24BIT = 24,
    I2S_BITS_PER_SAMPLE_32BIT = 32,
} i2s_bits_per_sample_t;





typedef enum {
    I2S_CHANNEL_MONO = 1,
    I2S_CHANNEL_STEREO = 2
} i2s_channel_t;





typedef enum {
    I2S_COMM_FORMAT_I2S = 0x01,
    I2S_COMM_FORMAT_I2S_MSB = 0x02,
    I2S_COMM_FORMAT_I2S_LSB = 0x04,
    I2S_COMM_FORMAT_PCM = 0x08,
    I2S_COMM_FORMAT_PCM_SHORT = 0x10,
    I2S_COMM_FORMAT_PCM_LONG = 0x20,
} i2s_comm_format_t;





typedef enum {
    I2S_CHANNEL_FMT_RIGHT_LEFT = 0x00,
    I2S_CHANNEL_FMT_ALL_RIGHT,
    I2S_CHANNEL_FMT_ALL_LEFT,
    I2S_CHANNEL_FMT_ONLY_RIGHT,
    I2S_CHANNEL_FMT_ONLY_LEFT,
} i2s_channel_fmt_t;





typedef enum {
    PDM_SAMPLE_RATE_RATIO_64,
    PDM_SAMPLE_RATE_RATIO_128,
} pdm_sample_rate_ratio_t;





typedef enum {
    PDM_PCM_CONV_ENABLE,
    PDM_PCM_CONV_DISABLE,
} pdm_pcm_conv_t;






typedef enum {
    I2S_NUM_0 = 0x0,
    I2S_NUM_1 = 0x1,
    I2S_NUM_MAX,
} i2s_port_t;







typedef enum {
    I2S_MODE_MASTER = 1,
    I2S_MODE_SLAVE = 2,
    I2S_MODE_TX = 4,
    I2S_MODE_RX = 8,
    I2S_MODE_DAC_BUILT_IN = 16,
    I2S_MODE_ADC_BUILT_IN = 32,
    I2S_MODE_PDM = 64,
} i2s_mode_t;







typedef struct {
    i2s_mode_t mode;
    int sample_rate;
    i2s_bits_per_sample_t bits_per_sample;
    i2s_channel_fmt_t channel_format;
    i2s_comm_format_t communication_format;
    int intr_alloc_flags;
    int dma_buf_count;
    int dma_buf_len;
    bool use_apll;
    bool tx_desc_auto_clear;
    int fixed_mclk;
} i2s_config_t;





typedef enum {
    I2S_EVENT_DMA_ERROR,
    I2S_EVENT_TX_DONE,
    I2S_EVENT_RX_DONE,
    I2S_EVENT_MAX,
} i2s_event_type_t;






typedef enum {
    I2S_DAC_CHANNEL_DISABLE = 0,
    I2S_DAC_CHANNEL_RIGHT_EN = 1,
    I2S_DAC_CHANNEL_LEFT_EN = 2,
    I2S_DAC_CHANNEL_BOTH_EN = 0x3,
    I2S_DAC_CHANNEL_MAX = 0x4,
} i2s_dac_mode_t;





typedef struct {
    i2s_event_type_t type;
    size_t size;
} i2s_event_t;







typedef struct {
    int bck_io_num;
    int ws_io_num;
    int data_out_num;
    int data_in_num;
} i2s_pin_config_t;




typedef enum {
    I2S_PDM_DSR_8S = 0,
    I2S_PDM_DSR_16S,
    I2S_PDM_DSR_MAX,
} i2s_pdm_dsr_t;

typedef intr_handle_t i2s_isr_handle_t;
# 222 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_set_pin(i2s_port_t i2s_num, const i2s_pin_config_t *pin);
# 241 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_set_pdm_rx_down_sample(i2s_port_t i2s_num, i2s_pdm_dsr_t dsr);
# 256 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_set_dac_mode(i2s_dac_mode_t dac_mode);
# 276 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_driver_install(i2s_port_t i2s_num, const i2s_config_t *i2s_config, int queue_size, void* i2s_queue);
# 287 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_driver_uninstall(i2s_port_t i2s_num);
# 311 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_write(i2s_port_t i2s_num, const void *src, size_t size, size_t *bytes_written, TickType_t ticks_to_wait);
# 342 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_write_expand(i2s_port_t i2s_num, const void *src, size_t size, size_t src_bits, size_t aim_bits, size_t *bytes_written, TickType_t ticks_to_wait);
# 364 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_read(i2s_port_t i2s_num, void *dest, size_t size, size_t *bytes_read, TickType_t ticks_to_wait);
# 382 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_set_sample_rates(i2s_port_t i2s_num, uint32_t rate);
# 395 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_stop(i2s_port_t i2s_num);
# 409 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_start(i2s_port_t i2s_num);
# 422 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_zero_dma_buffer(i2s_port_t i2s_num);
# 442 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_set_clk(i2s_port_t i2s_num, uint32_t rate, i2s_bits_per_sample_t bits, i2s_channel_t ch);
# 452 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
float i2s_get_clk(i2s_port_t i2s_num);
# 463 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_set_adc_mode(adc_unit_t adc_unit, adc1_channel_t adc_channel);
# 476 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_adc_enable(i2s_port_t i2s_num);
# 487 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/i2s.h"
esp_err_t i2s_adc_disable(i2s_port_t i2s_num);
# 101 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h" 1
# 11 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/pcnt_periph.h" 1
# 15 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/pcnt_periph.h"
       
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/pcnt_reg.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/pcnt_periph.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/esp32/include/soc/pcnt_struct.h" 1
# 17 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/soc/include/soc/pcnt_periph.h" 2
# 12 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h" 2
# 24 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
typedef enum {
    PCNT_MODE_KEEP = 0,
    PCNT_MODE_REVERSE = 1,
    PCNT_MODE_DISABLE = 2,
    PCNT_MODE_MAX
} pcnt_ctrl_mode_t;





typedef enum {
    PCNT_COUNT_DIS = 0,
    PCNT_COUNT_INC = 1,
    PCNT_COUNT_DEC = 2,
    PCNT_COUNT_MAX
} pcnt_count_mode_t;




typedef enum {
    PCNT_UNIT_0 = 0,
    PCNT_UNIT_1 = 1,
    PCNT_UNIT_2 = 2,
    PCNT_UNIT_3 = 3,
    PCNT_UNIT_4 = 4,
    PCNT_UNIT_5 = 5,
    PCNT_UNIT_6 = 6,
    PCNT_UNIT_7 = 7,
    PCNT_UNIT_MAX,
} pcnt_unit_t;




typedef enum {
    PCNT_CHANNEL_0 = 0x00,
    PCNT_CHANNEL_1 = 0x01,
    PCNT_CHANNEL_MAX,
} pcnt_channel_t;




typedef enum {
    PCNT_EVT_L_LIM = 0,
    PCNT_EVT_H_LIM = 1,
    PCNT_EVT_THRES_0 = 2,
    PCNT_EVT_THRES_1 = 3,
    PCNT_EVT_ZERO = 4,
    PCNT_EVT_MAX
} pcnt_evt_type_t;




typedef struct {
    int pulse_gpio_num;
    int ctrl_gpio_num;
    pcnt_ctrl_mode_t lctrl_mode;
    pcnt_ctrl_mode_t hctrl_mode;
    pcnt_count_mode_t pos_mode;
    pcnt_count_mode_t neg_mode;
    int16_t counter_h_lim;
    int16_t counter_l_lim;
    pcnt_unit_t unit;
    pcnt_channel_t channel;
} pcnt_config_t;

typedef intr_handle_t pcnt_isr_handle_t;
# 107 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_unit_config(const pcnt_config_t *pcnt_config);
# 119 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_get_counter_value(pcnt_unit_t pcnt_unit, int16_t* count);
# 130 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_counter_pause(pcnt_unit_t pcnt_unit);
# 141 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_counter_resume(pcnt_unit_t pcnt_unit);
# 152 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_counter_clear(pcnt_unit_t pcnt_unit);
# 166 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_intr_enable(pcnt_unit_t pcnt_unit);
# 177 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_intr_disable(pcnt_unit_t pcnt_unit);
# 189 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_event_enable(pcnt_unit_t unit, pcnt_evt_type_t evt_type);
# 201 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_event_disable(pcnt_unit_t unit, pcnt_evt_type_t evt_type);
# 216 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_set_event_value(pcnt_unit_t unit, pcnt_evt_type_t evt_type, int16_t value);
# 230 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_get_event_value(pcnt_unit_t unit, pcnt_evt_type_t evt_type, int16_t *value);
# 250 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_isr_register(void (*fn)(void*), void * arg, int intr_alloc_flags, pcnt_isr_handle_t *handle);
# 266 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_set_pin(pcnt_unit_t unit, pcnt_channel_t channel, int pulse_io, int ctrl_io);
# 277 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_filter_enable(pcnt_unit_t unit);
# 288 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_filter_disable(pcnt_unit_t unit);
# 303 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_set_filter_value(pcnt_unit_t unit, uint16_t filter_val);
# 315 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_get_filter_value(pcnt_unit_t unit, uint16_t *filter_val);
# 331 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_set_mode(pcnt_unit_t unit, pcnt_channel_t channel,
                        pcnt_count_mode_t pos_mode, pcnt_count_mode_t neg_mode,
                        pcnt_ctrl_mode_t hctrl_mode, pcnt_ctrl_mode_t lctrl_mode);
# 358 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_isr_handler_add(pcnt_unit_t unit, void(*isr_handler)(void *), void *args);
# 374 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_isr_service_install(int intr_alloc_flags);




void pcnt_isr_service_uninstall(void);
# 390 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/driver/include/driver/pcnt.h"
esp_err_t pcnt_isr_handler_remove(pcnt_unit_t unit);
# 102 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h" 1
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h" 2
# 1 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/queue.h" 1 3 4
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_wifi_types.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_wifi_types.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_private/esp_wifi_types_private.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_private/esp_wifi_types_private.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_private/esp_wifi_types_private.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_private/esp_wifi_types_private.h" 2


# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_interface.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_interface.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_interface.h" 2





typedef enum {
    ESP_IF_WIFI_STA = 0,
    ESP_IF_WIFI_AP,
    ESP_IF_ETH,
    ESP_IF_MAX
} esp_interface_t;
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_private/esp_wifi_types_private.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_event/include/esp_event_base.h" 1
# 27 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_event/include/esp_event_base.h"
typedef const char* esp_event_base_t;
typedef void* esp_event_loop_handle_t;
typedef void (*esp_event_handler_t)(void* event_handler_arg,
                                        esp_event_base_t event_base,
                                        int32_t event_id,
                                        void* event_data);
# 24 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_private/esp_wifi_types_private.h" 2
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_wifi_types.h" 2





typedef enum {
    WIFI_MODE_NULL = 0,
    WIFI_MODE_STA,
    WIFI_MODE_AP,
    WIFI_MODE_APSTA,
    WIFI_MODE_MAX
} wifi_mode_t;

typedef esp_interface_t wifi_interface_t;




typedef enum {
    WIFI_COUNTRY_POLICY_AUTO,
    WIFI_COUNTRY_POLICY_MANUAL,
} wifi_country_policy_t;


typedef struct {
    char cc[3];
    uint8_t schan;
    uint8_t nchan;
    int8_t max_tx_power;
    wifi_country_policy_t policy;
} wifi_country_t;

typedef enum {
    WIFI_AUTH_OPEN = 0,
    WIFI_AUTH_WEP,
    WIFI_AUTH_WPA_PSK,
    WIFI_AUTH_WPA2_PSK,
    WIFI_AUTH_WPA_WPA2_PSK,
    WIFI_AUTH_WPA2_ENTERPRISE,
    WIFI_AUTH_WPA3_PSK,
    WIFI_AUTH_WPA2_WPA3_PSK,
    WIFI_AUTH_MAX
} wifi_auth_mode_t;

typedef enum {
    WIFI_REASON_UNSPECIFIED = 1,
    WIFI_REASON_AUTH_EXPIRE = 2,
    WIFI_REASON_AUTH_LEAVE = 3,
    WIFI_REASON_ASSOC_EXPIRE = 4,
    WIFI_REASON_ASSOC_TOOMANY = 5,
    WIFI_REASON_NOT_AUTHED = 6,
    WIFI_REASON_NOT_ASSOCED = 7,
    WIFI_REASON_ASSOC_LEAVE = 8,
    WIFI_REASON_ASSOC_NOT_AUTHED = 9,
    WIFI_REASON_DISASSOC_PWRCAP_BAD = 10,
    WIFI_REASON_DISASSOC_SUPCHAN_BAD = 11,
    WIFI_REASON_IE_INVALID = 13,
    WIFI_REASON_MIC_FAILURE = 14,
    WIFI_REASON_4WAY_HANDSHAKE_TIMEOUT = 15,
    WIFI_REASON_GROUP_KEY_UPDATE_TIMEOUT = 16,
    WIFI_REASON_IE_IN_4WAY_DIFFERS = 17,
    WIFI_REASON_GROUP_CIPHER_INVALID = 18,
    WIFI_REASON_PAIRWISE_CIPHER_INVALID = 19,
    WIFI_REASON_AKMP_INVALID = 20,
    WIFI_REASON_UNSUPP_RSN_IE_VERSION = 21,
    WIFI_REASON_INVALID_RSN_IE_CAP = 22,
    WIFI_REASON_802_1X_AUTH_FAILED = 23,
    WIFI_REASON_CIPHER_SUITE_REJECTED = 24,

    WIFI_REASON_INVALID_PMKID = 53,

    WIFI_REASON_BEACON_TIMEOUT = 200,
    WIFI_REASON_NO_AP_FOUND = 201,
    WIFI_REASON_AUTH_FAIL = 202,
    WIFI_REASON_ASSOC_FAIL = 203,
    WIFI_REASON_HANDSHAKE_TIMEOUT = 204,
    WIFI_REASON_CONNECTION_FAIL = 205,
} wifi_err_reason_t;

typedef enum {
    WIFI_SECOND_CHAN_NONE = 0,
    WIFI_SECOND_CHAN_ABOVE,
    WIFI_SECOND_CHAN_BELOW,
} wifi_second_chan_t;

typedef enum {
    WIFI_SCAN_TYPE_ACTIVE = 0,
    WIFI_SCAN_TYPE_PASSIVE,
} wifi_scan_type_t;


typedef struct {
    uint32_t min;
    uint32_t max;

} wifi_active_scan_time_t;


typedef union {
    wifi_active_scan_time_t active;
    uint32_t passive;

} wifi_scan_time_t;


typedef struct {
    uint8_t *ssid;
    uint8_t *bssid;
    uint8_t channel;
    bool show_hidden;
    wifi_scan_type_t scan_type;
    wifi_scan_time_t scan_time;
} wifi_scan_config_t;

typedef enum {
    WIFI_CIPHER_TYPE_NONE = 0,
    WIFI_CIPHER_TYPE_WEP40,
    WIFI_CIPHER_TYPE_WEP104,
    WIFI_CIPHER_TYPE_TKIP,
    WIFI_CIPHER_TYPE_CCMP,
    WIFI_CIPHER_TYPE_TKIP_CCMP,
    WIFI_CIPHER_TYPE_AES_CMAC128,
    WIFI_CIPHER_TYPE_UNKNOWN,
} wifi_cipher_type_t;





typedef enum {
    WIFI_ANT_ANT0,
    WIFI_ANT_ANT1,
    WIFI_ANT_MAX,
} wifi_ant_t;


typedef struct {
    uint8_t bssid[6];
    uint8_t ssid[33];
    uint8_t primary;
    wifi_second_chan_t second;
    int8_t rssi;
    wifi_auth_mode_t authmode;
    wifi_cipher_type_t pairwise_cipher;
    wifi_cipher_type_t group_cipher;
    wifi_ant_t ant;
    uint32_t phy_11b:1;
    uint32_t phy_11g:1;
    uint32_t phy_11n:1;
    uint32_t phy_lr:1;
    uint32_t wps:1;
    uint32_t reserved:27;
    wifi_country_t country;
} wifi_ap_record_t;

typedef enum {
    WIFI_FAST_SCAN = 0,
    WIFI_ALL_CHANNEL_SCAN,
}wifi_scan_method_t;

typedef enum {
    WIFI_CONNECT_AP_BY_SIGNAL = 0,
    WIFI_CONNECT_AP_BY_SECURITY,
}wifi_sort_method_t;


typedef struct {
    int8_t rssi;
    wifi_auth_mode_t authmode;
}wifi_scan_threshold_t;

typedef enum {
    WIFI_PS_NONE,
    WIFI_PS_MIN_MODEM,
    WIFI_PS_MAX_MODEM,
} wifi_ps_type_t;






typedef enum {
    WIFI_BW_HT20 = 1,
    WIFI_BW_HT40,
} wifi_bandwidth_t;


typedef struct {
    bool capable;
    bool required;
} wifi_pmf_config_t;


typedef struct {
    uint8_t ssid[32];
    uint8_t password[64];
    uint8_t ssid_len;
    uint8_t channel;
    wifi_auth_mode_t authmode;
    uint8_t ssid_hidden;
    uint8_t max_connection;
    uint16_t beacon_interval;
} wifi_ap_config_t;


typedef struct {
    uint8_t ssid[32];
    uint8_t password[64];
    wifi_scan_method_t scan_method;
    bool bssid_set;
    uint8_t bssid[6];
    uint8_t channel;
    uint16_t listen_interval;
    wifi_sort_method_t sort_method;
    wifi_scan_threshold_t threshold;
    wifi_pmf_config_t pmf_cfg;
} wifi_sta_config_t;







typedef union {
    wifi_ap_config_t ap;
    wifi_sta_config_t sta;
} wifi_config_t;


typedef struct {
    uint8_t mac[6];
    int8_t rssi;
    uint32_t phy_11b:1;
    uint32_t phy_11g:1;
    uint32_t phy_11n:1;
    uint32_t phy_lr:1;
    uint32_t reserved:28;
} wifi_sta_info_t;




typedef struct {
    wifi_sta_info_t sta[(10)];
    int num;
} wifi_sta_list_t;

typedef enum {
    WIFI_STORAGE_FLASH,
    WIFI_STORAGE_RAM,
} wifi_storage_t;






typedef enum {
    WIFI_VND_IE_TYPE_BEACON,
    WIFI_VND_IE_TYPE_PROBE_REQ,
    WIFI_VND_IE_TYPE_PROBE_RESP,
    WIFI_VND_IE_TYPE_ASSOC_REQ,
    WIFI_VND_IE_TYPE_ASSOC_RESP,
} wifi_vendor_ie_type_t;






typedef enum {
    WIFI_VND_IE_ID_0,
    WIFI_VND_IE_ID_1,
} wifi_vendor_ie_id_t;
# 304 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_wifi_types.h"
typedef struct {
    uint8_t element_id;
    uint8_t length;
    uint8_t vendor_oui[3];
    uint8_t vendor_oui_type;
    uint8_t payload[0];
} vendor_ie_data_t;


typedef struct {
    signed rssi:8;
    unsigned rate:5;
    unsigned :1;
    unsigned sig_mode:2;
    unsigned :16;
    unsigned mcs:7;
    unsigned cwb:1;
    unsigned :16;
    unsigned smoothing:1;
    unsigned not_sounding:1;
    unsigned :1;
    unsigned aggregation:1;
    unsigned stbc:2;
    unsigned fec_coding:1;
    unsigned sgi:1;
    signed noise_floor:8;
    unsigned ampdu_cnt:8;
    unsigned channel:4;
    unsigned secondary_channel:4;
    unsigned :8;
    unsigned timestamp:32;
    unsigned :32;
    unsigned :31;
    unsigned ant:1;
    unsigned sig_len:12;
    unsigned :12;
    unsigned rx_state:8;
} wifi_pkt_rx_ctrl_t;



typedef struct {
    wifi_pkt_rx_ctrl_t rx_ctrl;
    uint8_t payload[0];
} wifi_promiscuous_pkt_t;







typedef enum {
    WIFI_PKT_MGMT,
    WIFI_PKT_CTRL,
    WIFI_PKT_DATA,
    WIFI_PKT_MISC,
} wifi_promiscuous_pkt_type_t;
# 384 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_wifi_types.h"
typedef struct {
    uint32_t filter_mask;
} wifi_promiscuous_filter_t;
# 396 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_wifi/include/esp_wifi_types.h"
typedef struct {
    bool lltf_en;
    bool htltf_en;
    bool stbc_htltf2_en;
    bool ltf_merge_en;
    bool channel_filter_en;
    bool manu_scale;
    uint8_t shift;
} wifi_csi_config_t;





typedef struct {
    wifi_pkt_rx_ctrl_t rx_ctrl;
    uint8_t mac[6];
    bool first_word_invalid;
    int8_t *buf;
    uint16_t len;
} wifi_csi_info_t;





typedef struct {
    uint8_t gpio_select: 1,
            gpio_num: 7;
} wifi_ant_gpio_t;





typedef struct {
    wifi_ant_gpio_t gpio_cfg[4];
} wifi_ant_gpio_config_t;





typedef enum {
    WIFI_ANT_MODE_ANT0,
    WIFI_ANT_MODE_ANT1,
    WIFI_ANT_MODE_AUTO,
    WIFI_ANT_MODE_MAX,
} wifi_ant_mode_t;





typedef struct {
    wifi_ant_mode_t rx_ant_mode;
    wifi_ant_t rx_ant_default;
    wifi_ant_mode_t tx_ant_mode;
    uint8_t enabled_ant0: 4,
                    enabled_ant1: 4;
} wifi_ant_config_t;





typedef enum {
    WIFI_PHY_RATE_1M_L = 0x00,
    WIFI_PHY_RATE_2M_L = 0x01,
    WIFI_PHY_RATE_5M_L = 0x02,
    WIFI_PHY_RATE_11M_L = 0x03,
    WIFI_PHY_RATE_2M_S = 0x05,
    WIFI_PHY_RATE_5M_S = 0x06,
    WIFI_PHY_RATE_11M_S = 0x07,
    WIFI_PHY_RATE_48M = 0x08,
    WIFI_PHY_RATE_24M = 0x09,
    WIFI_PHY_RATE_12M = 0x0A,
    WIFI_PHY_RATE_6M = 0x0B,
    WIFI_PHY_RATE_54M = 0x0C,
    WIFI_PHY_RATE_36M = 0x0D,
    WIFI_PHY_RATE_18M = 0x0E,
    WIFI_PHY_RATE_9M = 0x0F,
    WIFI_PHY_RATE_MCS0_LGI = 0x10,
    WIFI_PHY_RATE_MCS1_LGI = 0x11,
    WIFI_PHY_RATE_MCS2_LGI = 0x12,
    WIFI_PHY_RATE_MCS3_LGI = 0x13,
    WIFI_PHY_RATE_MCS4_LGI = 0x14,
    WIFI_PHY_RATE_MCS5_LGI = 0x15,
    WIFI_PHY_RATE_MCS6_LGI = 0x16,
    WIFI_PHY_RATE_MCS7_LGI = 0x17,
    WIFI_PHY_RATE_MCS0_SGI = 0x18,
    WIFI_PHY_RATE_MCS1_SGI = 0x19,
    WIFI_PHY_RATE_MCS2_SGI = 0x1A,
    WIFI_PHY_RATE_MCS3_SGI = 0x1B,
    WIFI_PHY_RATE_MCS4_SGI = 0x1C,
    WIFI_PHY_RATE_MCS5_SGI = 0x1D,
    WIFI_PHY_RATE_MCS6_SGI = 0x1E,
    WIFI_PHY_RATE_MCS7_SGI = 0x1F,
    WIFI_PHY_RATE_LORA_250K = 0x29,
    WIFI_PHY_RATE_LORA_500K = 0x2A,
    WIFI_PHY_RATE_MAX,
} wifi_phy_rate_t;



typedef enum {
    WIFI_EVENT_WIFI_READY = 0,
    WIFI_EVENT_SCAN_DONE,
    WIFI_EVENT_STA_START,
    WIFI_EVENT_STA_STOP,
    WIFI_EVENT_STA_CONNECTED,
    WIFI_EVENT_STA_DISCONNECTED,
    WIFI_EVENT_STA_AUTHMODE_CHANGE,

    WIFI_EVENT_STA_WPS_ER_SUCCESS,
    WIFI_EVENT_STA_WPS_ER_FAILED,
    WIFI_EVENT_STA_WPS_ER_TIMEOUT,
    WIFI_EVENT_STA_WPS_ER_PIN,
    WIFI_EVENT_STA_WPS_ER_PBC_OVERLAP,

    WIFI_EVENT_AP_START,
    WIFI_EVENT_AP_STOP,
    WIFI_EVENT_AP_STACONNECTED,
    WIFI_EVENT_AP_STADISCONNECTED,

    WIFI_EVENT_AP_PROBEREQRECVED,
} wifi_event_t;



extern esp_event_base_t WIFI_EVENT;



typedef struct {
    uint32_t status;
    uint8_t number;
    uint8_t scan_id;
} wifi_event_sta_scan_done_t;


typedef struct {
    uint8_t ssid[32];
    uint8_t ssid_len;
    uint8_t bssid[6];
    uint8_t channel;
    wifi_auth_mode_t authmode;
} wifi_event_sta_connected_t;


typedef struct {
    uint8_t ssid[32];
    uint8_t ssid_len;
    uint8_t bssid[6];
    uint8_t reason;
} wifi_event_sta_disconnected_t;


typedef struct {
    wifi_auth_mode_t old_mode;
    wifi_auth_mode_t new_mode;
} wifi_event_sta_authmode_change_t;


typedef struct {
    uint8_t pin_code[8];
} wifi_event_sta_wps_er_pin_t;


typedef enum {
    WPS_FAIL_REASON_NORMAL = 0,
    WPS_FAIL_REASON_RECV_M2D,
    WPS_FAIL_REASON_MAX
} wifi_event_sta_wps_fail_reason_t;


typedef struct {
    uint8_t mac[6];
    uint8_t aid;
} wifi_event_ap_staconnected_t;


typedef struct {
    uint8_t mac[6];
    uint8_t aid;
} wifi_event_ap_stadisconnected_t;


typedef struct {
    int rssi;
    uint8_t mac[6];
} wifi_event_ap_probe_req_rx_t;
# 21 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h" 2



# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h" 1
# 40 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/opt.h" 1
# 51 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/opt.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 1
# 35 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdlib.h" 1
# 36 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/time.h" 1
# 37 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/unistd.h" 1
# 38 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/time.h" 1
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/_fake_defines.h" 1
# 2 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/time.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/_fake_typedefs.h" 1
# 2 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/time.h" 2
# 39 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "/home/uli/.espressif/tools/xtensa-esp32-elf/esp-2019r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/sys-include/sys/fcntl.h" 1 3 4
# 40 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/ioctl.h" 1
# 41 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/types.h" 1
# 42 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/select.h" 1
# 43 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_task.h" 1
# 30 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_task.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/FreeRTOSConfig.h" 1
# 106 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/FreeRTOSConfig.h"
int xt_clock_freq(void) ;







# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_config.h" 1
# 40 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_config.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/hal.h" 1
# 41 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_config.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h" 1
# 42 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/xtensa-versions.h" 1
# 43 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h" 2







# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core-isa.h" 1
# 51 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core-matmap.h" 1
# 52 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/tie.h" 1
# 53 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h" 2
# 1279 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/core.h"
extern const unsigned char Xthal_cp_id_FPU;
extern const unsigned int Xthal_cp_mask_FPU;


extern const unsigned char Xthal_cp_id_XCHAL_CP1_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP1_IDENT;


extern const unsigned char Xthal_cp_id_XCHAL_CP2_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP2_IDENT;


extern const unsigned char Xthal_cp_id_XCHAL_CP3_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP3_IDENT;


extern const unsigned char Xthal_cp_id_XCHAL_CP4_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP4_IDENT;


extern const unsigned char Xthal_cp_id_XCHAL_CP5_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP5_IDENT;


extern const unsigned char Xthal_cp_id_XCHAL_CP6_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP6_IDENT;


extern const unsigned char Xthal_cp_id_XCHAL_CP7_IDENT;
extern const unsigned int Xthal_cp_mask_XCHAL_CP7_IDENT;
# 42 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_config.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/esp32/include/xtensa/config/system.h" 1
# 43 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_config.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h" 1
# 45 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/corebits.h" 1
# 46 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/xtruntime-frames.h" 1
# 56 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/xtruntime-frames.h"
typedef struct {
long pc;
long ps;
long areg[4];
long sar;

long lcount;
long lbeg;
long lend;


long acclo;
long acchi;
long mr[4];

} KernelFrame;
# 80 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/xtruntime-frames.h"
typedef struct {
long pc;
long ps;
long sar;
long vpri;



long a2;
long a3;
long a4;
long a5;
# 104 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/xtruntime-frames.h"
long exccause;

long lcount;
long lbeg;
long lend;


long acclo;
long acchi;
long mr[4];
# 123 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/xtensa/include/xtensa/xtruntime-frames.h"
long pad[((3 + 1*1 + 1*2 + 0*1) & 3)];


} UserFrame;
# 48 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h" 2
# 103 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h"
typedef struct {
long exit;
long pc;
long ps;
long a0;
long a1;
long a2;
long a3;
long a4;
long a5;
long a6;
long a7;
long a8;
long a9;
long a10;
long a11;
long a12;
long a13;
long a14;
long a15;
long sar;
long exccause;
long excvaddr;

long lbeg;
long lend;
long lcount;



long tmp0;
long tmp1;
long tmp2;
# 145 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h"
} XtExcFrame;
# 202 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h"
typedef struct {
# 213 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_context.h"
long exit;
long pc;
long ps;
long next;
long a0;
long a1;
long a2;
long a3;

} XtSolFrame;
# 45 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/xtensa_config.h" 2
# 115 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/FreeRTOSConfig.h" 2




# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdlib.h" 1
# 120 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/FreeRTOSConfig.h" 2
# 279 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/freertos/include/freertos/FreeRTOSConfig.h"
extern void vPortCleanUpTCB ( void *pxTCB );
# 31 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_task.h" 2
# 44 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h" 1
# 18 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdbool.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h" 2
# 31 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
typedef enum {
    ESP_MAC_WIFI_STA,
    ESP_MAC_WIFI_SOFTAP,
    ESP_MAC_BT,
    ESP_MAC_ETH,
} esp_mac_type_t;
# 47 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
typedef enum {
    ESP_RST_UNKNOWN,
    ESP_RST_POWERON,
    ESP_RST_EXT,
    ESP_RST_SW,
    ESP_RST_PANIC,
    ESP_RST_INT_WDT,
    ESP_RST_TASK_WDT,
    ESP_RST_WDT,
    ESP_RST_DEEPSLEEP,
    ESP_RST_BROWNOUT,
    ESP_RST_SDIO,
} esp_reset_reason_t;




typedef void (*shutdown_handler_t)(void);
# 77 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_register_shutdown_handler(shutdown_handler_t handle);
# 87 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_unregister_shutdown_handler(shutdown_handler_t handle);
# 98 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
void esp_restart(void) ;





esp_reset_reason_t esp_reset_reason(void);
# 114 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
uint32_t esp_get_free_heap_size(void);






uint32_t esp_get_minimum_free_heap_size( void );
# 139 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
uint32_t esp_random(void);
# 149 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
void esp_fill_random(void *buf, size_t len);
# 164 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_base_mac_addr_set(uint8_t *mac);
# 174 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_base_mac_addr_get(uint8_t *mac);
# 190 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_efuse_mac_get_custom(uint8_t *mac);
# 199 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_efuse_mac_get_default(uint8_t *mac);
# 213 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_read_mac(uint8_t* mac, esp_mac_type_t type);
# 229 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
esp_err_t esp_derive_local_mac(uint8_t* local_mac, const uint8_t* universal_mac);




typedef enum {
    CHIP_ESP32 = 1,
} esp_chip_model_t;
# 247 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_common/include/esp_system.h"
typedef struct {
    esp_chip_model_t model;
    uint32_t features;
    uint8_t cores;
    uint8_t revision;
} esp_chip_info_t;





void esp_chip_info(esp_chip_info_t* out_info);
# 45 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/include/apps/sntp/sntp.h" 1
# 47 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/netif/dhcp_state.h" 1
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/netif/dhcp_state.h"
bool dhcp_ip_addr_restore(void *netif);

void dhcp_ip_addr_store(void *netif);

void dhcp_ip_addr_erase(void *netif);
# 48 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/lwipopts.h" 2
# 52 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/opt.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/debug.h" 1
# 40 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/debug.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 1
# 48 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 1
# 37 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 38 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/errno.h" 1
# 39 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/assert.h" 1
# 40 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 2
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdio.h" 1
# 41 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/sys_arch.h" 1
# 43 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 2





typedef uint8_t u8_t;
typedef int8_t s8_t;
typedef uint16_t u16_t;
typedef int16_t s16_t;
typedef uint32_t u32_t;
typedef int32_t s32_t;


typedef int sys_prot_t;
# 71 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdio.h" 1
# 72 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/port/esp32/include/arch/cc.h" 2
# 49 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 2
# 107 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stddef.h" 1
# 108 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 2
# 120 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 121 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 2




typedef uint8_t u8_t;
typedef int8_t s8_t;
typedef uint16_t u16_t;
typedef int16_t s16_t;
typedef uint32_t u32_t;
typedef int32_t s32_t;




typedef uintptr_t mem_ptr_t;
# 148 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/inttypes.h" 1
# 149 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 2
# 185 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/limits.h" 1
# 186 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 2
# 202 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
typedef int ssize_t;
# 228 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/ctype.h" 1
# 229 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/arch.h" 2
# 41 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/debug.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/opt.h" 1
# 42 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/debug.h" 2
# 53 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/opt.h" 2
# 41 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/def.h" 1
# 96 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/def.h"
u16_t lwip_htons(u16_t x);




u32_t lwip_htonl(u32_t x);
# 133 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/def.h"
void lwip_itoa(char* result, size_t bufsize, int number);



int lwip_strnicmp(const char* str1, const char* str2, size_t len);



int lwip_stricmp(const char* str1, const char* str2);



char* lwip_strnstr(const char* buffer, const char* token, size_t n);
# 42 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h" 2

# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip4_addr.h" 1
# 51 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip4_addr.h"
struct ip4_addr {
  u32_t addr;
};



typedef struct ip4_addr ip4_addr_t;


struct netif;
# 151 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip4_addr.h"
u8_t ip4_addr_isbroadcast_u32(u32_t addr, const struct netif *netif);


u8_t ip4_addr_netmask_valid(u32_t netmask);
# 204 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip4_addr.h"
u32_t ipaddr_addr(const char *cp);
int ip4addr_aton(const char *cp, ip4_addr_t *addr);

char *ip4addr_ntoa(const ip4_addr_t *addr);
char *ip4addr_ntoa_r(const ip4_addr_t *addr, char *buf, int buflen);
# 44 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_addr.h" 1
# 46 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_addr.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/def.h" 1
# 47 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_addr.h" 2



# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_zone.h" 1
# 136 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_zone.h"
enum lwip_ipv6_scope_type
{

  IP6_UNKNOWN = 0,

  IP6_UNICAST = 1,

  IP6_MULTICAST = 2
};
# 51 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_addr.h" 2
# 59 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_addr.h"
struct ip6_addr {
  u32_t addr[4];

  u8_t zone;

};


typedef struct ip6_addr ip6_addr_t;
# 339 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip6_addr.h"
int ip6addr_aton(const char *cp, ip6_addr_t *addr);

char *ip6addr_ntoa(const ip6_addr_t *addr);
char *ip6addr_ntoa_r(const ip6_addr_t *addr, char *buf, int buflen);
# 45 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h" 2
# 54 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h"
enum lwip_ip_addr_type {

  IPADDR_TYPE_V4 = 0U,

  IPADDR_TYPE_V6 = 6U,

  IPADDR_TYPE_ANY = 46U
};







typedef struct ip_addr {
  union {
    ip6_addr_t ip6;
    ip4_addr_t ip4;
  } u_addr;

  u8_t type;
} ip_addr_t;

extern const ip_addr_t ip_addr_any_type;
# 244 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h"
char *ipaddr_ntoa(const ip_addr_t *addr);
char *ipaddr_ntoa_r(const ip_addr_t *addr, char *buf, int buflen);
int ipaddr_aton(const char *cp, ip_addr_t *addr);
# 374 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h"
extern const ip_addr_t ip_addr_any;
extern const ip_addr_t ip_addr_broadcast;
# 410 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/lwip/src/include/lwip/ip_addr.h"
extern const ip_addr_t ip6_addr_any;
# 25 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/include/apps/dhcpserver/dhcpserver.h" 1
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/lwip/include/apps/dhcpserver/dhcpserver.h"
typedef struct dhcps_state{
        s16_t state;
} dhcps_state;

typedef struct dhcps_msg {
        u8_t op, htype, hlen, hops;
        u8_t xid[4];
        u16_t secs, flags;
        u8_t ciaddr[4];
        u8_t yiaddr[4];
        u8_t siaddr[4];
        u8_t giaddr[4];
        u8_t chaddr[16];
        u8_t sname[64];
        u8_t file[128];
        u8_t options[312];
}dhcps_msg;


typedef struct {
 bool enable;
 ip4_addr_t start_ip;
 ip4_addr_t end_ip;
} dhcps_lease_t;

enum dhcps_offer_option{
 OFFER_START = 0x00,
 OFFER_ROUTER = 0x01,
 OFFER_DNS = 0x02,
 OFFER_END
};






struct dhcps_pool{
 ip4_addr_t ip;
 u8_t mac[6];
 u32_t lease_timer;
};

typedef u32_t dhcps_time_t;
typedef u8_t dhcps_offer_t;

typedef struct {
        dhcps_offer_t dhcps_offer;
        dhcps_offer_t dhcps_dns;
        dhcps_time_t dhcps_time;
        dhcps_lease_t dhcps_poll;
} dhcps_options_t;

typedef void (*dhcps_cb_t)(u8_t client_ip[4]);

static inline bool dhcps_router_enabled (dhcps_offer_t offer)
{
    return (offer & OFFER_ROUTER) != 0;
}

static inline bool dhcps_dns_enabled (dhcps_offer_t offer)
{
    return (offer & OFFER_DNS) != 0;
}

void dhcps_start(struct netif *netif, ip4_addr_t ip);
void dhcps_stop(struct netif *netif);
void *dhcps_option_info(u8_t op_id, u32_t opt_len);
void dhcps_set_option_info(u8_t op_id, void *opt_info, u32_t opt_len);
bool dhcp_search_ip_on_mac(u8_t *mac, ip4_addr_t *ip);
void dhcps_dns_setserver(const ip_addr_t *dnsserver);
ip4_addr_t dhcps_dns_getserver();
void dhcps_set_new_lease_cb(dhcps_cb_t cb);
# 26 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h" 2

typedef dhcps_lease_t tcpip_adapter_dhcps_lease_t;
# 53 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
typedef struct {
    ip4_addr_t ip;
    ip4_addr_t netmask;
    ip4_addr_t gw;
} tcpip_adapter_ip_info_t;



typedef struct {
    ip6_addr_t ip;
} tcpip_adapter_ip6_info_t;





typedef struct {
    uint8_t mac[6];
    ip4_addr_t ip;
} tcpip_adapter_sta_info_t;





typedef struct {
    tcpip_adapter_sta_info_t sta[(10)];
    int num;
} tcpip_adapter_sta_list_t;
# 95 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
typedef enum {
    TCPIP_ADAPTER_IF_STA = 0,
    TCPIP_ADAPTER_IF_AP,
    TCPIP_ADAPTER_IF_ETH,
    TCPIP_ADAPTER_IF_TEST,
    TCPIP_ADAPTER_IF_MAX
} tcpip_adapter_if_t;


typedef enum {
    TCPIP_ADAPTER_DNS_MAIN= 0,
    TCPIP_ADAPTER_DNS_BACKUP,
    TCPIP_ADAPTER_DNS_FALLBACK,
    TCPIP_ADAPTER_DNS_MAX
} tcpip_adapter_dns_type_t;


typedef struct {
    ip_addr_t ip;
} tcpip_adapter_dns_info_t;


typedef enum {
    TCPIP_ADAPTER_DHCP_INIT = 0,
    TCPIP_ADAPTER_DHCP_STARTED,
    TCPIP_ADAPTER_DHCP_STOPPED,
    TCPIP_ADAPTER_DHCP_STATUS_MAX
} tcpip_adapter_dhcp_status_t;


typedef enum{
    TCPIP_ADAPTER_OP_START = 0,
    TCPIP_ADAPTER_OP_SET,
    TCPIP_ADAPTER_OP_GET,
    TCPIP_ADAPTER_OP_MAX
} tcpip_adapter_dhcp_option_mode_t;


typedef tcpip_adapter_dhcp_option_mode_t tcpip_adapter_option_mode_t;


typedef enum{
    TCPIP_ADAPTER_DOMAIN_NAME_SERVER = 6,
    TCPIP_ADAPTER_ROUTER_SOLICITATION_ADDRESS = 32,
    TCPIP_ADAPTER_REQUESTED_IP_ADDRESS = 50,
    TCPIP_ADAPTER_IP_ADDRESS_LEASE_TIME = 51,
    TCPIP_ADAPTER_IP_REQUEST_RETRY_TIME = 52,
} tcpip_adapter_dhcp_option_id_t;


typedef tcpip_adapter_dhcp_option_id_t tcpip_adapter_option_id_t;


typedef enum {
    IP_EVENT_STA_GOT_IP,
    IP_EVENT_STA_LOST_IP,
    IP_EVENT_AP_STAIPASSIGNED,
    IP_EVENT_GOT_IP6,
    IP_EVENT_ETH_GOT_IP,
} ip_event_t;


extern esp_event_base_t IP_EVENT;


typedef struct {
    tcpip_adapter_if_t if_index;
    tcpip_adapter_ip_info_t ip_info;
    bool ip_changed;
} ip_event_got_ip_t;


typedef struct {
    tcpip_adapter_if_t if_index;
    tcpip_adapter_ip6_info_t ip6_info;
} ip_event_got_ip6_t;


typedef struct {
    ip4_addr_t ip;
} ip_event_ap_staipassigned_t;







void tcpip_adapter_init(void);
# 199 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_eth_start(uint8_t *mac, tcpip_adapter_ip_info_t *ip_info, void *args);
# 215 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_sta_start(uint8_t *mac, tcpip_adapter_ip_info_t *ip_info);
# 232 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_ap_start(uint8_t *mac, tcpip_adapter_ip_info_t *ip_info);
# 253 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_stop(tcpip_adapter_if_t tcpip_if);
# 269 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_up(tcpip_adapter_if_t tcpip_if);
# 285 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_down(tcpip_adapter_if_t tcpip_if);
# 302 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_ip_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_ip_info_t *ip_info);
# 327 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_set_ip_info(tcpip_adapter_if_t tcpip_if, const tcpip_adapter_ip_info_t *ip_info);
# 356 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_set_dns_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_dns_type_t type, tcpip_adapter_dns_info_t *dns);
# 374 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_dns_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_dns_type_t type, tcpip_adapter_dns_info_t *dns);
# 391 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_old_ip_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_ip_info_t *ip_info);
# 409 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_set_old_ip_info(tcpip_adapter_if_t tcpip_if, const tcpip_adapter_ip_info_t *ip_info);
# 425 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_create_ip6_linklocal(tcpip_adapter_if_t tcpip_if);
# 440 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_ip6_linklocal(tcpip_adapter_if_t tcpip_if, ip6_addr_t *if_ip6);
# 455 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_ip6_global(tcpip_adapter_if_t tcpip_if, ip6_addr_t *if_ip6);
# 472 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcps_get_status(tcpip_adapter_if_t tcpip_if, tcpip_adapter_dhcp_status_t *status);
# 488 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcps_option(tcpip_adapter_dhcp_option_mode_t opt_op, tcpip_adapter_dhcp_option_id_t opt_id, void *opt_val, uint32_t opt_len);
# 502 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcps_start(tcpip_adapter_if_t tcpip_if);
# 517 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcps_stop(tcpip_adapter_if_t tcpip_if);
# 528 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcpc_get_status(tcpip_adapter_if_t tcpip_if, tcpip_adapter_dhcp_status_t *status);
# 543 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcpc_option(tcpip_adapter_dhcp_option_mode_t opt_op, tcpip_adapter_dhcp_option_id_t opt_id, void *opt_val, uint32_t opt_len);
# 560 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcpc_start(tcpip_adapter_if_t tcpip_if);
# 577 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_dhcpc_stop(tcpip_adapter_if_t tcpip_if);
# 593 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_eth_input(void *buffer, uint16_t len, void *eb);
# 611 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_sta_input(void *buffer, uint16_t len, void *eb);
# 629 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_ap_input(void *buffer, uint16_t len, void *eb);
# 644 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_interface_t tcpip_adapter_get_esp_if(void *dev);
# 657 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_sta_list(const wifi_sta_list_t *wifi_sta_list, tcpip_adapter_sta_list_t *tcpip_sta_list);
# 671 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_set_hostname(tcpip_adapter_if_t tcpip_if, const char *hostname);
# 684 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_hostname(tcpip_adapter_if_t tcpip_if, const char **hostname);
# 699 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_get_netif(tcpip_adapter_if_t tcpip_if, void ** netif);
# 710 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
bool tcpip_adapter_is_netif_up(tcpip_adapter_if_t tcpip_if);
# 724 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
esp_err_t tcpip_adapter_test_start(uint8_t *mac, tcpip_adapter_ip_info_t *ip_info);







esp_err_t tcpip_adapter_set_default_eth_handlers();







esp_err_t tcpip_adapter_clear_default_eth_handlers();







esp_err_t tcpip_adapter_set_default_wifi_handlers();







esp_err_t tcpip_adapter_clear_default_wifi_handlers();
# 765 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/tcpip_adapter/include/tcpip_adapter.h"
int tcpip_adapter_get_netif_index(tcpip_adapter_if_t tcpip_if);
# 22 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_event/include/esp_event.h" 1
# 23 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h" 2
# 36 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
typedef enum {
    MDNS_IP_PROTOCOL_V4,
    MDNS_IP_PROTOCOL_V6,
    MDNS_IP_PROTOCOL_MAX
} mdns_ip_protocol_t;





typedef struct {
    const char * key;
    const char * value;
} mdns_txt_item_t;




typedef struct mdns_ip_addr_s {
    ip_addr_t addr;
    struct mdns_ip_addr_s * next;
} mdns_ip_addr_t;




typedef struct mdns_result_s {
    struct mdns_result_s * next;

    tcpip_adapter_if_t tcpip_if;
    mdns_ip_protocol_t ip_protocol;

    char * instance_name;

    char * hostname;
    uint16_t port;

    mdns_txt_item_t * txt;
    size_t txt_count;

    mdns_ip_addr_t * addr;
} mdns_result_t;
# 88 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_init();





void mdns_free();
# 107 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_hostname_set(const char * hostname);
# 119 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_instance_name_set(const char * instance_name);
# 138 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_add(const char * instance_name, const char * service_type, const char * proto, uint16_t port, mdns_txt_item_t txt[], size_t num_items);
# 152 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_remove(const char * service_type, const char * proto);
# 167 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_instance_name_set(const char * service_type, const char * proto, const char * instance_name);
# 182 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_port_set(const char * service_type, const char * proto, uint16_t port);
# 198 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_txt_set(const char * service_type, const char * proto, mdns_txt_item_t txt[], uint8_t num_items);
# 214 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_txt_item_set(const char * service_type, const char * proto, const char * key, const char * value);
# 229 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_txt_item_remove(const char * service_type, const char * proto, const char * key);
# 238 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_service_remove_all();
# 259 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_query(const char * name, const char * service_type, const char * proto, uint16_t type, uint32_t timeout, size_t max_results, mdns_result_t ** results);






void mdns_query_results_free(mdns_result_t * results);
# 283 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_query_ptr(const char * service_type, const char * proto, uint32_t timeout, size_t max_results, mdns_result_t ** results);
# 300 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_query_srv(const char * instance_name, const char * service_type, const char * proto, uint32_t timeout, mdns_result_t ** result);
# 317 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_query_txt(const char * instance_name, const char * service_type, const char * proto, uint32_t timeout, mdns_result_t ** result);
# 332 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_query_a(const char * host_name, uint32_t timeout, ip4_addr_t * addr);
# 347 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_query_aaaa(const char * host_name, uint32_t timeout, ip6_addr_t * addr);
# 357 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/mdns/include/mdns.h"
esp_err_t mdns_handle_system_event(void *ctx, system_event_t *event);
# 103 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h" 1
# 19 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
# 1 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h" 1
# 32 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/sys/types.h" 1
# 33 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h" 2
# 46 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
# 1 "../../lib/lv_bindings/pycparser/utils/fake_libc_include/stdint.h" 1
# 47 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h" 2
# 67 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
typedef struct http_parser http_parser;
typedef struct http_parser_settings http_parser_settings;
# 89 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
typedef int (*http_data_cb) (http_parser*, const char *at, size_t length);
typedef int (*http_cb) (http_parser*);
# 136 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
enum http_method
  {

  HTTP_DELETE = 0, HTTP_GET = 1, HTTP_HEAD = 2, HTTP_POST = 3, HTTP_PUT = 4, HTTP_CONNECT = 5, HTTP_OPTIONS = 6, HTTP_TRACE = 7, HTTP_COPY = 8, HTTP_LOCK = 9, HTTP_MKCOL = 10, HTTP_MOVE = 11, HTTP_PROPFIND = 12, HTTP_PROPPATCH = 13, HTTP_SEARCH = 14, HTTP_UNLOCK = 15, HTTP_BIND = 16, HTTP_REBIND = 17, HTTP_UNBIND = 18, HTTP_ACL = 19, HTTP_REPORT = 20, HTTP_MKACTIVITY = 21, HTTP_CHECKOUT = 22, HTTP_MERGE = 23, HTTP_MSEARCH = 24, HTTP_NOTIFY = 25, HTTP_SUBSCRIBE = 26, HTTP_UNSUBSCRIBE = 27, HTTP_PATCH = 28, HTTP_PURGE = 29, HTTP_MKCALENDAR = 30, HTTP_LINK = 31, HTTP_UNLINK = 32,

  };


enum http_parser_type { HTTP_REQUEST, HTTP_RESPONSE, HTTP_BOTH };



enum flags
  { F_CHUNKED = 1 << 0
  , F_CONNECTION_KEEP_ALIVE = 1 << 1
  , F_CONNECTION_CLOSE = 1 << 2
  , F_CONNECTION_UPGRADE = 1 << 3
  , F_TRAILING = 1 << 4
  , F_UPGRADE = 1 << 5
  , F_SKIPBODY = 1 << 6
  , F_CONTENTLENGTH = 1 << 7
  };
# 212 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
enum http_errno {
  HPE_OK, HPE_CB_message_begin, HPE_CB_url, HPE_CB_header_field, HPE_CB_header_value, HPE_CB_headers_complete, HPE_CB_body, HPE_CB_message_complete, HPE_CB_status, HPE_CB_chunk_header, HPE_CB_chunk_complete, HPE_INVALID_EOF_STATE, HPE_HEADER_OVERFLOW, HPE_CLOSED_CONNECTION, HPE_INVALID_VERSION, HPE_INVALID_STATUS, HPE_INVALID_METHOD, HPE_INVALID_URL, HPE_INVALID_HOST, HPE_INVALID_PORT, HPE_INVALID_PATH, HPE_INVALID_QUERY_STRING, HPE_INVALID_FRAGMENT, HPE_LF_EXPECTED, HPE_INVALID_HEADER_TOKEN, HPE_INVALID_CONTENT_LENGTH, HPE_UNEXPECTED_CONTENT_LENGTH, HPE_INVALID_CHUNK_SIZE, HPE_INVALID_CONSTANT, HPE_INVALID_INTERNAL_STATE, HPE_STRICT, HPE_PAUSED, HPE_UNKNOWN,
};







struct http_parser {

  unsigned int type : 2;
  unsigned int flags : 8;
  unsigned int state : 7;
  unsigned int header_state : 7;
  unsigned int index : 7;
  unsigned int lenient_http_headers : 1;

  uint32_t nread;
  uint64_t content_length;


  unsigned short http_major;
  unsigned short http_minor;
  unsigned int status_code : 16;
  unsigned int method : 8;
  unsigned int http_errno : 7;






  unsigned int upgrade : 1;


  void *data;
};


struct http_parser_settings {
  http_cb on_message_begin;
  http_data_cb on_url;
  http_data_cb on_status;
  http_data_cb on_header_field;
  http_data_cb on_header_value;
  http_cb on_headers_complete;
  http_data_cb on_body;
  http_cb on_message_complete;



  http_cb on_chunk_header;
  http_cb on_chunk_complete;
};


enum http_parser_url_fields
  { UF_SCHEMA = 0
  , UF_HOST = 1
  , UF_PORT = 2
  , UF_PATH = 3
  , UF_QUERY = 4
  , UF_FRAGMENT = 5
  , UF_USERINFO = 6
  , UF_MAX = 7
  };
# 289 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
struct http_parser_url {
  uint16_t field_set;
  uint16_t port;

  struct {
    uint16_t off;
    uint16_t len;
  } field_data[UF_MAX];
};
# 310 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
unsigned long http_parser_version(void);

void http_parser_init(http_parser *parser, enum http_parser_type type);




void http_parser_settings_init(http_parser_settings *settings);




size_t http_parser_execute(http_parser *parser,
                           const http_parser_settings *settings,
                           const char *data,
                           size_t len);
# 334 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/nghttp/port/include/http_parser.h"
int http_should_keep_alive(const http_parser *parser);


const char *http_method_str(enum http_method m);


const char *http_errno_name(enum http_errno err);


const char *http_errno_description(enum http_errno err);


void http_parser_url_init(struct http_parser_url *u);


int http_parser_parse_url(const char *buf, size_t buflen,
                          int is_connect,
                          struct http_parser_url *u);


void http_parser_pause(http_parser *parser, int paused);


int http_body_is_final(const http_parser *parser);
# 20 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h" 2
# 29 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
typedef struct esp_http_client *esp_http_client_handle_t;
typedef struct esp_http_client_event *esp_http_client_event_handle_t;




typedef enum {
    HTTP_EVENT_ERROR = 0,
    HTTP_EVENT_ON_CONNECTED,
    HTTP_EVENT_HEADERS_SENT,
    HTTP_EVENT_HEADER_SENT = HTTP_EVENT_HEADERS_SENT,

    HTTP_EVENT_ON_HEADER,
    HTTP_EVENT_ON_DATA,
    HTTP_EVENT_ON_FINISH,
    HTTP_EVENT_DISCONNECTED,
} esp_http_client_event_id_t;




typedef struct esp_http_client_event {
    esp_http_client_event_id_t event_id;
    esp_http_client_handle_t client;
    void *data;
    int data_len;
    void *user_data;
    char *header_key;
    char *header_value;
} esp_http_client_event_t;





typedef enum {
    HTTP_TRANSPORT_UNKNOWN = 0x0,
    HTTP_TRANSPORT_OVER_TCP,
    HTTP_TRANSPORT_OVER_SSL,
} esp_http_client_transport_t;

typedef esp_err_t (*http_event_handle_cb)(esp_http_client_event_t *evt);




typedef enum {
    HTTP_METHOD_GET = 0,
    HTTP_METHOD_POST,
    HTTP_METHOD_PUT,
    HTTP_METHOD_PATCH,
    HTTP_METHOD_DELETE,
    HTTP_METHOD_HEAD,
    HTTP_METHOD_NOTIFY,
    HTTP_METHOD_SUBSCRIBE,
    HTTP_METHOD_UNSUBSCRIBE,
    HTTP_METHOD_OPTIONS,
    HTTP_METHOD_MAX,
} esp_http_client_method_t;




typedef enum {
    HTTP_AUTH_TYPE_NONE = 0,
    HTTP_AUTH_TYPE_BASIC,
    HTTP_AUTH_TYPE_DIGEST,
} esp_http_client_auth_type_t;




typedef struct {
    const char *url;
    const char *host;
    int port;
    const char *username;
    const char *password;
    esp_http_client_auth_type_t auth_type;
    const char *path;
    const char *query;
    const char *cert_pem;
    const char *client_cert_pem;
    const char *client_key_pem;
    esp_http_client_method_t method;
    int timeout_ms;
    bool disable_auto_redirect;
    int max_redirection_count;
    http_event_handle_cb event_handler;
    esp_http_client_transport_t transport_type;
    int buffer_size;
    int buffer_size_tx;
    void *user_data;
    bool is_async;
    bool use_global_ca_store;
    bool skip_cert_common_name_check;
} esp_http_client_config_t;




typedef enum {

    HttpStatus_MovedPermanently = 301,
    HttpStatus_Found = 302,


    HttpStatus_Unauthorized = 401
} HttpStatus_Code;
# 160 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_http_client_handle_t esp_http_client_init(const esp_http_client_config_t *config);
# 185 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_perform(esp_http_client_handle_t client);
# 197 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_url(esp_http_client_handle_t client, const char *url);
# 211 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_post_field(esp_http_client_handle_t client, const char *data, int len);
# 221 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
int esp_http_client_get_post_field(esp_http_client_handle_t client, char **data);
# 235 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_header(esp_http_client_handle_t client, const char *key, const char *value);
# 251 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_get_header(esp_http_client_handle_t client, const char *key, char **value);
# 265 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_get_username(esp_http_client_handle_t client, char **value);
# 279 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_username(esp_http_client_handle_t client, const char *username);
# 293 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_get_password(esp_http_client_handle_t client, char **value);
# 307 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_password(esp_http_client_handle_t client, char *password);
# 319 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_method(esp_http_client_handle_t client, esp_http_client_method_t method);
# 331 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_delete_header(esp_http_client_handle_t client, const char *key);
# 343 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_open(esp_http_client_handle_t client, int write_len);
# 356 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
int esp_http_client_write(esp_http_client_handle_t client, const char *buffer, int len);
# 368 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
int esp_http_client_fetch_headers(esp_http_client_handle_t client);
# 378 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
bool esp_http_client_is_chunked_response(esp_http_client_handle_t client);
# 391 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
int esp_http_client_read(esp_http_client_handle_t client, char *buffer, int len);
# 401 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
int esp_http_client_get_status_code(esp_http_client_handle_t client);
# 413 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
int esp_http_client_get_content_length(esp_http_client_handle_t client);
# 424 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_close(esp_http_client_handle_t client);
# 438 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_cleanup(esp_http_client_handle_t client);
# 450 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_http_client_transport_t esp_http_client_get_transport_type(esp_http_client_handle_t client);
# 463 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
esp_err_t esp_http_client_set_redirection(esp_http_client_handle_t client);
# 474 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
void esp_http_client_add_auth(esp_http_client_handle_t client);
# 485 "/opt/ucc/afnog/afnog-2020/esp32-cam/esp-idf-micropython/components/esp_http_client/include/esp_http_client.h"
bool esp_http_client_is_complete_data_received(esp_http_client_handle_t client);
# 104 "../../lib/lv_bindings/driver/esp32/espidf.h" 2
# 1 "../../lib/lv_bindings/driver/esp32/sh2lib.h" 1
# 21 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
typedef struct nghttp2_session nghttp2_session;
typedef struct esp_tls esp_tls;
# 44 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
typedef enum {



  SH2LIB_ERR_INVALID_ARGUMENT = -501,



  SH2LIB_ERR_BUFFER_ERROR = -502,



  SH2LIB_ERR_UNSUPPORTED_VERSION = -503,






  SH2LIB_ERR_WOULDBLOCK = -504,



  SH2LIB_ERR_PROTO = -505,



  SH2LIB_ERR_INVALID_FRAME = -506,



  SH2LIB_ERR_EOF = -507,






  SH2LIB_ERR_DEFERRED = -508,




  SH2LIB_ERR_STREAM_ID_NOT_AVAILABLE = -509,



  SH2LIB_ERR_STREAM_CLOSED = -510,




  SH2LIB_ERR_STREAM_CLOSING = -511,




  SH2LIB_ERR_STREAM_SHUT_WR = -512,



  SH2LIB_ERR_INVALID_STREAM_ID = -513,




  SH2LIB_ERR_INVALID_STREAM_STATE = -514,



  SH2LIB_ERR_DEFERRED_DATA_EXIST = -515,




  SH2LIB_ERR_START_STREAM_NOT_ALLOWED = -516,



  SH2LIB_ERR_GOAWAY_ALREADY_SENT = -517,







  SH2LIB_ERR_INVALID_HEADER_BLOCK = -518,




  SH2LIB_ERR_INVALID_STATE = -519,



  SH2LIB_ERR_TEMPORAL_CALLBACK_FAILURE = -521,



  SH2LIB_ERR_FRAME_SIZE_ERROR = -522,



  SH2LIB_ERR_HEADER_COMP = -523,



  SH2LIB_ERR_FLOW_CONTROL = -524,



  SH2LIB_ERR_INSUFF_BUFSIZE = -525,



  SH2LIB_ERR_PAUSE = -526,




  SH2LIB_ERR_TOO_MANY_INFLIGHT_SETTINGS = -527,



  SH2LIB_ERR_PUSH_DISABLED = -528,






  SH2LIB_ERR_DATA_EXIST = -529,




  SH2LIB_ERR_SESSION_CLOSING = -530,




  SH2LIB_ERR_HTTP_HEADER = -531,



  SH2LIB_ERR_HTTP_MESSAGING = -532,



  SH2LIB_ERR_REFUSED_STREAM = -533,



  SH2LIB_ERR_INTERNAL = -534,



  SH2LIB_ERR_CANCEL = -535,
# 211 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
  SH2LIB_ERR_FATAL = -900,



  SH2LIB_ERR_NOMEM = -901,



  SH2LIB_ERR_CALLBACK_FAILURE = -902,




  SH2LIB_ERR_BAD_CLIENT_MAGIC = -903,
# 233 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
  SH2LIB_ERR_FLOODED = -904
} sh2lib_error;






typedef enum {



  SH2LIB_NV_FLAG_NONE = 0,





  SH2LIB_NV_FLAG_NO_INDEX = 0x01,





  SH2LIB_NV_FLAG_NO_COPY_NAME = 0x02,





  SH2LIB_NV_FLAG_NO_COPY_VALUE = 0x04
} sh2lib_nv_flag;







typedef enum {



  SH2LIB_DATA_FLAG_NONE = 0,



  SH2LIB_DATA_FLAG_EOF = 0x01,






  SH2LIB_DATA_FLAG_NO_END_STREAM = 0x02,




  SH2LIB_DATA_FLAG_NO_COPY = 0x04
} sh2lib_data_flag;




typedef enum {
    SH2LIB_DATA_RECV_NONE,
    SH2LIB_DATA_RECV_RST_STREAM,
    SH2LIB_DATA_RECV_FRAME_COMPLETE
} sh2lib_data_recv_flag;




struct sh2lib_handle {
    nghttp2_session *http2_sess;
    char *hostname;
    struct esp_tls *http2_tls;
    void *user_data;
};




struct sh2lib_nv {
    const char *name;
    const char *value;
    uint8_t flags;
};
# 342 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
typedef int (*sh2lib_frame_data_recv_cb_t)(struct sh2lib_handle *handle, const void *data, size_t len, int flags);
# 360 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
typedef int (*sh2lib_putpost_data_cb_t)(struct sh2lib_handle *handle, void *data, size_t len, uint32_t *data_flags);
# 377 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_connect(struct sh2lib_handle *hd, const char *uri);
# 388 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
void sh2lib_free(struct sh2lib_handle *hd);
# 408 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_do_get(struct sh2lib_handle *hd, const char *path, sh2lib_frame_data_recv_cb_t recv_cb);
# 430 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_do_post(struct sh2lib_handle *hd, const char *path,
                   sh2lib_putpost_data_cb_t send_cb,
                   sh2lib_frame_data_recv_cb_t recv_cb);
# 454 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_do_put(struct sh2lib_handle *hd, const char *path,
                  sh2lib_putpost_data_cb_t send_cb,
                  sh2lib_frame_data_recv_cb_t recv_cb);
# 472 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_execute(struct sh2lib_handle *hd);
# 505 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_do_get_with_nv(struct sh2lib_handle *hd, const struct sh2lib_nv nva[], size_t nvlen, sh2lib_frame_data_recv_cb_t recv_cb);
# 536 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_do_putpost_with_nv(struct sh2lib_handle *hd, const struct sh2lib_nv nva[], size_t nvlen,
                              sh2lib_putpost_data_cb_t send_cb,
                              sh2lib_frame_data_recv_cb_t recv_cb);
# 554 "../../lib/lv_bindings/driver/esp32/sh2lib.h"
int sh2lib_session_resume_data(struct sh2lib_handle *hd, int32_t stream_id);
# 105 "../../lib/lv_bindings/driver/esp32/espidf.h" 2





static inline void esp_http_client_register_event_handler(esp_http_client_config_t *config, http_event_handle_cb http_event_handler, void *user_data)
{
    config->event_handler = http_event_handler;
    config->user_data = user_data;
}



void task_delay_ms(int ms);



static inline void set_spi_transaction_ext(
        spi_transaction_ext_t *ext_trans,
        spi_transaction_t *trans,
        uint8_t command_bits,
        uint8_t address_bits){
    ext_trans->base = *trans;
    ext_trans->command_bits = command_bits;
    ext_trans->address_bits = address_bits;
}
# 140 "../../lib/lv_bindings/driver/esp32/espidf.h"
void *spi_transaction_set_cb(mp_obj_t pre_cb, mp_obj_t post_cb);



void ex_spi_pre_cb_isr(spi_transaction_t *trans);
void ex_spi_post_cb_isr(spi_transaction_t *trans);







enum {
    ENUM_SPI_HOST = SPI1_HOST,
    ENUM_HSPI_HOST = SPI2_HOST,
    ENUM_VSPI_HOST = SPI3_HOST,
};


enum {
    ENUM_portMAX_DELAY = portMAX_DELAY
};

enum {
    ENUM_I2S_PIN_NO_CHANGE = (-1)
};

enum {
    ENUM_SPI_DEVICE_TXBIT_LSBFIRST = (1<<0),
    ENUM_SPI_DEVICE_RXBIT_LSBFIRST = (1<<1),
    ENUM_SPI_DEVICE_BIT_LSBFIRST = ((1<<0)|(1<<1)),
    ENUM_SPI_DEVICE_3WIRE = (1<<2),
    ENUM_SPI_DEVICE_POSITIVE_CS = (1<<3),
    ENUM_SPI_DEVICE_HALFDUPLEX = (1<<4),
    ENUM_SPI_DEVICE_NO_DUMMY = (1<<6),
    ENUM_SPI_DEVICE_CLK_AS_CS = (1<<5),
};

enum {
    ENUM_SPI_TRANS_MODE_DIO = (1<<0),
    ENUM_SPI_TRANS_MODE_QIO = (1<<1),
    ENUM_SPI_TRANS_MODE_DIOQIO_ADDR = (1<<4),
    ENUM_SPI_TRANS_USE_RXDATA = (1<<2),
    ENUM_SPI_TRANS_USE_TXDATA = (1<<3),
    ENUM_SPI_TRANS_VARIABLE_CMD = (1<<5),
    ENUM_SPI_TRANS_VARIABLE_ADDR = (1<<6),
};

enum {
    ENUM_MALLOC_CAP_DMA = (1<<3),
    ENUM_MALLOC_CAP_INTERNAL = (1<<11),
    ENUM_MALLOC_CAP_SPIRAM = (1<<10),
};
# 202 "../../lib/lv_bindings/driver/esp32/espidf.h"
void ili9xxx_post_cb_isr(spi_transaction_t *trans);

void ili9xxx_flush(void *disp_drv, const void *area, void *color_p);
