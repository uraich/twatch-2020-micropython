
/*
 * Auto-Generated file, DO NOT EDIT!
 *
 * Command line:
 * ../../lib/lv_bindings/gen/gen_mpy.py -M espidf -E build-WROVER/espidfmod/mp_espidf.pp.c ../../lib/lv_bindings/driver/esp32/espidf.h
 *
 * Preprocessing command:
 * Preprocessing was disabled.
 *
 * Generating Objects: 
 */

/*
 * Mpy includes
 */

#include <stdlib.h>
#include <string.h>
#include "py/obj.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/runtime.h"
#include "py/binary.h"
#include "py/objarray.h"

/*
 * espidf includes
 */

#include "../../lib/lv_bindings/driver/esp32/espidf.h"


/*
 * Helper functions
 */

#ifndef GENMPY_UNUSED
#ifdef __GNUC__
#define GENMPY_UNUSED __attribute__ ((unused))
#else
#define GENMPY_UNUSED
#endif // __GNUC__
#endif // GENMPY_UNUSED

// Custom function mp object

typedef mp_obj_t (*mp_fun_ptr_var_t)(size_t n, const mp_obj_t *, void *ptr);

typedef struct mp_lv_obj_fun_builtin_var_t {
    mp_obj_base_t base;
    mp_uint_t n_args;
    mp_fun_ptr_var_t mp_fun;
    void *lv_fun;
} mp_lv_obj_fun_builtin_var_t;

STATIC mp_obj_t lv_fun_builtin_var_call(mp_obj_t self_in, size_t n_args, size_t n_kw, const mp_obj_t *args);
STATIC mp_int_t mp_func_get_buffer(mp_obj_t self_in, mp_buffer_info_t *bufinfo, mp_uint_t flags);

GENMPY_UNUSED STATIC const mp_obj_type_t mp_lv_type_fun_builtin_var = {
    { &mp_type_type },
    .flags = MP_TYPE_FLAG_BINDS_SELF | MP_TYPE_FLAG_BUILTIN_FUN,
    .name = MP_QSTR_function,
    .call = lv_fun_builtin_var_call,
    .unary_op = mp_generic_unary_op,
    .buffer_p = { .get_buffer = mp_func_get_buffer }
};

GENMPY_UNUSED STATIC const mp_obj_type_t mp_lv_type_fun_builtin_static_var = {
    { &mp_type_type },
    .flags = MP_TYPE_FLAG_BUILTIN_FUN,
    .name = MP_QSTR_function,
    .call = lv_fun_builtin_var_call,
    .unary_op = mp_generic_unary_op,
    .buffer_p = { .get_buffer = mp_func_get_buffer }
};

STATIC mp_obj_t lv_fun_builtin_var_call(mp_obj_t self_in, size_t n_args, size_t n_kw, const mp_obj_t *args) {
    assert(MP_OBJ_IS_TYPE(self_in, &mp_lv_type_fun_builtin_var) ||
           MP_OBJ_IS_TYPE(self_in, &mp_lv_type_fun_builtin_static_var));
    mp_lv_obj_fun_builtin_var_t *self = MP_OBJ_TO_PTR(self_in);
    mp_arg_check_num(n_args, n_kw, self->n_args, self->n_args, false);
    return self->mp_fun(n_args, args, self->lv_fun);
}

STATIC mp_int_t mp_func_get_buffer(mp_obj_t self_in, mp_buffer_info_t *bufinfo, mp_uint_t flags) {
    (void)flags;
    assert(MP_OBJ_IS_TYPE(self_in, &mp_lv_type_fun_builtin_var) ||
           MP_OBJ_IS_TYPE(self_in, &mp_lv_type_fun_builtin_static_var));
    mp_lv_obj_fun_builtin_var_t *self = MP_OBJ_TO_PTR(self_in);

    bufinfo->buf = &self->lv_fun;
    bufinfo->len = sizeof(self->lv_fun);
    bufinfo->typecode = BYTEARRAY_TYPECODE;
    return 0;
}

#define MP_DEFINE_CONST_LV_FUN_OBJ_VAR(obj_name, n_args, mp_fun, lv_fun) \
    const mp_lv_obj_fun_builtin_var_t obj_name = \
        {{&mp_lv_type_fun_builtin_var}, n_args, mp_fun, lv_fun}

#define MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(obj_name, n_args, mp_fun, lv_fun) \
    const mp_lv_obj_fun_builtin_var_t obj_name = \
        {{&mp_lv_type_fun_builtin_static_var}, n_args, mp_fun, lv_fun}

// Casting

typedef struct mp_lv_struct_t
{
    mp_obj_base_t base;
    void *data;
} mp_lv_struct_t;

STATIC const mp_lv_struct_t mp_lv_null_obj;

#ifdef LV_OBJ_T
STATIC mp_int_t mp_lv_obj_get_buffer(mp_obj_t self_in, mp_buffer_info_t *bufinfo, mp_uint_t flags);
#else
STATIC mp_int_t mp_lv_obj_get_buffer(mp_obj_t self_in, mp_buffer_info_t *bufinfo, mp_uint_t flags){ return 0; }
#endif

STATIC mp_obj_t get_native_obj(mp_obj_t *mp_obj)
{
    if (!MP_OBJ_IS_OBJ(mp_obj)) return mp_obj;
    const mp_obj_type_t *native_type = ((mp_obj_base_t*)mp_obj)->type;
    if (native_type->parent == NULL || 
        (native_type->buffer_p.get_buffer == mp_lv_obj_get_buffer)) return mp_obj;
    while (native_type->parent) native_type = native_type->parent;
    return mp_obj_cast_to_native_base(mp_obj, MP_OBJ_FROM_PTR(native_type));
}

STATIC mp_obj_t dict_to_struct(mp_obj_t dict, const mp_obj_type_t *type);

STATIC mp_obj_t make_new_lv_struct(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args);

STATIC mp_obj_t *cast(mp_obj_t *mp_obj, const mp_obj_type_t *mp_type)
{
    mp_obj_t *res = NULL;
    if (mp_obj == mp_const_none && mp_type->make_new == &make_new_lv_struct) {
        res = MP_OBJ_FROM_PTR(&mp_lv_null_obj);
    } else if (MP_OBJ_IS_OBJ(mp_obj)) {
        res = get_native_obj(mp_obj);
        if (res){
            const mp_obj_type_t *res_type = ((mp_obj_base_t*)res)->type;
            if (res_type != mp_type){
                if (res_type == &mp_type_dict &&
                    mp_type->make_new == &make_new_lv_struct)
                        res = dict_to_struct(res, mp_type);
                else res = NULL;
            }
        }
    }
    if (res == NULL) nlr_raise(
        mp_obj_new_exception_msg_varg(
            &mp_type_SyntaxError, MP_ERROR_TEXT("Can't convert %s to %s!"), mp_obj_get_type_str(mp_obj), qstr_str(mp_type->name)));
    return res;
}

// object handling
// This section is enabled only when objects are supported 

#ifdef LV_OBJ_T

typedef LV_OBJ_T* (*lv_create)(LV_OBJ_T * par, const LV_OBJ_T * copy);

typedef struct mp_lv_obj_t {
    mp_obj_base_t base;
    LV_OBJ_T *lv_obj;
    LV_OBJ_T *callbacks;
} mp_lv_obj_t;

STATIC inline LV_OBJ_T *mp_to_lv(mp_obj_t *mp_obj)
{
    if (mp_obj == NULL || mp_obj == mp_const_none) return NULL;
    mp_lv_obj_t *mp_lv_obj = MP_OBJ_TO_PTR(get_native_obj(mp_obj));
    return mp_lv_obj->lv_obj;
}

STATIC inline LV_OBJ_T *mp_get_callbacks(mp_obj_t mp_obj)
{
    if (mp_obj == NULL || mp_obj == mp_const_none) return NULL;
    mp_lv_obj_t *mp_lv_obj = MP_OBJ_TO_PTR(get_native_obj(mp_obj));
    if (!mp_lv_obj->callbacks) mp_lv_obj->callbacks = mp_obj_new_dict(0);
    return mp_lv_obj->callbacks;
}

STATIC inline const mp_obj_type_t *get_BaseObj_type();

STATIC inline mp_obj_t *lv_to_mp(LV_OBJ_T *lv_obj)
{
    if (lv_obj == NULL) return mp_const_none;
    mp_lv_obj_t *self = (mp_lv_obj_t*)lv_obj->user_data;
    if (!self) 
    {
        self = m_new_obj(mp_lv_obj_t);
        *self = (mp_lv_obj_t){
            .base = {get_BaseObj_type()},
            .lv_obj = lv_obj,
            .callbacks = NULL,
        };
        lv_obj->user_data = self;
    }
    return MP_OBJ_FROM_PTR(self);
}

STATIC mp_obj_t make_new(
    lv_create create,
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    mp_arg_check_num(n_args, n_kw, 0, 2, false);
    mp_lv_obj_t *self = m_new_obj(mp_lv_obj_t);
    LV_OBJ_T *parent = n_args > 0? mp_to_lv(args[0]): NULL;
    LV_OBJ_T *copy = n_args > 1? mp_to_lv(args[1]): NULL;
    *self = (mp_lv_obj_t){
        .base = {type}, 
        .lv_obj = create(parent, copy),
        .callbacks = NULL,
    };
    if (!self->lv_obj) return mp_const_none;
    self->lv_obj->user_data = self;
    return MP_OBJ_FROM_PTR(self);
}

STATIC void* mp_to_ptr(mp_obj_t self_in);

STATIC mp_obj_t cast_obj(mp_obj_t type_obj, mp_obj_t obj)
{
    mp_lv_obj_t *self = m_new_obj(mp_lv_obj_t);
    *self = (mp_lv_obj_t){
        .base = {(const mp_obj_type_t*)type_obj},
        .lv_obj = mp_to_ptr(obj),
        .callbacks = NULL,
    };
    if (!self->lv_obj) return mp_const_none;
    return MP_OBJ_FROM_PTR(self);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_2(cast_obj_obj, cast_obj);
STATIC MP_DEFINE_CONST_CLASSMETHOD_OBJ(cast_obj_class_method, MP_ROM_PTR(&cast_obj_obj));

STATIC mp_int_t mp_lv_obj_get_buffer(mp_obj_t self_in, mp_buffer_info_t *bufinfo, mp_uint_t flags) {
    (void)flags;
    mp_lv_obj_t *self = MP_OBJ_TO_PTR(self_in);

    bufinfo->buf = &self->lv_obj;
    bufinfo->len = sizeof(self->lv_obj);
    bufinfo->typecode = BYTEARRAY_TYPECODE;
    return 0;
}

#endif

STATIC inline mp_obj_t convert_to_bool(bool b)
{
    return b? mp_const_true: mp_const_false;
}

STATIC inline mp_obj_t convert_to_str(const char *str)
{
    return str? mp_obj_new_str(str, strlen(str)): mp_const_none;
}

STATIC inline const char *convert_from_str(mp_obj_t str)
{
    return (str == NULL || str == mp_const_none)? NULL: mp_obj_str_get_str(str);
}

// struct handling

STATIC inline mp_lv_struct_t *mp_to_lv_struct(mp_obj_t mp_obj)
{
    if (mp_obj == NULL || mp_obj == mp_const_none) return NULL;
    if (!MP_OBJ_IS_OBJ(mp_obj)) nlr_raise(
            mp_obj_new_exception_msg(
                &mp_type_SyntaxError, MP_ERROR_TEXT("Struct argument is not an object!")));
    mp_lv_struct_t *mp_lv_struct = MP_OBJ_TO_PTR(get_native_obj(mp_obj));
    return mp_lv_struct;
}

STATIC inline size_t get_lv_struct_size(const mp_obj_type_t *type)
{
    mp_obj_t size_obj = mp_obj_dict_get(type->locals_dict, MP_OBJ_NEW_QSTR(MP_QSTR_SIZE));
    return (size_t)mp_obj_get_int(size_obj);
}

STATIC mp_obj_t make_new_lv_struct(
    const mp_obj_type_t *type,
    size_t n_args,
    size_t n_kw,
    const mp_obj_t *args)
{
    if ((!MP_OBJ_IS_TYPE(type, &mp_type_type)) || type->make_new != &make_new_lv_struct)
        nlr_raise(
            mp_obj_new_exception_msg(
                &mp_type_SyntaxError, MP_ERROR_TEXT("Argument is not a struct type!")));
    size_t size = get_lv_struct_size(type);
    mp_arg_check_num(n_args, n_kw, 0, 1, false);
    mp_lv_struct_t *self = m_new_obj(mp_lv_struct_t);
    *self = (mp_lv_struct_t){
        .base = {type}, 
        .data = m_malloc(size)
    };
    mp_lv_struct_t *other = n_args > 0? mp_to_lv_struct(cast(args[0], type)): NULL;
    if (other) {
        memcpy(self->data, other->data, size);
    } else {
        memset(self->data, 0, size);
    }
    return MP_OBJ_FROM_PTR(self);
}

STATIC void *copy_buffer(const void *buffer, size_t size)
{
    void *new_buffer = m_malloc(size);
    memcpy(new_buffer, buffer, size);
    return new_buffer;
}

// Reference an existing lv struct (or part of it)

STATIC mp_obj_t lv_to_mp_struct(const mp_obj_type_t *type, void *lv_struct)
{
    if (lv_struct == NULL) return mp_const_none;
    mp_lv_struct_t *self = m_new_obj(mp_lv_struct_t);
    *self = (mp_lv_struct_t){
        .base = {type},
        .data = lv_struct
    };
    return MP_OBJ_FROM_PTR(self);
}

STATIC void call_parent_methods(mp_obj_t obj, qstr attr, mp_obj_t *dest)
{
    const mp_obj_type_t *type = mp_obj_get_type(obj);
    while (type->locals_dict != NULL) {
        // generic method lookup
        // this is a lookup in the object (ie not class or type)
        assert(type->locals_dict->base.type == &mp_type_dict); // MicroPython restriction, for now
        mp_map_t *locals_map = &type->locals_dict->map;
        mp_map_elem_t *elem = mp_map_lookup(locals_map, MP_OBJ_NEW_QSTR(attr), MP_MAP_LOOKUP);
        if (elem != NULL) {
            mp_convert_member_lookup(obj, type, elem->value, dest);
            break;
        }
        if (type->parent == NULL) {
            break;
        }
        // search parents
        type = type->parent;
    }
}

// Convert dict to struct

STATIC mp_obj_t dict_to_struct(mp_obj_t dict, const mp_obj_type_t *type)
{
    mp_obj_t mp_struct = make_new_lv_struct(type, 0, 0, NULL);
    mp_obj_t *native_dict = cast(dict, &mp_type_dict);
    mp_map_t *map = mp_obj_dict_get_map(native_dict);
    if (map == NULL) return mp_const_none;
    for (uint i = 0; i < map->alloc; i++) {
        mp_obj_t key = map->table[i].key;
        mp_obj_t value = map->table[i].value;
        if (key != MP_OBJ_NULL) {
            mp_obj_t dest[] = {MP_OBJ_SENTINEL, value};
            type->attr(mp_struct, mp_obj_str_get_qstr(key), dest);
            if (dest[0]) nlr_raise(
                mp_obj_new_exception_msg_varg(
                    &mp_type_SyntaxError, MP_ERROR_TEXT("Cannot set field %s on struct %s!"), qstr_str(mp_obj_str_get_qstr(key)), qstr_str(type->name)));
        }
    }
    return mp_struct;
}

// Convert mp object to ptr

STATIC void* mp_to_ptr(mp_obj_t self_in)
{
    mp_buffer_info_t buffer_info;
    if (self_in == mp_const_none)
        return NULL;

//    if (MP_OBJ_IS_INT(self_in))
//        return (void*)mp_obj_get_int(self_in);

    if (!mp_get_buffer(self_in, &buffer_info, MP_BUFFER_READ)) {
        // No buffer protocol - this is not a Struct or a Blob, it's some other mp object.
        // We only allow setting dict directly, since it's useful to setting user_data for passing data to C.
        // On other cases throw an exception, to avoid a crash later
        if (MP_OBJ_IS_TYPE(self_in, &mp_type_dict))
            return MP_OBJ_TO_PTR(self_in);
        else nlr_raise(
                mp_obj_new_exception_msg_varg(
                    &mp_type_SyntaxError, MP_ERROR_TEXT("Cannot convert '%s' to pointer!"), mp_obj_get_type_str(self_in)));
    }

    if (MP_OBJ_IS_STR_OR_BYTES(self_in) || 
        MP_OBJ_IS_TYPE(self_in, &mp_type_bytearray) ||
        MP_OBJ_IS_TYPE(self_in, &mp_type_memoryview))
            return buffer_info.buf;
    else
    {
        void *result;
        if (buffer_info.len != sizeof(result) || buffer_info.typecode != BYTEARRAY_TYPECODE){
            nlr_raise(
                mp_obj_new_exception_msg_varg(
                    &mp_type_SyntaxError, MP_ERROR_TEXT("Cannot convert %s to pointer! (buffer does not represent a pointer)"), mp_obj_get_type_str(self_in)));
        }
        memcpy(&result, buffer_info.buf, sizeof(result));
        return result;
    }
}

// Blob is a wrapper for void* 

STATIC void mp_blob_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "Blob");
}

STATIC mp_int_t mp_blob_get_buffer(mp_obj_t self_in, mp_buffer_info_t *bufinfo, mp_uint_t flags) {
    (void)flags;
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);

    bufinfo->buf = &self->data;
    bufinfo->len = sizeof(self->data);
    bufinfo->typecode = BYTEARRAY_TYPECODE;
    return 0;
}

STATIC const mp_obj_fun_builtin_var_t mp_lv_dereference_obj;

// Sometimes (but not always!) Blob represents a Micropython object.
// In such cases it's safe to cast the Blob back to the Micropython object
// cast argument is the underlying object type, and it's optional.

STATIC mp_obj_t mp_blob_cast(size_t argc, const mp_obj_t *argv)
{
    mp_obj_t self = argv[0];
    void *ptr = mp_to_ptr(self);
    if (argc == 1) return MP_OBJ_FROM_PTR(ptr);
    mp_obj_t type = argv[1];
    if (!MP_OBJ_IS_TYPE(type, &mp_type_type))
        nlr_raise(
            mp_obj_new_exception_msg(
                &mp_type_SyntaxError, MP_ERROR_TEXT("Cast argument must be a type!")));
    return cast(MP_OBJ_FROM_PTR(ptr), type);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_blob_cast_obj, 1, 2, mp_blob_cast);

STATIC const mp_rom_map_elem_t mp_blob_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_blob_cast_obj) },
};

STATIC MP_DEFINE_CONST_DICT(mp_blob_locals_dict, mp_blob_locals_dict_table);

STATIC const mp_obj_type_t mp_blob_type = {
    { &mp_type_type },
    .name = MP_QSTR_Blob,
    .print = mp_blob_print,
    //.make_new = make_new_blob,
    .locals_dict = (mp_obj_dict_t*)&mp_blob_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC const mp_lv_struct_t mp_lv_null_obj = { {&mp_blob_type}, NULL };

STATIC inline mp_obj_t ptr_to_mp(void *data)
{
    return lv_to_mp_struct(&mp_blob_type, data);
}

// Cast pointer to struct

STATIC mp_obj_t mp_lv_cast(mp_obj_t type_obj, mp_obj_t ptr_obj)
{
    mp_lv_struct_t *self = m_new_obj(mp_lv_struct_t);
    *self = (mp_lv_struct_t){
        .base = {(const mp_obj_type_t*)type_obj}, 
        .data = mp_to_ptr(ptr_obj)
    };
    return MP_OBJ_FROM_PTR(self);
}

// Cast instance. Can be used in ISR when memory allocation is prohibited

STATIC inline mp_obj_t mp_lv_cast_instance(mp_obj_t self_in, mp_obj_t ptr_obj)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    self->data = mp_to_ptr(ptr_obj);
    return self_in;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_2(mp_lv_cast_obj, mp_lv_cast);
STATIC MP_DEFINE_CONST_CLASSMETHOD_OBJ(mp_lv_cast_class_method, MP_ROM_PTR(&mp_lv_cast_obj));

STATIC MP_DEFINE_CONST_FUN_OBJ_2(mp_lv_cast_instance_obj, mp_lv_cast_instance);

// Dereference a struct/blob. This allows access to the raw data the struct holds

STATIC mp_obj_t mp_lv_dereference(size_t argc, const mp_obj_t *argv)
{
    mp_obj_t self_in = argv[0];
    mp_obj_t size_in = argc > 1? argv[1]: mp_const_none;
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    size_t size = 0;
    if (size_in == mp_const_none){
        const mp_obj_type_t *type = self->base.type;
        size = get_lv_struct_size(type);
    } else {
        size = (size_t)mp_obj_get_int(size_in);
    }
    mp_obj_array_t *view = MP_OBJ_TO_PTR(mp_obj_new_memoryview(BYTEARRAY_TYPECODE,
        size, self->data));
    view->typecode |= 0x80; // used to indicate writable buffer
    return MP_OBJ_FROM_PTR(view);
}

STATIC MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(mp_lv_dereference_obj, 1, 2, mp_lv_dereference);

// Callback function handling
// Callback is either a callable object or a pointer. If it's a callable object, set user_data to the callback.
// Multiple callbacks are kept per object/struct using a dict that associate callback name with callback object
// In case of an lv_obj_t, user_data is mp_lv_obj_t which contains a member "callbacks" for that dict.
// In case of a struct, user_data is a pointer to that dict directly

STATIC mp_obj_t get_callback_dict_from_user_data(void *user_data)
{
    if (user_data){
        mp_obj_t obj = MP_OBJ_FROM_PTR(user_data);
#ifdef LV_OBJ_T
        return 
            MP_OBJ_IS_TYPE(obj, &mp_type_dict)? obj: // Handle the case of dict for a struct
            mp_get_callbacks(obj); // Handle the case of mp_lv_obj_t for an lv_obj_t
#else
        return obj;
#endif
    }
    return NULL;
}

STATIC void *mp_lv_callback(mp_obj_t mp_callback, void *lv_callback, qstr callback_name, void **user_data_ptr)
{
    if (lv_callback && mp_obj_is_callable(mp_callback)){
        if (user_data_ptr){
            // user_data is either a dict of callbacks in case of struct, or a pointer to mp_lv_obj_t in case of lv_obj_t
            if (! (*user_data_ptr) ) *user_data_ptr = MP_OBJ_TO_PTR(mp_obj_new_dict(0)); // if it's NULL - it's a dict for a struct
            mp_obj_t callbacks = get_callback_dict_from_user_data(*user_data_ptr);
            mp_obj_dict_store(callbacks, MP_OBJ_NEW_QSTR(callback_name), mp_callback);
        }
        return lv_callback;
    } else {
        return mp_to_ptr(mp_callback);
    }
}

// Function pointers wrapper

STATIC mp_obj_t mp_lv_funcptr(const mp_lv_obj_fun_builtin_var_t *mp_fun, void *lv_fun, void *lv_callback, qstr func_name, void *user_data)
{
    if (lv_fun == NULL)
        return mp_const_none;
    if (lv_fun == lv_callback) {
        mp_obj_t callbacks = get_callback_dict_from_user_data(user_data);
        if (callbacks)
            return mp_obj_dict_get(callbacks, MP_OBJ_NEW_QSTR(func_name));
    }
    mp_lv_obj_fun_builtin_var_t *funcptr = m_new_obj(mp_lv_obj_fun_builtin_var_t);
    *funcptr = *mp_fun;
    funcptr->lv_fun = lv_fun;
    return MP_OBJ_FROM_PTR(funcptr);
}

// Missing implementation for 64bit integer conversion

STATIC unsigned long long mp_obj_get_ull(mp_obj_t obj)
{
    if (mp_obj_is_small_int(obj))
        return MP_OBJ_SMALL_INT_VALUE(obj);

    unsigned long long val = 0;
    bool big_endian = !(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);
    mp_obj_int_to_bytes_impl(obj, big_endian, sizeof(val), (byte*)&val);
    return val;
}



/*
 * LVGL string constants
 */


/*
 * Helper Structs
 */
        

typedef union {
    void*           ptr_val;
    const char*     str_val;
    int             int_val;
    unsigned int    uint_val;
    short           short_val[sizeof(void*) / sizeof(short)];
    unsigned short  ushort_val[sizeof(void*) / sizeof(unsigned short)];
    char            char_val[sizeof(void*) / sizeof(char)];
    unsigned char   uchar_val[sizeof(void*) / sizeof(unsigned char)];
} C_Pointer;


/*
 * Array convertors for short [(sizeof(void *)) / (sizeof(short))]
 */

STATIC short *mp_arr_to_short_____sizeof__void_ptr______div____sizeof__short______(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    short *lv_arr = (short*)m_malloc(len * sizeof(short));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (short)mp_obj_get_int(item);
    }
    return (short *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_short_____sizeof__void_ptr______div____sizeof__short______(short *arr)
{
    mp_obj_t obj_arr[(sizeof(void *)) / (sizeof(short))];
    for (size_t i=0; i<(sizeof(void *)) / (sizeof(short)); i++){
        obj_arr[i] = mp_obj_new_int(arr[i]);
    }
    return mp_obj_new_list((sizeof(void *)) / (sizeof(short)), obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Array convertors for unsigned short [(sizeof(void *)) / (sizeof(unsigned short))]
 */

STATIC unsigned short *mp_arr_to_unsigned_short_____sizeof__void_ptr______div____sizeof__unsigned_short______(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    unsigned short *lv_arr = (unsigned short*)m_malloc(len * sizeof(unsigned short));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (unsigned short)mp_obj_get_int(item);
    }
    return (unsigned short *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_unsigned_short_____sizeof__void_ptr______div____sizeof__unsigned_short______(unsigned short *arr)
{
    mp_obj_t obj_arr[(sizeof(void *)) / (sizeof(unsigned short))];
    for (size_t i=0; i<(sizeof(void *)) / (sizeof(unsigned short)); i++){
        obj_arr[i] = mp_obj_new_int_from_uint(arr[i]);
    }
    return mp_obj_new_list((sizeof(void *)) / (sizeof(unsigned short)), obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Array convertors for char [(sizeof(void *)) / (sizeof(char))]
 */

STATIC char *mp_arr_to_char_____sizeof__void_ptr______div____sizeof__char______(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    char *lv_arr = (char*)m_malloc(len * sizeof(char));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (char)mp_obj_get_int(item);
    }
    return (char *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_char_____sizeof__void_ptr______div____sizeof__char______(char *arr)
{
    mp_obj_t obj_arr[(sizeof(void *)) / (sizeof(char))];
    for (size_t i=0; i<(sizeof(void *)) / (sizeof(char)); i++){
        obj_arr[i] = mp_obj_new_int(arr[i]);
    }
    return mp_obj_new_list((sizeof(void *)) / (sizeof(char)), obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Array convertors for unsigned char [(sizeof(void *)) / (sizeof(unsigned char))]
 */

STATIC unsigned char *mp_arr_to_unsigned_char_____sizeof__void_ptr______div____sizeof__unsigned_char______(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    unsigned char *lv_arr = (unsigned char*)m_malloc(len * sizeof(unsigned char));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (unsigned char)mp_obj_get_int(item);
    }
    return (unsigned char *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_unsigned_char_____sizeof__void_ptr______div____sizeof__unsigned_char______(unsigned char *arr)
{
    mp_obj_t obj_arr[(sizeof(void *)) / (sizeof(unsigned char))];
    for (size_t i=0; i<(sizeof(void *)) / (sizeof(unsigned char)); i++){
        obj_arr[i] = mp_obj_new_int_from_uint(arr[i]);
    }
    return mp_obj_new_list((sizeof(void *)) / (sizeof(unsigned char)), obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Struct C_Pointer
 */

STATIC inline const mp_obj_type_t *get_mp_C_Pointer_type();

STATIC inline C_Pointer* mp_write_ptr_C_Pointer(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_C_Pointer_type()));
    return (C_Pointer*)self->data;
}

#define mp_write_C_Pointer(struct_obj) *mp_write_ptr_C_Pointer(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_C_Pointer(C_Pointer *field)
{
    return lv_to_mp_struct(get_mp_C_Pointer_type(), (void*)field);
}

#define mp_read_C_Pointer(field) mp_read_ptr_C_Pointer(copy_buffer(&field, sizeof(C_Pointer)))
#define mp_read_byref_C_Pointer(field) mp_read_ptr_C_Pointer(&field)

STATIC void mp_C_Pointer_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    C_Pointer *data = (C_Pointer*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_ptr_val: dest[0] = ptr_to_mp((void*)data->ptr_val); break; // converting from void *;
            case MP_QSTR_str_val: dest[0] = convert_to_str((void*)data->str_val); break; // converting from char *;
            case MP_QSTR_int_val: dest[0] = mp_obj_new_int(data->int_val); break; // converting from int;
            case MP_QSTR_uint_val: dest[0] = mp_obj_new_int_from_uint(data->uint_val); break; // converting from unsigned int;
            case MP_QSTR_short_val: dest[0] = mp_arr_from_short_____sizeof__void_ptr______div____sizeof__short______(data->short_val); break; // converting from short [(sizeof(void *)) / (sizeof(short))];
            case MP_QSTR_ushort_val: dest[0] = mp_arr_from_unsigned_short_____sizeof__void_ptr______div____sizeof__unsigned_short______(data->ushort_val); break; // converting from unsigned short [(sizeof(void *)) / (sizeof(unsigned short))];
            case MP_QSTR_char_val: dest[0] = mp_arr_from_char_____sizeof__void_ptr______div____sizeof__char______(data->char_val); break; // converting from char [(sizeof(void *)) / (sizeof(char))];
            case MP_QSTR_uchar_val: dest[0] = mp_arr_from_unsigned_char_____sizeof__void_ptr______div____sizeof__unsigned_char______(data->uchar_val); break; // converting from unsigned char [(sizeof(void *)) / (sizeof(unsigned char))];
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_ptr_val: data->ptr_val = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_str_val: data->str_val = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_int_val: data->int_val = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_uint_val: data->uint_val = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_short_val: memcpy(&data->short_val, mp_arr_to_short_____sizeof__void_ptr______div____sizeof__short______(dest[1]), sizeof(short)*(sizeof(void *)) / (sizeof(short))); break; // converting to short [(sizeof(void *)) / (sizeof(short))];
                case MP_QSTR_ushort_val: memcpy(&data->ushort_val, mp_arr_to_unsigned_short_____sizeof__void_ptr______div____sizeof__unsigned_short______(dest[1]), sizeof(unsigned short)*(sizeof(void *)) / (sizeof(unsigned short))); break; // converting to unsigned short [(sizeof(void *)) / (sizeof(unsigned short))];
                case MP_QSTR_char_val: memcpy(&data->char_val, mp_arr_to_char_____sizeof__void_ptr______div____sizeof__char______(dest[1]), sizeof(char)*(sizeof(void *)) / (sizeof(char))); break; // converting to char [(sizeof(void *)) / (sizeof(char))];
                case MP_QSTR_uchar_val: memcpy(&data->uchar_val, mp_arr_to_unsigned_char_____sizeof__void_ptr______div____sizeof__unsigned_char______(dest[1]), sizeof(unsigned char)*(sizeof(void *)) / (sizeof(unsigned char))); break; // converting to unsigned char [(sizeof(void *)) / (sizeof(unsigned char))];
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_C_Pointer_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct C_Pointer");
}

STATIC const mp_obj_dict_t mp_C_Pointer_locals_dict;

STATIC const mp_obj_type_t mp_C_Pointer_type = {
    { &mp_type_type },
    .name = MP_QSTR_C_Pointer,
    .print = mp_C_Pointer_print,
    .make_new = make_new_lv_struct,
    .attr = mp_C_Pointer_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_C_Pointer_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_C_Pointer_type()
{
    return &mp_C_Pointer_type;
}
    

/*
 * espidf IP6 object definitions
 */
    

STATIC const mp_rom_map_elem_t IP6_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(IP6_UNKNOWN)) },
    { MP_ROM_QSTR(MP_QSTR_UNICAST), MP_ROM_PTR(MP_ROM_INT(IP6_UNICAST)) },
    { MP_ROM_QSTR(MP_QSTR_MULTICAST), MP_ROM_PTR(MP_ROM_INT(IP6_MULTICAST)) }
};

STATIC MP_DEFINE_CONST_DICT(IP6_locals_dict, IP6_locals_dict_table);

STATIC void IP6_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf IP6");
}



STATIC const mp_obj_type_t mp_IP6_type = {
    { &mp_type_type },
    .name = MP_QSTR_IP6,
    .print = IP6_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&IP6_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf IPADDR_TYPE object definitions
 */
    

STATIC const mp_rom_map_elem_t IPADDR_TYPE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_V4), MP_ROM_PTR(MP_ROM_INT(IPADDR_TYPE_V4)) },
    { MP_ROM_QSTR(MP_QSTR_V6), MP_ROM_PTR(MP_ROM_INT(IPADDR_TYPE_V6)) },
    { MP_ROM_QSTR(MP_QSTR_ANY), MP_ROM_PTR(MP_ROM_INT(IPADDR_TYPE_ANY)) }
};

STATIC MP_DEFINE_CONST_DICT(IPADDR_TYPE_locals_dict, IPADDR_TYPE_locals_dict_table);

STATIC void IPADDR_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf IPADDR_TYPE");
}



STATIC const mp_obj_type_t mp_IPADDR_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_IPADDR_TYPE,
    .print = IPADDR_TYPE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&IPADDR_TYPE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf OFFER object definitions
 */
    

STATIC const mp_rom_map_elem_t OFFER_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_START), MP_ROM_PTR(MP_ROM_INT(OFFER_START)) },
    { MP_ROM_QSTR(MP_QSTR_ROUTER), MP_ROM_PTR(MP_ROM_INT(OFFER_ROUTER)) },
    { MP_ROM_QSTR(MP_QSTR_DNS), MP_ROM_PTR(MP_ROM_INT(OFFER_DNS)) },
    { MP_ROM_QSTR(MP_QSTR_END), MP_ROM_PTR(MP_ROM_INT(OFFER_END)) }
};

STATIC MP_DEFINE_CONST_DICT(OFFER_locals_dict, OFFER_locals_dict_table);

STATIC void OFFER_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf OFFER");
}



STATIC const mp_obj_type_t mp_OFFER_type = {
    { &mp_type_type },
    .name = MP_QSTR_OFFER,
    .print = OFFER_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&OFFER_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HTTP object definitions
 */
    

STATIC const mp_rom_map_elem_t HTTP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DELETE), MP_ROM_PTR(MP_ROM_INT(HTTP_DELETE)) },
    { MP_ROM_QSTR(MP_QSTR_GET), MP_ROM_PTR(MP_ROM_INT(HTTP_GET)) },
    { MP_ROM_QSTR(MP_QSTR_HEAD), MP_ROM_PTR(MP_ROM_INT(HTTP_HEAD)) },
    { MP_ROM_QSTR(MP_QSTR_POST), MP_ROM_PTR(MP_ROM_INT(HTTP_POST)) },
    { MP_ROM_QSTR(MP_QSTR_PUT), MP_ROM_PTR(MP_ROM_INT(HTTP_PUT)) },
    { MP_ROM_QSTR(MP_QSTR_CONNECT), MP_ROM_PTR(MP_ROM_INT(HTTP_CONNECT)) },
    { MP_ROM_QSTR(MP_QSTR_OPTIONS), MP_ROM_PTR(MP_ROM_INT(HTTP_OPTIONS)) },
    { MP_ROM_QSTR(MP_QSTR_TRACE), MP_ROM_PTR(MP_ROM_INT(HTTP_TRACE)) },
    { MP_ROM_QSTR(MP_QSTR_COPY), MP_ROM_PTR(MP_ROM_INT(HTTP_COPY)) },
    { MP_ROM_QSTR(MP_QSTR_LOCK), MP_ROM_PTR(MP_ROM_INT(HTTP_LOCK)) },
    { MP_ROM_QSTR(MP_QSTR_MKCOL), MP_ROM_PTR(MP_ROM_INT(HTTP_MKCOL)) },
    { MP_ROM_QSTR(MP_QSTR_MOVE), MP_ROM_PTR(MP_ROM_INT(HTTP_MOVE)) },
    { MP_ROM_QSTR(MP_QSTR_PROPFIND), MP_ROM_PTR(MP_ROM_INT(HTTP_PROPFIND)) },
    { MP_ROM_QSTR(MP_QSTR_PROPPATCH), MP_ROM_PTR(MP_ROM_INT(HTTP_PROPPATCH)) },
    { MP_ROM_QSTR(MP_QSTR_SEARCH), MP_ROM_PTR(MP_ROM_INT(HTTP_SEARCH)) },
    { MP_ROM_QSTR(MP_QSTR_UNLOCK), MP_ROM_PTR(MP_ROM_INT(HTTP_UNLOCK)) },
    { MP_ROM_QSTR(MP_QSTR_BIND), MP_ROM_PTR(MP_ROM_INT(HTTP_BIND)) },
    { MP_ROM_QSTR(MP_QSTR_REBIND), MP_ROM_PTR(MP_ROM_INT(HTTP_REBIND)) },
    { MP_ROM_QSTR(MP_QSTR_UNBIND), MP_ROM_PTR(MP_ROM_INT(HTTP_UNBIND)) },
    { MP_ROM_QSTR(MP_QSTR_ACL), MP_ROM_PTR(MP_ROM_INT(HTTP_ACL)) },
    { MP_ROM_QSTR(MP_QSTR_REPORT), MP_ROM_PTR(MP_ROM_INT(HTTP_REPORT)) },
    { MP_ROM_QSTR(MP_QSTR_MKACTIVITY), MP_ROM_PTR(MP_ROM_INT(HTTP_MKACTIVITY)) },
    { MP_ROM_QSTR(MP_QSTR_CHECKOUT), MP_ROM_PTR(MP_ROM_INT(HTTP_CHECKOUT)) },
    { MP_ROM_QSTR(MP_QSTR_MERGE), MP_ROM_PTR(MP_ROM_INT(HTTP_MERGE)) },
    { MP_ROM_QSTR(MP_QSTR_MSEARCH), MP_ROM_PTR(MP_ROM_INT(HTTP_MSEARCH)) },
    { MP_ROM_QSTR(MP_QSTR_NOTIFY), MP_ROM_PTR(MP_ROM_INT(HTTP_NOTIFY)) },
    { MP_ROM_QSTR(MP_QSTR_SUBSCRIBE), MP_ROM_PTR(MP_ROM_INT(HTTP_SUBSCRIBE)) },
    { MP_ROM_QSTR(MP_QSTR_UNSUBSCRIBE), MP_ROM_PTR(MP_ROM_INT(HTTP_UNSUBSCRIBE)) },
    { MP_ROM_QSTR(MP_QSTR_PATCH), MP_ROM_PTR(MP_ROM_INT(HTTP_PATCH)) },
    { MP_ROM_QSTR(MP_QSTR_PURGE), MP_ROM_PTR(MP_ROM_INT(HTTP_PURGE)) },
    { MP_ROM_QSTR(MP_QSTR_MKCALENDAR), MP_ROM_PTR(MP_ROM_INT(HTTP_MKCALENDAR)) },
    { MP_ROM_QSTR(MP_QSTR_LINK), MP_ROM_PTR(MP_ROM_INT(HTTP_LINK)) },
    { MP_ROM_QSTR(MP_QSTR_UNLINK), MP_ROM_PTR(MP_ROM_INT(HTTP_UNLINK)) },
    { MP_ROM_QSTR(MP_QSTR_REQUEST), MP_ROM_PTR(MP_ROM_INT(HTTP_REQUEST)) },
    { MP_ROM_QSTR(MP_QSTR_RESPONSE), MP_ROM_PTR(MP_ROM_INT(HTTP_RESPONSE)) },
    { MP_ROM_QSTR(MP_QSTR_BOTH), MP_ROM_PTR(MP_ROM_INT(HTTP_BOTH)) }
};

STATIC MP_DEFINE_CONST_DICT(HTTP_locals_dict, HTTP_locals_dict_table);

STATIC void HTTP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HTTP");
}



STATIC const mp_obj_type_t mp_HTTP_type = {
    { &mp_type_type },
    .name = MP_QSTR_HTTP,
    .print = HTTP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HTTP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf F object definitions
 */
    

STATIC const mp_rom_map_elem_t F_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_CHUNKED), MP_ROM_PTR(MP_ROM_INT(F_CHUNKED)) },
    { MP_ROM_QSTR(MP_QSTR_CONNECTION_KEEP_ALIVE), MP_ROM_PTR(MP_ROM_INT(F_CONNECTION_KEEP_ALIVE)) },
    { MP_ROM_QSTR(MP_QSTR_CONNECTION_CLOSE), MP_ROM_PTR(MP_ROM_INT(F_CONNECTION_CLOSE)) },
    { MP_ROM_QSTR(MP_QSTR_CONNECTION_UPGRADE), MP_ROM_PTR(MP_ROM_INT(F_CONNECTION_UPGRADE)) },
    { MP_ROM_QSTR(MP_QSTR_TRAILING), MP_ROM_PTR(MP_ROM_INT(F_TRAILING)) },
    { MP_ROM_QSTR(MP_QSTR_UPGRADE), MP_ROM_PTR(MP_ROM_INT(F_UPGRADE)) },
    { MP_ROM_QSTR(MP_QSTR_SKIPBODY), MP_ROM_PTR(MP_ROM_INT(F_SKIPBODY)) },
    { MP_ROM_QSTR(MP_QSTR_CONTENTLENGTH), MP_ROM_PTR(MP_ROM_INT(F_CONTENTLENGTH)) }
};

STATIC MP_DEFINE_CONST_DICT(F_locals_dict, F_locals_dict_table);

STATIC void F_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf F");
}



STATIC const mp_obj_type_t mp_F_type = {
    { &mp_type_type },
    .name = MP_QSTR_F,
    .print = F_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&F_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HPE object definitions
 */
    

STATIC const mp_rom_map_elem_t HPE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_OK), MP_ROM_PTR(MP_ROM_INT(HPE_OK)) },
    { MP_ROM_QSTR(MP_QSTR_CB_message_begin), MP_ROM_PTR(MP_ROM_INT(HPE_CB_message_begin)) },
    { MP_ROM_QSTR(MP_QSTR_CB_url), MP_ROM_PTR(MP_ROM_INT(HPE_CB_url)) },
    { MP_ROM_QSTR(MP_QSTR_CB_header_field), MP_ROM_PTR(MP_ROM_INT(HPE_CB_header_field)) },
    { MP_ROM_QSTR(MP_QSTR_CB_header_value), MP_ROM_PTR(MP_ROM_INT(HPE_CB_header_value)) },
    { MP_ROM_QSTR(MP_QSTR_CB_headers_complete), MP_ROM_PTR(MP_ROM_INT(HPE_CB_headers_complete)) },
    { MP_ROM_QSTR(MP_QSTR_CB_body), MP_ROM_PTR(MP_ROM_INT(HPE_CB_body)) },
    { MP_ROM_QSTR(MP_QSTR_CB_message_complete), MP_ROM_PTR(MP_ROM_INT(HPE_CB_message_complete)) },
    { MP_ROM_QSTR(MP_QSTR_CB_status), MP_ROM_PTR(MP_ROM_INT(HPE_CB_status)) },
    { MP_ROM_QSTR(MP_QSTR_CB_chunk_header), MP_ROM_PTR(MP_ROM_INT(HPE_CB_chunk_header)) },
    { MP_ROM_QSTR(MP_QSTR_CB_chunk_complete), MP_ROM_PTR(MP_ROM_INT(HPE_CB_chunk_complete)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_EOF_STATE), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_EOF_STATE)) },
    { MP_ROM_QSTR(MP_QSTR_HEADER_OVERFLOW), MP_ROM_PTR(MP_ROM_INT(HPE_HEADER_OVERFLOW)) },
    { MP_ROM_QSTR(MP_QSTR_CLOSED_CONNECTION), MP_ROM_PTR(MP_ROM_INT(HPE_CLOSED_CONNECTION)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_VERSION), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_VERSION)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_STATUS), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_STATUS)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_METHOD), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_METHOD)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_URL), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_URL)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_HOST), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_PORT), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_PORT)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_PATH), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_PATH)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_QUERY_STRING), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_QUERY_STRING)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_FRAGMENT), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_FRAGMENT)) },
    { MP_ROM_QSTR(MP_QSTR_LF_EXPECTED), MP_ROM_PTR(MP_ROM_INT(HPE_LF_EXPECTED)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_HEADER_TOKEN), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_HEADER_TOKEN)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_CONTENT_LENGTH), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_CONTENT_LENGTH)) },
    { MP_ROM_QSTR(MP_QSTR_UNEXPECTED_CONTENT_LENGTH), MP_ROM_PTR(MP_ROM_INT(HPE_UNEXPECTED_CONTENT_LENGTH)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_CHUNK_SIZE), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_CHUNK_SIZE)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_CONSTANT), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_CONSTANT)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_INTERNAL_STATE), MP_ROM_PTR(MP_ROM_INT(HPE_INVALID_INTERNAL_STATE)) },
    { MP_ROM_QSTR(MP_QSTR_STRICT), MP_ROM_PTR(MP_ROM_INT(HPE_STRICT)) },
    { MP_ROM_QSTR(MP_QSTR_PAUSED), MP_ROM_PTR(MP_ROM_INT(HPE_PAUSED)) },
    { MP_ROM_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(HPE_UNKNOWN)) }
};

STATIC MP_DEFINE_CONST_DICT(HPE_locals_dict, HPE_locals_dict_table);

STATIC void HPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HPE");
}



STATIC const mp_obj_type_t mp_HPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_HPE,
    .print = HPE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HPE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf UF object definitions
 */
    

STATIC const mp_rom_map_elem_t UF_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SCHEMA), MP_ROM_PTR(MP_ROM_INT(UF_SCHEMA)) },
    { MP_ROM_QSTR(MP_QSTR_HOST), MP_ROM_PTR(MP_ROM_INT(UF_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_PORT), MP_ROM_PTR(MP_ROM_INT(UF_PORT)) },
    { MP_ROM_QSTR(MP_QSTR_PATH), MP_ROM_PTR(MP_ROM_INT(UF_PATH)) },
    { MP_ROM_QSTR(MP_QSTR_QUERY), MP_ROM_PTR(MP_ROM_INT(UF_QUERY)) },
    { MP_ROM_QSTR(MP_QSTR_FRAGMENT), MP_ROM_PTR(MP_ROM_INT(UF_FRAGMENT)) },
    { MP_ROM_QSTR(MP_QSTR_USERINFO), MP_ROM_PTR(MP_ROM_INT(UF_USERINFO)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(UF_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(UF_locals_dict, UF_locals_dict_table);

STATIC void UF_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf UF");
}



STATIC const mp_obj_type_t mp_UF_type = {
    { &mp_type_type },
    .name = MP_QSTR_UF,
    .print = UF_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&UF_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ENUM_portMAX object definitions
 */
    

STATIC const mp_rom_map_elem_t ENUM_portMAX_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DELAY), MP_ROM_PTR(MP_ROM_INT(ENUM_portMAX_DELAY)) }
};

STATIC MP_DEFINE_CONST_DICT(ENUM_portMAX_locals_dict, ENUM_portMAX_locals_dict_table);

STATIC void ENUM_portMAX_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ENUM_portMAX");
}



STATIC const mp_obj_type_t mp_ENUM_portMAX_type = {
    { &mp_type_type },
    .name = MP_QSTR_ENUM_portMAX,
    .print = ENUM_portMAX_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ENUM_portMAX_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ENUM_I2S_PIN_NO object definitions
 */
    

STATIC const mp_rom_map_elem_t ENUM_I2S_PIN_NO_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_CHANGE), MP_ROM_PTR(MP_ROM_INT(ENUM_I2S_PIN_NO_CHANGE)) }
};

STATIC MP_DEFINE_CONST_DICT(ENUM_I2S_PIN_NO_locals_dict, ENUM_I2S_PIN_NO_locals_dict_table);

STATIC void ENUM_I2S_PIN_NO_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ENUM_I2S_PIN_NO");
}



STATIC const mp_obj_type_t mp_ENUM_I2S_PIN_NO_type = {
    { &mp_type_type },
    .name = MP_QSTR_ENUM_I2S_PIN_NO,
    .print = ENUM_I2S_PIN_NO_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ENUM_I2S_PIN_NO_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ENUM_SPI_DEVICE object definitions
 */
    

STATIC const mp_rom_map_elem_t ENUM_SPI_DEVICE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_TXBIT_LSBFIRST), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_TXBIT_LSBFIRST)) },
    { MP_ROM_QSTR(MP_QSTR_RXBIT_LSBFIRST), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_RXBIT_LSBFIRST)) },
    { MP_ROM_QSTR(MP_QSTR_BIT_LSBFIRST), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_BIT_LSBFIRST)) },
    { MP_ROM_QSTR(MP_QSTR__3WIRE), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_3WIRE)) },
    { MP_ROM_QSTR(MP_QSTR_POSITIVE_CS), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_POSITIVE_CS)) },
    { MP_ROM_QSTR(MP_QSTR_HALFDUPLEX), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_HALFDUPLEX)) },
    { MP_ROM_QSTR(MP_QSTR_NO_DUMMY), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_NO_DUMMY)) },
    { MP_ROM_QSTR(MP_QSTR_CLK_AS_CS), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_DEVICE_CLK_AS_CS)) }
};

STATIC MP_DEFINE_CONST_DICT(ENUM_SPI_DEVICE_locals_dict, ENUM_SPI_DEVICE_locals_dict_table);

STATIC void ENUM_SPI_DEVICE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ENUM_SPI_DEVICE");
}



STATIC const mp_obj_type_t mp_ENUM_SPI_DEVICE_type = {
    { &mp_type_type },
    .name = MP_QSTR_ENUM_SPI_DEVICE,
    .print = ENUM_SPI_DEVICE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ENUM_SPI_DEVICE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ENUM_SPI_TRANS object definitions
 */
    

STATIC const mp_rom_map_elem_t ENUM_SPI_TRANS_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_MODE_DIO), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_MODE_DIO)) },
    { MP_ROM_QSTR(MP_QSTR_MODE_QIO), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_MODE_QIO)) },
    { MP_ROM_QSTR(MP_QSTR_MODE_DIOQIO_ADDR), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_MODE_DIOQIO_ADDR)) },
    { MP_ROM_QSTR(MP_QSTR_USE_RXDATA), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_USE_RXDATA)) },
    { MP_ROM_QSTR(MP_QSTR_USE_TXDATA), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_USE_TXDATA)) },
    { MP_ROM_QSTR(MP_QSTR_VARIABLE_CMD), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_VARIABLE_CMD)) },
    { MP_ROM_QSTR(MP_QSTR_VARIABLE_ADDR), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_TRANS_VARIABLE_ADDR)) }
};

STATIC MP_DEFINE_CONST_DICT(ENUM_SPI_TRANS_locals_dict, ENUM_SPI_TRANS_locals_dict_table);

STATIC void ENUM_SPI_TRANS_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ENUM_SPI_TRANS");
}



STATIC const mp_obj_type_t mp_ENUM_SPI_TRANS_type = {
    { &mp_type_type },
    .name = MP_QSTR_ENUM_SPI_TRANS,
    .print = ENUM_SPI_TRANS_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ENUM_SPI_TRANS_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ENUM_MALLOC_CAP object definitions
 */
    

STATIC const mp_rom_map_elem_t ENUM_MALLOC_CAP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DMA), MP_ROM_PTR(MP_ROM_INT(ENUM_MALLOC_CAP_DMA)) },
    { MP_ROM_QSTR(MP_QSTR_INTERNAL), MP_ROM_PTR(MP_ROM_INT(ENUM_MALLOC_CAP_INTERNAL)) },
    { MP_ROM_QSTR(MP_QSTR_SPIRAM), MP_ROM_PTR(MP_ROM_INT(ENUM_MALLOC_CAP_SPIRAM)) }
};

STATIC MP_DEFINE_CONST_DICT(ENUM_MALLOC_CAP_locals_dict, ENUM_MALLOC_CAP_locals_dict_table);

STATIC void ENUM_MALLOC_CAP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ENUM_MALLOC_CAP");
}



STATIC const mp_obj_type_t mp_ENUM_MALLOC_CAP_type = {
    { &mp_type_type },
    .name = MP_QSTR_ENUM_MALLOC_CAP,
    .print = ENUM_MALLOC_CAP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ENUM_MALLOC_CAP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_PIN_INTR object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_PIN_INTR_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_PIN_INTR_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_POSEDGE), MP_ROM_PTR(MP_ROM_INT(GPIO_PIN_INTR_POSEDGE)) },
    { MP_ROM_QSTR(MP_QSTR_NEGEDGE), MP_ROM_PTR(MP_ROM_INT(GPIO_PIN_INTR_NEGEDGE)) },
    { MP_ROM_QSTR(MP_QSTR_ANYEDGE), MP_ROM_PTR(MP_ROM_INT(GPIO_PIN_INTR_ANYEDGE)) },
    { MP_ROM_QSTR(MP_QSTR_LOLEVEL), MP_ROM_PTR(MP_ROM_INT(GPIO_PIN_INTR_LOLEVEL)) },
    { MP_ROM_QSTR(MP_QSTR_HILEVEL), MP_ROM_PTR(MP_ROM_INT(GPIO_PIN_INTR_HILEVEL)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_PIN_INTR_locals_dict, GPIO_PIN_INTR_locals_dict_table);

STATIC void GPIO_PIN_INTR_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_PIN_INTR");
}



STATIC const mp_obj_type_t mp_GPIO_PIN_INTR_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_PIN_INTR,
    .print = GPIO_PIN_INTR_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_PIN_INTR_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_NUM object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_NUM_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NC), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_NC)) },
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_2)) },
    { MP_ROM_QSTR(MP_QSTR__3), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_3)) },
    { MP_ROM_QSTR(MP_QSTR__4), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_4)) },
    { MP_ROM_QSTR(MP_QSTR__5), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_5)) },
    { MP_ROM_QSTR(MP_QSTR__6), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_6)) },
    { MP_ROM_QSTR(MP_QSTR__7), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_7)) },
    { MP_ROM_QSTR(MP_QSTR__8), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_8)) },
    { MP_ROM_QSTR(MP_QSTR__9), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_9)) },
    { MP_ROM_QSTR(MP_QSTR__10), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_10)) },
    { MP_ROM_QSTR(MP_QSTR__11), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_11)) },
    { MP_ROM_QSTR(MP_QSTR__12), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_12)) },
    { MP_ROM_QSTR(MP_QSTR__13), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_13)) },
    { MP_ROM_QSTR(MP_QSTR__14), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_14)) },
    { MP_ROM_QSTR(MP_QSTR__15), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_15)) },
    { MP_ROM_QSTR(MP_QSTR__16), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_16)) },
    { MP_ROM_QSTR(MP_QSTR__17), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_17)) },
    { MP_ROM_QSTR(MP_QSTR__18), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_18)) },
    { MP_ROM_QSTR(MP_QSTR__19), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_19)) },
    { MP_ROM_QSTR(MP_QSTR__21), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_21)) },
    { MP_ROM_QSTR(MP_QSTR__22), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_22)) },
    { MP_ROM_QSTR(MP_QSTR__23), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_23)) },
    { MP_ROM_QSTR(MP_QSTR__25), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_25)) },
    { MP_ROM_QSTR(MP_QSTR__26), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_26)) },
    { MP_ROM_QSTR(MP_QSTR__27), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_27)) },
    { MP_ROM_QSTR(MP_QSTR__32), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_32)) },
    { MP_ROM_QSTR(MP_QSTR__33), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_33)) },
    { MP_ROM_QSTR(MP_QSTR__34), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_34)) },
    { MP_ROM_QSTR(MP_QSTR__35), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_35)) },
    { MP_ROM_QSTR(MP_QSTR__36), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_36)) },
    { MP_ROM_QSTR(MP_QSTR__37), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_37)) },
    { MP_ROM_QSTR(MP_QSTR__38), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_38)) },
    { MP_ROM_QSTR(MP_QSTR__39), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_39)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(GPIO_NUM_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_NUM_locals_dict, GPIO_NUM_locals_dict_table);

STATIC void GPIO_NUM_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_NUM");
}



STATIC const mp_obj_type_t mp_GPIO_NUM_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_NUM,
    .print = GPIO_NUM_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_NUM_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_INTR object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_INTR_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_POSEDGE), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_POSEDGE)) },
    { MP_ROM_QSTR(MP_QSTR_NEGEDGE), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_NEGEDGE)) },
    { MP_ROM_QSTR(MP_QSTR_ANYEDGE), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_ANYEDGE)) },
    { MP_ROM_QSTR(MP_QSTR_LOW_LEVEL), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_LOW_LEVEL)) },
    { MP_ROM_QSTR(MP_QSTR_HIGH_LEVEL), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_HIGH_LEVEL)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(GPIO_INTR_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_INTR_locals_dict, GPIO_INTR_locals_dict_table);

STATIC void GPIO_INTR_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_INTR");
}



STATIC const mp_obj_type_t mp_GPIO_INTR_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_INTR,
    .print = GPIO_INTR_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_INTR_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_MODE object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_MODE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_MODE_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_INPUT), MP_ROM_PTR(MP_ROM_INT(GPIO_MODE_INPUT)) },
    { MP_ROM_QSTR(MP_QSTR_OUTPUT), MP_ROM_PTR(MP_ROM_INT(GPIO_MODE_OUTPUT)) },
    { MP_ROM_QSTR(MP_QSTR_OUTPUT_OD), MP_ROM_PTR(MP_ROM_INT(GPIO_MODE_OUTPUT_OD)) },
    { MP_ROM_QSTR(MP_QSTR_INPUT_OUTPUT_OD), MP_ROM_PTR(MP_ROM_INT(GPIO_MODE_INPUT_OUTPUT_OD)) },
    { MP_ROM_QSTR(MP_QSTR_INPUT_OUTPUT), MP_ROM_PTR(MP_ROM_INT(GPIO_MODE_INPUT_OUTPUT)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_MODE_locals_dict, GPIO_MODE_locals_dict_table);

STATIC void GPIO_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_MODE");
}



STATIC const mp_obj_type_t mp_GPIO_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_MODE,
    .print = GPIO_MODE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_MODE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_PULLUP object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_PULLUP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLUP_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_ENABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLUP_ENABLE)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_PULLUP_locals_dict, GPIO_PULLUP_locals_dict_table);

STATIC void GPIO_PULLUP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_PULLUP");
}



STATIC const mp_obj_type_t mp_GPIO_PULLUP_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_PULLUP,
    .print = GPIO_PULLUP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_PULLUP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_PULLDOWN object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_PULLDOWN_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLDOWN_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_ENABLE), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLDOWN_ENABLE)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_PULLDOWN_locals_dict, GPIO_PULLDOWN_locals_dict_table);

STATIC void GPIO_PULLDOWN_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_PULLDOWN");
}



STATIC const mp_obj_type_t mp_GPIO_PULLDOWN_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_PULLDOWN,
    .print = GPIO_PULLDOWN_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_PULLDOWN_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_PULLUP_ONLY), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLUP_ONLY)) },
    { MP_ROM_QSTR(MP_QSTR_PULLDOWN_ONLY), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLDOWN_ONLY)) },
    { MP_ROM_QSTR(MP_QSTR_PULLUP_PULLDOWN), MP_ROM_PTR(MP_ROM_INT(GPIO_PULLUP_PULLDOWN)) },
    { MP_ROM_QSTR(MP_QSTR_FLOATING), MP_ROM_PTR(MP_ROM_INT(GPIO_FLOATING)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_locals_dict, GPIO_locals_dict_table);

STATIC void GPIO_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO");
}



STATIC const mp_obj_type_t mp_GPIO_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO,
    .print = GPIO_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf GPIO_DRIVE_CAP object definitions
 */
    

STATIC const mp_rom_map_elem_t GPIO_DRIVE_CAP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(GPIO_DRIVE_CAP_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(GPIO_DRIVE_CAP_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(GPIO_DRIVE_CAP_2)) },
    { MP_ROM_QSTR(MP_QSTR_DEFAULT), MP_ROM_PTR(MP_ROM_INT(GPIO_DRIVE_CAP_DEFAULT)) },
    { MP_ROM_QSTR(MP_QSTR__3), MP_ROM_PTR(MP_ROM_INT(GPIO_DRIVE_CAP_3)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(GPIO_DRIVE_CAP_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(GPIO_DRIVE_CAP_locals_dict, GPIO_DRIVE_CAP_locals_dict_table);

STATIC void GPIO_DRIVE_CAP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf GPIO_DRIVE_CAP");
}



STATIC const mp_obj_type_t mp_GPIO_DRIVE_CAP_type = {
    { &mp_type_type },
    .name = MP_QSTR_GPIO_DRIVE_CAP,
    .print = GPIO_DRIVE_CAP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&GPIO_DRIVE_CAP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PERIPH object definitions
 */
    

STATIC const mp_rom_map_elem_t PERIPH_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_LEDC_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_LEDC_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_UART0_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_UART0_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_UART1_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_UART1_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_UART2_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_UART2_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_I2C0_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_I2C0_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_I2C1_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_I2C1_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_I2S0_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_I2S0_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_I2S1_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_I2S1_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_TIMG0_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_TIMG0_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_TIMG1_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_TIMG1_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_PWM0_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_PWM0_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_PWM1_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_PWM1_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_PWM2_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_PWM2_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_PWM3_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_PWM3_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_UHCI0_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_UHCI0_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_UHCI1_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_UHCI1_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_RMT_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_RMT_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_PCNT_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_PCNT_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_SPI_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_SPI_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_HSPI_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_HSPI_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_VSPI_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_VSPI_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_SPI_DMA_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_SPI_DMA_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_SDMMC_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_SDMMC_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_SDIO_SLAVE_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_SDIO_SLAVE_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_CAN_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_CAN_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_EMAC_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_EMAC_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_RNG_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_RNG_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_WIFI_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_BT_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_BT_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_BT_COMMON_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_WIFI_BT_COMMON_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_BT_BASEBAND_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_BT_BASEBAND_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_BT_LC_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_BT_LC_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_AES_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_AES_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_SHA_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_SHA_MODULE)) },
    { MP_ROM_QSTR(MP_QSTR_RSA_MODULE), MP_ROM_PTR(MP_ROM_INT(PERIPH_RSA_MODULE)) }
};

STATIC MP_DEFINE_CONST_DICT(PERIPH_locals_dict, PERIPH_locals_dict_table);

STATIC void PERIPH_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PERIPH");
}



STATIC const mp_obj_type_t mp_PERIPH_type = {
    { &mp_type_type },
    .name = MP_QSTR_PERIPH,
    .print = PERIPH_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PERIPH_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ETS object definitions
 */
    

STATIC const mp_rom_map_elem_t ETS_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_OK), MP_ROM_PTR(MP_ROM_INT(ETS_OK)) },
    { MP_ROM_QSTR(MP_QSTR_FAILED), MP_ROM_PTR(MP_ROM_INT(ETS_FAILED)) }
};

STATIC MP_DEFINE_CONST_DICT(ETS_locals_dict, ETS_locals_dict_table);

STATIC void ETS_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ETS");
}



STATIC const mp_obj_type_t mp_ETS_type = {
    { &mp_type_type },
    .name = MP_QSTR_ETS,
    .print = ETS_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ETS_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ESP_LOG object definitions
 */
    

STATIC const mp_rom_map_elem_t ESP_LOG_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(ESP_LOG_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_ERROR), MP_ROM_PTR(MP_ROM_INT(ESP_LOG_ERROR)) },
    { MP_ROM_QSTR(MP_QSTR_WARN), MP_ROM_PTR(MP_ROM_INT(ESP_LOG_WARN)) },
    { MP_ROM_QSTR(MP_QSTR_INFO), MP_ROM_PTR(MP_ROM_INT(ESP_LOG_INFO)) },
    { MP_ROM_QSTR(MP_QSTR_DEBUG), MP_ROM_PTR(MP_ROM_INT(ESP_LOG_DEBUG)) },
    { MP_ROM_QSTR(MP_QSTR_VERBOSE), MP_ROM_PTR(MP_ROM_INT(ESP_LOG_VERBOSE)) }
};

STATIC MP_DEFINE_CONST_DICT(ESP_LOG_locals_dict, ESP_LOG_locals_dict_table);

STATIC void ESP_LOG_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ESP_LOG");
}



STATIC const mp_obj_type_t mp_ESP_LOG_type = {
    { &mp_type_type },
    .name = MP_QSTR_ESP_LOG,
    .print = ESP_LOG_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ESP_LOG_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC_ATTEN object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC_ATTEN_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DB_0), MP_ROM_PTR(MP_ROM_INT(ADC_ATTEN_DB_0)) },
    { MP_ROM_QSTR(MP_QSTR_DB_2_5), MP_ROM_PTR(MP_ROM_INT(ADC_ATTEN_DB_2_5)) },
    { MP_ROM_QSTR(MP_QSTR_DB_6), MP_ROM_PTR(MP_ROM_INT(ADC_ATTEN_DB_6)) },
    { MP_ROM_QSTR(MP_QSTR_DB_11), MP_ROM_PTR(MP_ROM_INT(ADC_ATTEN_DB_11)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC_ATTEN_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC_ATTEN_locals_dict, ADC_ATTEN_locals_dict_table);

STATIC void ADC_ATTEN_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC_ATTEN");
}



STATIC const mp_obj_type_t mp_ADC_ATTEN_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC_ATTEN,
    .print = ADC_ATTEN_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC_ATTEN_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC_WIDTH object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC_WIDTH_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_BIT_9), MP_ROM_PTR(MP_ROM_INT(ADC_WIDTH_BIT_9)) },
    { MP_ROM_QSTR(MP_QSTR_BIT_10), MP_ROM_PTR(MP_ROM_INT(ADC_WIDTH_BIT_10)) },
    { MP_ROM_QSTR(MP_QSTR_BIT_11), MP_ROM_PTR(MP_ROM_INT(ADC_WIDTH_BIT_11)) },
    { MP_ROM_QSTR(MP_QSTR_BIT_12), MP_ROM_PTR(MP_ROM_INT(ADC_WIDTH_BIT_12)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC_WIDTH_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC_WIDTH_locals_dict, ADC_WIDTH_locals_dict_table);

STATIC void ADC_WIDTH_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC_WIDTH");
}



STATIC const mp_obj_type_t mp_ADC_WIDTH_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC_WIDTH,
    .print = ADC_WIDTH_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC_WIDTH_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC1_CHANNEL object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC1_CHANNEL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_2)) },
    { MP_ROM_QSTR(MP_QSTR__3), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_3)) },
    { MP_ROM_QSTR(MP_QSTR__4), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_4)) },
    { MP_ROM_QSTR(MP_QSTR__5), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_5)) },
    { MP_ROM_QSTR(MP_QSTR__6), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_6)) },
    { MP_ROM_QSTR(MP_QSTR__7), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_7)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC1_CHANNEL_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC1_CHANNEL_locals_dict, ADC1_CHANNEL_locals_dict_table);

STATIC void ADC1_CHANNEL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC1_CHANNEL");
}



STATIC const mp_obj_type_t mp_ADC1_CHANNEL_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC1_CHANNEL,
    .print = ADC1_CHANNEL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC1_CHANNEL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC2_CHANNEL object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC2_CHANNEL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_2)) },
    { MP_ROM_QSTR(MP_QSTR__3), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_3)) },
    { MP_ROM_QSTR(MP_QSTR__4), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_4)) },
    { MP_ROM_QSTR(MP_QSTR__5), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_5)) },
    { MP_ROM_QSTR(MP_QSTR__6), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_6)) },
    { MP_ROM_QSTR(MP_QSTR__7), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_7)) },
    { MP_ROM_QSTR(MP_QSTR__8), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_8)) },
    { MP_ROM_QSTR(MP_QSTR__9), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_9)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC2_CHANNEL_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC2_CHANNEL_locals_dict, ADC2_CHANNEL_locals_dict_table);

STATIC void ADC2_CHANNEL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC2_CHANNEL");
}



STATIC const mp_obj_type_t mp_ADC2_CHANNEL_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC2_CHANNEL,
    .print = ADC2_CHANNEL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC2_CHANNEL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC_CHANNEL object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC_CHANNEL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_2)) },
    { MP_ROM_QSTR(MP_QSTR__3), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_3)) },
    { MP_ROM_QSTR(MP_QSTR__4), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_4)) },
    { MP_ROM_QSTR(MP_QSTR__5), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_5)) },
    { MP_ROM_QSTR(MP_QSTR__6), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_6)) },
    { MP_ROM_QSTR(MP_QSTR__7), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_7)) },
    { MP_ROM_QSTR(MP_QSTR__8), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_8)) },
    { MP_ROM_QSTR(MP_QSTR__9), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_9)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC_CHANNEL_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC_CHANNEL_locals_dict, ADC_CHANNEL_locals_dict_table);

STATIC void ADC_CHANNEL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC_CHANNEL");
}



STATIC const mp_obj_type_t mp_ADC_CHANNEL_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC_CHANNEL,
    .print = ADC_CHANNEL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC_CHANNEL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC_UNIT object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC_UNIT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(ADC_UNIT_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(ADC_UNIT_2)) },
    { MP_ROM_QSTR(MP_QSTR_BOTH), MP_ROM_PTR(MP_ROM_INT(ADC_UNIT_BOTH)) },
    { MP_ROM_QSTR(MP_QSTR_ALTER), MP_ROM_PTR(MP_ROM_INT(ADC_UNIT_ALTER)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC_UNIT_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC_UNIT_locals_dict, ADC_UNIT_locals_dict_table);

STATIC void ADC_UNIT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC_UNIT");
}



STATIC const mp_obj_type_t mp_ADC_UNIT_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC_UNIT,
    .print = ADC_UNIT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC_UNIT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC_ENCODE object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC_ENCODE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__12BIT), MP_ROM_PTR(MP_ROM_INT(ADC_ENCODE_12BIT)) },
    { MP_ROM_QSTR(MP_QSTR__11BIT), MP_ROM_PTR(MP_ROM_INT(ADC_ENCODE_11BIT)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC_ENCODE_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC_ENCODE_locals_dict, ADC_ENCODE_locals_dict_table);

STATIC void ADC_ENCODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC_ENCODE");
}



STATIC const mp_obj_type_t mp_ADC_ENCODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC_ENCODE,
    .print = ADC_ENCODE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC_ENCODE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ADC_I2S_DATA_SRC object definitions
 */
    

STATIC const mp_rom_map_elem_t ADC_I2S_DATA_SRC_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_IO_SIG), MP_ROM_PTR(MP_ROM_INT(ADC_I2S_DATA_SRC_IO_SIG)) },
    { MP_ROM_QSTR(MP_QSTR_ADC), MP_ROM_PTR(MP_ROM_INT(ADC_I2S_DATA_SRC_ADC)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ADC_I2S_DATA_SRC_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ADC_I2S_DATA_SRC_locals_dict, ADC_I2S_DATA_SRC_locals_dict_table);

STATIC void ADC_I2S_DATA_SRC_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ADC_I2S_DATA_SRC");
}



STATIC const mp_obj_type_t mp_ADC_I2S_DATA_SRC_type = {
    { &mp_type_type },
    .name = MP_QSTR_ADC_I2S_DATA_SRC,
    .print = ADC_I2S_DATA_SRC_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ADC_I2S_DATA_SRC_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_BITS_PER_SAMPLE object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_BITS_PER_SAMPLE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__8BIT), MP_ROM_PTR(MP_ROM_INT(I2S_BITS_PER_SAMPLE_8BIT)) },
    { MP_ROM_QSTR(MP_QSTR__16BIT), MP_ROM_PTR(MP_ROM_INT(I2S_BITS_PER_SAMPLE_16BIT)) },
    { MP_ROM_QSTR(MP_QSTR__24BIT), MP_ROM_PTR(MP_ROM_INT(I2S_BITS_PER_SAMPLE_24BIT)) },
    { MP_ROM_QSTR(MP_QSTR__32BIT), MP_ROM_PTR(MP_ROM_INT(I2S_BITS_PER_SAMPLE_32BIT)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_BITS_PER_SAMPLE_locals_dict, I2S_BITS_PER_SAMPLE_locals_dict_table);

STATIC void I2S_BITS_PER_SAMPLE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_BITS_PER_SAMPLE");
}



STATIC const mp_obj_type_t mp_I2S_BITS_PER_SAMPLE_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_BITS_PER_SAMPLE,
    .print = I2S_BITS_PER_SAMPLE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_BITS_PER_SAMPLE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_CHANNEL object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_CHANNEL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_MONO), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_MONO)) },
    { MP_ROM_QSTR(MP_QSTR_STEREO), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_STEREO)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_CHANNEL_locals_dict, I2S_CHANNEL_locals_dict_table);

STATIC void I2S_CHANNEL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_CHANNEL");
}



STATIC const mp_obj_type_t mp_I2S_CHANNEL_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_CHANNEL,
    .print = I2S_CHANNEL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_CHANNEL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_COMM_FORMAT object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_COMM_FORMAT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_I2S), MP_ROM_PTR(MP_ROM_INT(I2S_COMM_FORMAT_I2S)) },
    { MP_ROM_QSTR(MP_QSTR_I2S_MSB), MP_ROM_PTR(MP_ROM_INT(I2S_COMM_FORMAT_I2S_MSB)) },
    { MP_ROM_QSTR(MP_QSTR_I2S_LSB), MP_ROM_PTR(MP_ROM_INT(I2S_COMM_FORMAT_I2S_LSB)) },
    { MP_ROM_QSTR(MP_QSTR_PCM), MP_ROM_PTR(MP_ROM_INT(I2S_COMM_FORMAT_PCM)) },
    { MP_ROM_QSTR(MP_QSTR_PCM_SHORT), MP_ROM_PTR(MP_ROM_INT(I2S_COMM_FORMAT_PCM_SHORT)) },
    { MP_ROM_QSTR(MP_QSTR_PCM_LONG), MP_ROM_PTR(MP_ROM_INT(I2S_COMM_FORMAT_PCM_LONG)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_COMM_FORMAT_locals_dict, I2S_COMM_FORMAT_locals_dict_table);

STATIC void I2S_COMM_FORMAT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_COMM_FORMAT");
}



STATIC const mp_obj_type_t mp_I2S_COMM_FORMAT_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_COMM_FORMAT,
    .print = I2S_COMM_FORMAT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_COMM_FORMAT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_CHANNEL_FMT object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_CHANNEL_FMT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_RIGHT_LEFT), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_FMT_RIGHT_LEFT)) },
    { MP_ROM_QSTR(MP_QSTR_ALL_RIGHT), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_FMT_ALL_RIGHT)) },
    { MP_ROM_QSTR(MP_QSTR_ALL_LEFT), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_FMT_ALL_LEFT)) },
    { MP_ROM_QSTR(MP_QSTR_ONLY_RIGHT), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_FMT_ONLY_RIGHT)) },
    { MP_ROM_QSTR(MP_QSTR_ONLY_LEFT), MP_ROM_PTR(MP_ROM_INT(I2S_CHANNEL_FMT_ONLY_LEFT)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_CHANNEL_FMT_locals_dict, I2S_CHANNEL_FMT_locals_dict_table);

STATIC void I2S_CHANNEL_FMT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_CHANNEL_FMT");
}



STATIC const mp_obj_type_t mp_I2S_CHANNEL_FMT_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_CHANNEL_FMT,
    .print = I2S_CHANNEL_FMT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_CHANNEL_FMT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PDM_SAMPLE_RATE_RATIO object definitions
 */
    

STATIC const mp_rom_map_elem_t PDM_SAMPLE_RATE_RATIO_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__64), MP_ROM_PTR(MP_ROM_INT(PDM_SAMPLE_RATE_RATIO_64)) },
    { MP_ROM_QSTR(MP_QSTR__128), MP_ROM_PTR(MP_ROM_INT(PDM_SAMPLE_RATE_RATIO_128)) }
};

STATIC MP_DEFINE_CONST_DICT(PDM_SAMPLE_RATE_RATIO_locals_dict, PDM_SAMPLE_RATE_RATIO_locals_dict_table);

STATIC void PDM_SAMPLE_RATE_RATIO_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PDM_SAMPLE_RATE_RATIO");
}



STATIC const mp_obj_type_t mp_PDM_SAMPLE_RATE_RATIO_type = {
    { &mp_type_type },
    .name = MP_QSTR_PDM_SAMPLE_RATE_RATIO,
    .print = PDM_SAMPLE_RATE_RATIO_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PDM_SAMPLE_RATE_RATIO_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PDM_PCM_CONV object definitions
 */
    

STATIC const mp_rom_map_elem_t PDM_PCM_CONV_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_ENABLE), MP_ROM_PTR(MP_ROM_INT(PDM_PCM_CONV_ENABLE)) },
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(PDM_PCM_CONV_DISABLE)) }
};

STATIC MP_DEFINE_CONST_DICT(PDM_PCM_CONV_locals_dict, PDM_PCM_CONV_locals_dict_table);

STATIC void PDM_PCM_CONV_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PDM_PCM_CONV");
}



STATIC const mp_obj_type_t mp_PDM_PCM_CONV_type = {
    { &mp_type_type },
    .name = MP_QSTR_PDM_PCM_CONV,
    .print = PDM_PCM_CONV_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PDM_PCM_CONV_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_NUM object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_NUM_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(I2S_NUM_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(I2S_NUM_1)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(I2S_NUM_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_NUM_locals_dict, I2S_NUM_locals_dict_table);

STATIC void I2S_NUM_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_NUM");
}



STATIC const mp_obj_type_t mp_I2S_NUM_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_NUM,
    .print = I2S_NUM_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_NUM_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_MODE object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_MODE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_MASTER), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_MASTER)) },
    { MP_ROM_QSTR(MP_QSTR_SLAVE), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_SLAVE)) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_TX)) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_RX)) },
    { MP_ROM_QSTR(MP_QSTR_DAC_BUILT_IN), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_DAC_BUILT_IN)) },
    { MP_ROM_QSTR(MP_QSTR_ADC_BUILT_IN), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_ADC_BUILT_IN)) },
    { MP_ROM_QSTR(MP_QSTR_PDM), MP_ROM_PTR(MP_ROM_INT(I2S_MODE_PDM)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_MODE_locals_dict, I2S_MODE_locals_dict_table);

STATIC void I2S_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_MODE");
}



STATIC const mp_obj_type_t mp_I2S_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_MODE,
    .print = I2S_MODE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_MODE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_EVENT object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_EVENT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DMA_ERROR), MP_ROM_PTR(MP_ROM_INT(I2S_EVENT_DMA_ERROR)) },
    { MP_ROM_QSTR(MP_QSTR_TX_DONE), MP_ROM_PTR(MP_ROM_INT(I2S_EVENT_TX_DONE)) },
    { MP_ROM_QSTR(MP_QSTR_RX_DONE), MP_ROM_PTR(MP_ROM_INT(I2S_EVENT_RX_DONE)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(I2S_EVENT_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_EVENT_locals_dict, I2S_EVENT_locals_dict_table);

STATIC void I2S_EVENT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_EVENT");
}



STATIC const mp_obj_type_t mp_I2S_EVENT_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_EVENT,
    .print = I2S_EVENT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_EVENT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_DAC_CHANNEL object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_DAC_CHANNEL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(I2S_DAC_CHANNEL_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_RIGHT_EN), MP_ROM_PTR(MP_ROM_INT(I2S_DAC_CHANNEL_RIGHT_EN)) },
    { MP_ROM_QSTR(MP_QSTR_LEFT_EN), MP_ROM_PTR(MP_ROM_INT(I2S_DAC_CHANNEL_LEFT_EN)) },
    { MP_ROM_QSTR(MP_QSTR_BOTH_EN), MP_ROM_PTR(MP_ROM_INT(I2S_DAC_CHANNEL_BOTH_EN)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(I2S_DAC_CHANNEL_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_DAC_CHANNEL_locals_dict, I2S_DAC_CHANNEL_locals_dict_table);

STATIC void I2S_DAC_CHANNEL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_DAC_CHANNEL");
}



STATIC const mp_obj_type_t mp_I2S_DAC_CHANNEL_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_DAC_CHANNEL,
    .print = I2S_DAC_CHANNEL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_DAC_CHANNEL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf I2S_PDM_DSR object definitions
 */
    

STATIC const mp_rom_map_elem_t I2S_PDM_DSR_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__8S), MP_ROM_PTR(MP_ROM_INT(I2S_PDM_DSR_8S)) },
    { MP_ROM_QSTR(MP_QSTR__16S), MP_ROM_PTR(MP_ROM_INT(I2S_PDM_DSR_16S)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(I2S_PDM_DSR_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(I2S_PDM_DSR_locals_dict, I2S_PDM_DSR_locals_dict_table);

STATIC void I2S_PDM_DSR_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf I2S_PDM_DSR");
}



STATIC const mp_obj_type_t mp_I2S_PDM_DSR_type = {
    { &mp_type_type },
    .name = MP_QSTR_I2S_PDM_DSR,
    .print = I2S_PDM_DSR_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&I2S_PDM_DSR_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PCNT_MODE object definitions
 */
    

STATIC const mp_rom_map_elem_t PCNT_MODE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_KEEP), MP_ROM_PTR(MP_ROM_INT(PCNT_MODE_KEEP)) },
    { MP_ROM_QSTR(MP_QSTR_REVERSE), MP_ROM_PTR(MP_ROM_INT(PCNT_MODE_REVERSE)) },
    { MP_ROM_QSTR(MP_QSTR_DISABLE), MP_ROM_PTR(MP_ROM_INT(PCNT_MODE_DISABLE)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(PCNT_MODE_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(PCNT_MODE_locals_dict, PCNT_MODE_locals_dict_table);

STATIC void PCNT_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PCNT_MODE");
}



STATIC const mp_obj_type_t mp_PCNT_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_PCNT_MODE,
    .print = PCNT_MODE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PCNT_MODE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PCNT_COUNT object definitions
 */
    

STATIC const mp_rom_map_elem_t PCNT_COUNT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DIS), MP_ROM_PTR(MP_ROM_INT(PCNT_COUNT_DIS)) },
    { MP_ROM_QSTR(MP_QSTR_INC), MP_ROM_PTR(MP_ROM_INT(PCNT_COUNT_INC)) },
    { MP_ROM_QSTR(MP_QSTR_DEC), MP_ROM_PTR(MP_ROM_INT(PCNT_COUNT_DEC)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(PCNT_COUNT_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(PCNT_COUNT_locals_dict, PCNT_COUNT_locals_dict_table);

STATIC void PCNT_COUNT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PCNT_COUNT");
}



STATIC const mp_obj_type_t mp_PCNT_COUNT_type = {
    { &mp_type_type },
    .name = MP_QSTR_PCNT_COUNT,
    .print = PCNT_COUNT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PCNT_COUNT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PCNT_UNIT object definitions
 */
    

STATIC const mp_rom_map_elem_t PCNT_UNIT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_1)) },
    { MP_ROM_QSTR(MP_QSTR__2), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_2)) },
    { MP_ROM_QSTR(MP_QSTR__3), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_3)) },
    { MP_ROM_QSTR(MP_QSTR__4), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_4)) },
    { MP_ROM_QSTR(MP_QSTR__5), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_5)) },
    { MP_ROM_QSTR(MP_QSTR__6), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_6)) },
    { MP_ROM_QSTR(MP_QSTR__7), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_7)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(PCNT_UNIT_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(PCNT_UNIT_locals_dict, PCNT_UNIT_locals_dict_table);

STATIC void PCNT_UNIT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PCNT_UNIT");
}



STATIC const mp_obj_type_t mp_PCNT_UNIT_type = {
    { &mp_type_type },
    .name = MP_QSTR_PCNT_UNIT,
    .print = PCNT_UNIT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PCNT_UNIT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PCNT_CHANNEL object definitions
 */
    

STATIC const mp_rom_map_elem_t PCNT_CHANNEL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(PCNT_CHANNEL_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(PCNT_CHANNEL_1)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(PCNT_CHANNEL_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(PCNT_CHANNEL_locals_dict, PCNT_CHANNEL_locals_dict_table);

STATIC void PCNT_CHANNEL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PCNT_CHANNEL");
}



STATIC const mp_obj_type_t mp_PCNT_CHANNEL_type = {
    { &mp_type_type },
    .name = MP_QSTR_PCNT_CHANNEL,
    .print = PCNT_CHANNEL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PCNT_CHANNEL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf PCNT_EVT object definitions
 */
    

STATIC const mp_rom_map_elem_t PCNT_EVT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_L_LIM), MP_ROM_PTR(MP_ROM_INT(PCNT_EVT_L_LIM)) },
    { MP_ROM_QSTR(MP_QSTR_H_LIM), MP_ROM_PTR(MP_ROM_INT(PCNT_EVT_H_LIM)) },
    { MP_ROM_QSTR(MP_QSTR_THRES_0), MP_ROM_PTR(MP_ROM_INT(PCNT_EVT_THRES_0)) },
    { MP_ROM_QSTR(MP_QSTR_THRES_1), MP_ROM_PTR(MP_ROM_INT(PCNT_EVT_THRES_1)) },
    { MP_ROM_QSTR(MP_QSTR_ZERO), MP_ROM_PTR(MP_ROM_INT(PCNT_EVT_ZERO)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(PCNT_EVT_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(PCNT_EVT_locals_dict, PCNT_EVT_locals_dict_table);

STATIC void PCNT_EVT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf PCNT_EVT");
}



STATIC const mp_obj_type_t mp_PCNT_EVT_type = {
    { &mp_type_type },
    .name = MP_QSTR_PCNT_EVT,
    .print = PCNT_EVT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&PCNT_EVT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ESP_IF object definitions
 */
    

STATIC const mp_rom_map_elem_t ESP_IF_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_WIFI_STA), MP_ROM_PTR(MP_ROM_INT(ESP_IF_WIFI_STA)) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_AP), MP_ROM_PTR(MP_ROM_INT(ESP_IF_WIFI_AP)) },
    { MP_ROM_QSTR(MP_QSTR_ETH), MP_ROM_PTR(MP_ROM_INT(ESP_IF_ETH)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(ESP_IF_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(ESP_IF_locals_dict, ESP_IF_locals_dict_table);

STATIC void ESP_IF_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ESP_IF");
}



STATIC const mp_obj_type_t mp_ESP_IF_type = {
    { &mp_type_type },
    .name = MP_QSTR_ESP_IF,
    .print = ESP_IF_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ESP_IF_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_MODE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_MODE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NULL), MP_ROM_PTR(MP_ROM_INT(WIFI_MODE_NULL)) },
    { MP_ROM_QSTR(MP_QSTR_STA), MP_ROM_PTR(MP_ROM_INT(WIFI_MODE_STA)) },
    { MP_ROM_QSTR(MP_QSTR_AP), MP_ROM_PTR(MP_ROM_INT(WIFI_MODE_AP)) },
    { MP_ROM_QSTR(MP_QSTR_APSTA), MP_ROM_PTR(MP_ROM_INT(WIFI_MODE_APSTA)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(WIFI_MODE_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_MODE_locals_dict, WIFI_MODE_locals_dict_table);

STATIC void WIFI_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_MODE");
}



STATIC const mp_obj_type_t mp_WIFI_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_MODE,
    .print = WIFI_MODE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_MODE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_COUNTRY_POLICY object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_COUNTRY_POLICY_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_AUTO), MP_ROM_PTR(MP_ROM_INT(WIFI_COUNTRY_POLICY_AUTO)) },
    { MP_ROM_QSTR(MP_QSTR_MANUAL), MP_ROM_PTR(MP_ROM_INT(WIFI_COUNTRY_POLICY_MANUAL)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_COUNTRY_POLICY_locals_dict, WIFI_COUNTRY_POLICY_locals_dict_table);

STATIC void WIFI_COUNTRY_POLICY_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_COUNTRY_POLICY");
}



STATIC const mp_obj_type_t mp_WIFI_COUNTRY_POLICY_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_COUNTRY_POLICY,
    .print = WIFI_COUNTRY_POLICY_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_COUNTRY_POLICY_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_AUTH object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_AUTH_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_OPEN), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_OPEN)) },
    { MP_ROM_QSTR(MP_QSTR_WEP), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WEP)) },
    { MP_ROM_QSTR(MP_QSTR_WPA_PSK), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WPA_PSK)) },
    { MP_ROM_QSTR(MP_QSTR_WPA2_PSK), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WPA2_PSK)) },
    { MP_ROM_QSTR(MP_QSTR_WPA_WPA2_PSK), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WPA_WPA2_PSK)) },
    { MP_ROM_QSTR(MP_QSTR_WPA2_ENTERPRISE), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WPA2_ENTERPRISE)) },
    { MP_ROM_QSTR(MP_QSTR_WPA3_PSK), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WPA3_PSK)) },
    { MP_ROM_QSTR(MP_QSTR_WPA2_WPA3_PSK), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_WPA2_WPA3_PSK)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(WIFI_AUTH_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_AUTH_locals_dict, WIFI_AUTH_locals_dict_table);

STATIC void WIFI_AUTH_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_AUTH");
}



STATIC const mp_obj_type_t mp_WIFI_AUTH_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_AUTH,
    .print = WIFI_AUTH_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_AUTH_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_REASON object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_REASON_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_UNSPECIFIED), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_UNSPECIFIED)) },
    { MP_ROM_QSTR(MP_QSTR_AUTH_EXPIRE), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_AUTH_EXPIRE)) },
    { MP_ROM_QSTR(MP_QSTR_AUTH_LEAVE), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_AUTH_LEAVE)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_EXPIRE), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_ASSOC_EXPIRE)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_TOOMANY), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_ASSOC_TOOMANY)) },
    { MP_ROM_QSTR(MP_QSTR_NOT_AUTHED), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_NOT_AUTHED)) },
    { MP_ROM_QSTR(MP_QSTR_NOT_ASSOCED), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_NOT_ASSOCED)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_LEAVE), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_ASSOC_LEAVE)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_NOT_AUTHED), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_ASSOC_NOT_AUTHED)) },
    { MP_ROM_QSTR(MP_QSTR_DISASSOC_PWRCAP_BAD), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_DISASSOC_PWRCAP_BAD)) },
    { MP_ROM_QSTR(MP_QSTR_DISASSOC_SUPCHAN_BAD), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_DISASSOC_SUPCHAN_BAD)) },
    { MP_ROM_QSTR(MP_QSTR_IE_INVALID), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_IE_INVALID)) },
    { MP_ROM_QSTR(MP_QSTR_MIC_FAILURE), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_MIC_FAILURE)) },
    { MP_ROM_QSTR(MP_QSTR__4WAY_HANDSHAKE_TIMEOUT), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_4WAY_HANDSHAKE_TIMEOUT)) },
    { MP_ROM_QSTR(MP_QSTR_GROUP_KEY_UPDATE_TIMEOUT), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_GROUP_KEY_UPDATE_TIMEOUT)) },
    { MP_ROM_QSTR(MP_QSTR_IE_IN_4WAY_DIFFERS), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_IE_IN_4WAY_DIFFERS)) },
    { MP_ROM_QSTR(MP_QSTR_GROUP_CIPHER_INVALID), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_GROUP_CIPHER_INVALID)) },
    { MP_ROM_QSTR(MP_QSTR_PAIRWISE_CIPHER_INVALID), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_PAIRWISE_CIPHER_INVALID)) },
    { MP_ROM_QSTR(MP_QSTR_AKMP_INVALID), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_AKMP_INVALID)) },
    { MP_ROM_QSTR(MP_QSTR_UNSUPP_RSN_IE_VERSION), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_UNSUPP_RSN_IE_VERSION)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_RSN_IE_CAP), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_INVALID_RSN_IE_CAP)) },
    { MP_ROM_QSTR(MP_QSTR__802_1X_AUTH_FAILED), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_802_1X_AUTH_FAILED)) },
    { MP_ROM_QSTR(MP_QSTR_CIPHER_SUITE_REJECTED), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_CIPHER_SUITE_REJECTED)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_PMKID), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_INVALID_PMKID)) },
    { MP_ROM_QSTR(MP_QSTR_BEACON_TIMEOUT), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_BEACON_TIMEOUT)) },
    { MP_ROM_QSTR(MP_QSTR_NO_AP_FOUND), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_NO_AP_FOUND)) },
    { MP_ROM_QSTR(MP_QSTR_AUTH_FAIL), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_AUTH_FAIL)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_FAIL), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_ASSOC_FAIL)) },
    { MP_ROM_QSTR(MP_QSTR_HANDSHAKE_TIMEOUT), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_HANDSHAKE_TIMEOUT)) },
    { MP_ROM_QSTR(MP_QSTR_CONNECTION_FAIL), MP_ROM_PTR(MP_ROM_INT(WIFI_REASON_CONNECTION_FAIL)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_REASON_locals_dict, WIFI_REASON_locals_dict_table);

STATIC void WIFI_REASON_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_REASON");
}



STATIC const mp_obj_type_t mp_WIFI_REASON_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_REASON,
    .print = WIFI_REASON_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_REASON_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_SECOND_CHAN object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_SECOND_CHAN_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(WIFI_SECOND_CHAN_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_ABOVE), MP_ROM_PTR(MP_ROM_INT(WIFI_SECOND_CHAN_ABOVE)) },
    { MP_ROM_QSTR(MP_QSTR_BELOW), MP_ROM_PTR(MP_ROM_INT(WIFI_SECOND_CHAN_BELOW)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_SECOND_CHAN_locals_dict, WIFI_SECOND_CHAN_locals_dict_table);

STATIC void WIFI_SECOND_CHAN_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_SECOND_CHAN");
}



STATIC const mp_obj_type_t mp_WIFI_SECOND_CHAN_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_SECOND_CHAN,
    .print = WIFI_SECOND_CHAN_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_SECOND_CHAN_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_SCAN_TYPE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_SCAN_TYPE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_ACTIVE), MP_ROM_PTR(MP_ROM_INT(WIFI_SCAN_TYPE_ACTIVE)) },
    { MP_ROM_QSTR(MP_QSTR_PASSIVE), MP_ROM_PTR(MP_ROM_INT(WIFI_SCAN_TYPE_PASSIVE)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_SCAN_TYPE_locals_dict, WIFI_SCAN_TYPE_locals_dict_table);

STATIC void WIFI_SCAN_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_SCAN_TYPE");
}



STATIC const mp_obj_type_t mp_WIFI_SCAN_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_SCAN_TYPE,
    .print = WIFI_SCAN_TYPE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_SCAN_TYPE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_CIPHER_TYPE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_CIPHER_TYPE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_WEP40), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_WEP40)) },
    { MP_ROM_QSTR(MP_QSTR_WEP104), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_WEP104)) },
    { MP_ROM_QSTR(MP_QSTR_TKIP), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_TKIP)) },
    { MP_ROM_QSTR(MP_QSTR_CCMP), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_CCMP)) },
    { MP_ROM_QSTR(MP_QSTR_TKIP_CCMP), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_TKIP_CCMP)) },
    { MP_ROM_QSTR(MP_QSTR_AES_CMAC128), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_AES_CMAC128)) },
    { MP_ROM_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(WIFI_CIPHER_TYPE_UNKNOWN)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_CIPHER_TYPE_locals_dict, WIFI_CIPHER_TYPE_locals_dict_table);

STATIC void WIFI_CIPHER_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_CIPHER_TYPE");
}



STATIC const mp_obj_type_t mp_WIFI_CIPHER_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_CIPHER_TYPE,
    .print = WIFI_CIPHER_TYPE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_CIPHER_TYPE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_ANT object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_ANT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_ANT0), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_ANT0)) },
    { MP_ROM_QSTR(MP_QSTR_ANT1), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_ANT1)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_ANT_locals_dict, WIFI_ANT_locals_dict_table);

STATIC void WIFI_ANT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_ANT");
}



STATIC const mp_obj_type_t mp_WIFI_ANT_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_ANT,
    .print = WIFI_ANT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_ANT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_FAST_SCAN), MP_ROM_PTR(MP_ROM_INT(WIFI_FAST_SCAN)) },
    { MP_ROM_QSTR(MP_QSTR_ALL_CHANNEL_SCAN), MP_ROM_PTR(MP_ROM_INT(WIFI_ALL_CHANNEL_SCAN)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_locals_dict, WIFI_locals_dict_table);

STATIC void WIFI_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI");
}



STATIC const mp_obj_type_t mp_WIFI_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI,
    .print = WIFI_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_CONNECT_AP_BY object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_CONNECT_AP_BY_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIGNAL), MP_ROM_PTR(MP_ROM_INT(WIFI_CONNECT_AP_BY_SIGNAL)) },
    { MP_ROM_QSTR(MP_QSTR_SECURITY), MP_ROM_PTR(MP_ROM_INT(WIFI_CONNECT_AP_BY_SECURITY)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_CONNECT_AP_BY_locals_dict, WIFI_CONNECT_AP_BY_locals_dict_table);

STATIC void WIFI_CONNECT_AP_BY_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_CONNECT_AP_BY");
}



STATIC const mp_obj_type_t mp_WIFI_CONNECT_AP_BY_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_CONNECT_AP_BY,
    .print = WIFI_CONNECT_AP_BY_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_CONNECT_AP_BY_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_PS object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_PS_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(WIFI_PS_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_MIN_MODEM), MP_ROM_PTR(MP_ROM_INT(WIFI_PS_MIN_MODEM)) },
    { MP_ROM_QSTR(MP_QSTR_MAX_MODEM), MP_ROM_PTR(MP_ROM_INT(WIFI_PS_MAX_MODEM)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_PS_locals_dict, WIFI_PS_locals_dict_table);

STATIC void WIFI_PS_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_PS");
}



STATIC const mp_obj_type_t mp_WIFI_PS_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_PS,
    .print = WIFI_PS_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_PS_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_BW object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_BW_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_HT20), MP_ROM_PTR(MP_ROM_INT(WIFI_BW_HT20)) },
    { MP_ROM_QSTR(MP_QSTR_HT40), MP_ROM_PTR(MP_ROM_INT(WIFI_BW_HT40)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_BW_locals_dict, WIFI_BW_locals_dict_table);

STATIC void WIFI_BW_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_BW");
}



STATIC const mp_obj_type_t mp_WIFI_BW_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_BW,
    .print = WIFI_BW_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_BW_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_STORAGE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_STORAGE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_FLASH), MP_ROM_PTR(MP_ROM_INT(WIFI_STORAGE_FLASH)) },
    { MP_ROM_QSTR(MP_QSTR_RAM), MP_ROM_PTR(MP_ROM_INT(WIFI_STORAGE_RAM)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_STORAGE_locals_dict, WIFI_STORAGE_locals_dict_table);

STATIC void WIFI_STORAGE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_STORAGE");
}



STATIC const mp_obj_type_t mp_WIFI_STORAGE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_STORAGE,
    .print = WIFI_STORAGE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_STORAGE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_VND_IE_TYPE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_VND_IE_TYPE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_BEACON), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_TYPE_BEACON)) },
    { MP_ROM_QSTR(MP_QSTR_PROBE_REQ), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_TYPE_PROBE_REQ)) },
    { MP_ROM_QSTR(MP_QSTR_PROBE_RESP), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_TYPE_PROBE_RESP)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_REQ), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_TYPE_ASSOC_REQ)) },
    { MP_ROM_QSTR(MP_QSTR_ASSOC_RESP), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_TYPE_ASSOC_RESP)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_VND_IE_TYPE_locals_dict, WIFI_VND_IE_TYPE_locals_dict_table);

STATIC void WIFI_VND_IE_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_VND_IE_TYPE");
}



STATIC const mp_obj_type_t mp_WIFI_VND_IE_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_VND_IE_TYPE,
    .print = WIFI_VND_IE_TYPE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_VND_IE_TYPE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_VND_IE_ID object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_VND_IE_ID_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__0), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_ID_0)) },
    { MP_ROM_QSTR(MP_QSTR__1), MP_ROM_PTR(MP_ROM_INT(WIFI_VND_IE_ID_1)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_VND_IE_ID_locals_dict, WIFI_VND_IE_ID_locals_dict_table);

STATIC void WIFI_VND_IE_ID_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_VND_IE_ID");
}



STATIC const mp_obj_type_t mp_WIFI_VND_IE_ID_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_VND_IE_ID,
    .print = WIFI_VND_IE_ID_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_VND_IE_ID_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_PKT object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_PKT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_MGMT), MP_ROM_PTR(MP_ROM_INT(WIFI_PKT_MGMT)) },
    { MP_ROM_QSTR(MP_QSTR_CTRL), MP_ROM_PTR(MP_ROM_INT(WIFI_PKT_CTRL)) },
    { MP_ROM_QSTR(MP_QSTR_DATA), MP_ROM_PTR(MP_ROM_INT(WIFI_PKT_DATA)) },
    { MP_ROM_QSTR(MP_QSTR_MISC), MP_ROM_PTR(MP_ROM_INT(WIFI_PKT_MISC)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_PKT_locals_dict, WIFI_PKT_locals_dict_table);

STATIC void WIFI_PKT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_PKT");
}



STATIC const mp_obj_type_t mp_WIFI_PKT_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_PKT,
    .print = WIFI_PKT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_PKT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_ANT_MODE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_ANT_MODE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_ANT0), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_MODE_ANT0)) },
    { MP_ROM_QSTR(MP_QSTR_ANT1), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_MODE_ANT1)) },
    { MP_ROM_QSTR(MP_QSTR_AUTO), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_MODE_AUTO)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(WIFI_ANT_MODE_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_ANT_MODE_locals_dict, WIFI_ANT_MODE_locals_dict_table);

STATIC void WIFI_ANT_MODE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_ANT_MODE");
}



STATIC const mp_obj_type_t mp_WIFI_ANT_MODE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_ANT_MODE,
    .print = WIFI_ANT_MODE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_ANT_MODE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_PHY_RATE object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_PHY_RATE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR__1M_L), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_1M_L)) },
    { MP_ROM_QSTR(MP_QSTR__2M_L), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_2M_L)) },
    { MP_ROM_QSTR(MP_QSTR__5M_L), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_5M_L)) },
    { MP_ROM_QSTR(MP_QSTR__11M_L), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_11M_L)) },
    { MP_ROM_QSTR(MP_QSTR__2M_S), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_2M_S)) },
    { MP_ROM_QSTR(MP_QSTR__5M_S), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_5M_S)) },
    { MP_ROM_QSTR(MP_QSTR__11M_S), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_11M_S)) },
    { MP_ROM_QSTR(MP_QSTR__48M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_48M)) },
    { MP_ROM_QSTR(MP_QSTR__24M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_24M)) },
    { MP_ROM_QSTR(MP_QSTR__12M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_12M)) },
    { MP_ROM_QSTR(MP_QSTR__6M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_6M)) },
    { MP_ROM_QSTR(MP_QSTR__54M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_54M)) },
    { MP_ROM_QSTR(MP_QSTR__36M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_36M)) },
    { MP_ROM_QSTR(MP_QSTR__18M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_18M)) },
    { MP_ROM_QSTR(MP_QSTR__9M), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_9M)) },
    { MP_ROM_QSTR(MP_QSTR_MCS0_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS0_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS1_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS1_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS2_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS2_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS3_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS3_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS4_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS4_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS5_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS5_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS6_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS6_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS7_LGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS7_LGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS0_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS0_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS1_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS1_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS2_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS2_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS3_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS3_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS4_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS4_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS5_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS5_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS6_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS6_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_MCS7_SGI), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MCS7_SGI)) },
    { MP_ROM_QSTR(MP_QSTR_LORA_250K), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_LORA_250K)) },
    { MP_ROM_QSTR(MP_QSTR_LORA_500K), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_LORA_500K)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(WIFI_PHY_RATE_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_PHY_RATE_locals_dict, WIFI_PHY_RATE_locals_dict_table);

STATIC void WIFI_PHY_RATE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_PHY_RATE");
}



STATIC const mp_obj_type_t mp_WIFI_PHY_RATE_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_PHY_RATE,
    .print = WIFI_PHY_RATE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_PHY_RATE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WIFI_EVENT object definitions
 */
    

STATIC const mp_rom_map_elem_t WIFI_EVENT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_WIFI_READY), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_WIFI_READY)) },
    { MP_ROM_QSTR(MP_QSTR_SCAN_DONE), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_SCAN_DONE)) },
    { MP_ROM_QSTR(MP_QSTR_STA_START), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_START)) },
    { MP_ROM_QSTR(MP_QSTR_STA_STOP), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_STOP)) },
    { MP_ROM_QSTR(MP_QSTR_STA_CONNECTED), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_CONNECTED)) },
    { MP_ROM_QSTR(MP_QSTR_STA_DISCONNECTED), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_DISCONNECTED)) },
    { MP_ROM_QSTR(MP_QSTR_STA_AUTHMODE_CHANGE), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_AUTHMODE_CHANGE)) },
    { MP_ROM_QSTR(MP_QSTR_STA_WPS_ER_SUCCESS), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_WPS_ER_SUCCESS)) },
    { MP_ROM_QSTR(MP_QSTR_STA_WPS_ER_FAILED), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_WPS_ER_FAILED)) },
    { MP_ROM_QSTR(MP_QSTR_STA_WPS_ER_TIMEOUT), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_WPS_ER_TIMEOUT)) },
    { MP_ROM_QSTR(MP_QSTR_STA_WPS_ER_PIN), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_WPS_ER_PIN)) },
    { MP_ROM_QSTR(MP_QSTR_STA_WPS_ER_PBC_OVERLAP), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_STA_WPS_ER_PBC_OVERLAP)) },
    { MP_ROM_QSTR(MP_QSTR_AP_START), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_AP_START)) },
    { MP_ROM_QSTR(MP_QSTR_AP_STOP), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_AP_STOP)) },
    { MP_ROM_QSTR(MP_QSTR_AP_STACONNECTED), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_AP_STACONNECTED)) },
    { MP_ROM_QSTR(MP_QSTR_AP_STADISCONNECTED), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_AP_STADISCONNECTED)) },
    { MP_ROM_QSTR(MP_QSTR_AP_PROBEREQRECVED), MP_ROM_PTR(MP_ROM_INT(WIFI_EVENT_AP_PROBEREQRECVED)) }
};

STATIC MP_DEFINE_CONST_DICT(WIFI_EVENT_locals_dict, WIFI_EVENT_locals_dict_table);

STATIC void WIFI_EVENT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WIFI_EVENT");
}



STATIC const mp_obj_type_t mp_WIFI_EVENT_type = {
    { &mp_type_type },
    .name = MP_QSTR_WIFI_EVENT,
    .print = WIFI_EVENT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WIFI_EVENT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf WPS_FAIL_REASON object definitions
 */
    

STATIC const mp_rom_map_elem_t WPS_FAIL_REASON_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NORMAL), MP_ROM_PTR(MP_ROM_INT(WPS_FAIL_REASON_NORMAL)) },
    { MP_ROM_QSTR(MP_QSTR_RECV_M2D), MP_ROM_PTR(MP_ROM_INT(WPS_FAIL_REASON_RECV_M2D)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(WPS_FAIL_REASON_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(WPS_FAIL_REASON_locals_dict, WPS_FAIL_REASON_locals_dict_table);

STATIC void WPS_FAIL_REASON_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf WPS_FAIL_REASON");
}



STATIC const mp_obj_type_t mp_WPS_FAIL_REASON_type = {
    { &mp_type_type },
    .name = MP_QSTR_WPS_FAIL_REASON,
    .print = WPS_FAIL_REASON_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&WPS_FAIL_REASON_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ESP_MAC object definitions
 */
    

STATIC const mp_rom_map_elem_t ESP_MAC_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_WIFI_STA), MP_ROM_PTR(MP_ROM_INT(ESP_MAC_WIFI_STA)) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_SOFTAP), MP_ROM_PTR(MP_ROM_INT(ESP_MAC_WIFI_SOFTAP)) },
    { MP_ROM_QSTR(MP_QSTR_BT), MP_ROM_PTR(MP_ROM_INT(ESP_MAC_BT)) },
    { MP_ROM_QSTR(MP_QSTR_ETH), MP_ROM_PTR(MP_ROM_INT(ESP_MAC_ETH)) }
};

STATIC MP_DEFINE_CONST_DICT(ESP_MAC_locals_dict, ESP_MAC_locals_dict_table);

STATIC void ESP_MAC_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ESP_MAC");
}



STATIC const mp_obj_type_t mp_ESP_MAC_type = {
    { &mp_type_type },
    .name = MP_QSTR_ESP_MAC,
    .print = ESP_MAC_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ESP_MAC_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf ESP_RST object definitions
 */
    

STATIC const mp_rom_map_elem_t ESP_RST_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(ESP_RST_UNKNOWN)) },
    { MP_ROM_QSTR(MP_QSTR_POWERON), MP_ROM_PTR(MP_ROM_INT(ESP_RST_POWERON)) },
    { MP_ROM_QSTR(MP_QSTR_EXT), MP_ROM_PTR(MP_ROM_INT(ESP_RST_EXT)) },
    { MP_ROM_QSTR(MP_QSTR_SW), MP_ROM_PTR(MP_ROM_INT(ESP_RST_SW)) },
    { MP_ROM_QSTR(MP_QSTR_PANIC), MP_ROM_PTR(MP_ROM_INT(ESP_RST_PANIC)) },
    { MP_ROM_QSTR(MP_QSTR_INT_WDT), MP_ROM_PTR(MP_ROM_INT(ESP_RST_INT_WDT)) },
    { MP_ROM_QSTR(MP_QSTR_TASK_WDT), MP_ROM_PTR(MP_ROM_INT(ESP_RST_TASK_WDT)) },
    { MP_ROM_QSTR(MP_QSTR_WDT), MP_ROM_PTR(MP_ROM_INT(ESP_RST_WDT)) },
    { MP_ROM_QSTR(MP_QSTR_DEEPSLEEP), MP_ROM_PTR(MP_ROM_INT(ESP_RST_DEEPSLEEP)) },
    { MP_ROM_QSTR(MP_QSTR_BROWNOUT), MP_ROM_PTR(MP_ROM_INT(ESP_RST_BROWNOUT)) },
    { MP_ROM_QSTR(MP_QSTR_SDIO), MP_ROM_PTR(MP_ROM_INT(ESP_RST_SDIO)) }
};

STATIC MP_DEFINE_CONST_DICT(ESP_RST_locals_dict, ESP_RST_locals_dict_table);

STATIC void ESP_RST_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf ESP_RST");
}



STATIC const mp_obj_type_t mp_ESP_RST_type = {
    { &mp_type_type },
    .name = MP_QSTR_ESP_RST,
    .print = ESP_RST_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&ESP_RST_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf CHIP object definitions
 */
    

STATIC const mp_rom_map_elem_t CHIP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_ESP32), MP_ROM_PTR(MP_ROM_INT(CHIP_ESP32)) }
};

STATIC MP_DEFINE_CONST_DICT(CHIP_locals_dict, CHIP_locals_dict_table);

STATIC void CHIP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf CHIP");
}



STATIC const mp_obj_type_t mp_CHIP_type = {
    { &mp_type_type },
    .name = MP_QSTR_CHIP,
    .print = CHIP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&CHIP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf TCPIP_ADAPTER_IF object definitions
 */
    

STATIC const mp_rom_map_elem_t TCPIP_ADAPTER_IF_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_STA), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IF_STA)) },
    { MP_ROM_QSTR(MP_QSTR_AP), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IF_AP)) },
    { MP_ROM_QSTR(MP_QSTR_ETH), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IF_ETH)) },
    { MP_ROM_QSTR(MP_QSTR_TEST), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IF_TEST)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IF_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(TCPIP_ADAPTER_IF_locals_dict, TCPIP_ADAPTER_IF_locals_dict_table);

STATIC void TCPIP_ADAPTER_IF_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf TCPIP_ADAPTER_IF");
}



STATIC const mp_obj_type_t mp_TCPIP_ADAPTER_IF_type = {
    { &mp_type_type },
    .name = MP_QSTR_TCPIP_ADAPTER_IF,
    .print = TCPIP_ADAPTER_IF_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&TCPIP_ADAPTER_IF_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf TCPIP_ADAPTER_DNS object definitions
 */
    

STATIC const mp_rom_map_elem_t TCPIP_ADAPTER_DNS_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_MAIN), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DNS_MAIN)) },
    { MP_ROM_QSTR(MP_QSTR_BACKUP), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DNS_BACKUP)) },
    { MP_ROM_QSTR(MP_QSTR_FALLBACK), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DNS_FALLBACK)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DNS_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(TCPIP_ADAPTER_DNS_locals_dict, TCPIP_ADAPTER_DNS_locals_dict_table);

STATIC void TCPIP_ADAPTER_DNS_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf TCPIP_ADAPTER_DNS");
}



STATIC const mp_obj_type_t mp_TCPIP_ADAPTER_DNS_type = {
    { &mp_type_type },
    .name = MP_QSTR_TCPIP_ADAPTER_DNS,
    .print = TCPIP_ADAPTER_DNS_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&TCPIP_ADAPTER_DNS_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf TCPIP_ADAPTER_DHCP object definitions
 */
    

STATIC const mp_rom_map_elem_t TCPIP_ADAPTER_DHCP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_INIT), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DHCP_INIT)) },
    { MP_ROM_QSTR(MP_QSTR_STARTED), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DHCP_STARTED)) },
    { MP_ROM_QSTR(MP_QSTR_STOPPED), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DHCP_STOPPED)) },
    { MP_ROM_QSTR(MP_QSTR_STATUS_MAX), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DHCP_STATUS_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(TCPIP_ADAPTER_DHCP_locals_dict, TCPIP_ADAPTER_DHCP_locals_dict_table);

STATIC void TCPIP_ADAPTER_DHCP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf TCPIP_ADAPTER_DHCP");
}



STATIC const mp_obj_type_t mp_TCPIP_ADAPTER_DHCP_type = {
    { &mp_type_type },
    .name = MP_QSTR_TCPIP_ADAPTER_DHCP,
    .print = TCPIP_ADAPTER_DHCP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&TCPIP_ADAPTER_DHCP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf TCPIP_ADAPTER_OP object definitions
 */
    

STATIC const mp_rom_map_elem_t TCPIP_ADAPTER_OP_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_START), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_OP_START)) },
    { MP_ROM_QSTR(MP_QSTR_SET), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_OP_SET)) },
    { MP_ROM_QSTR(MP_QSTR_GET), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_OP_GET)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_OP_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(TCPIP_ADAPTER_OP_locals_dict, TCPIP_ADAPTER_OP_locals_dict_table);

STATIC void TCPIP_ADAPTER_OP_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf TCPIP_ADAPTER_OP");
}



STATIC const mp_obj_type_t mp_TCPIP_ADAPTER_OP_type = {
    { &mp_type_type },
    .name = MP_QSTR_TCPIP_ADAPTER_OP,
    .print = TCPIP_ADAPTER_OP_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&TCPIP_ADAPTER_OP_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf TCPIP_ADAPTER object definitions
 */
    

STATIC const mp_rom_map_elem_t TCPIP_ADAPTER_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_DOMAIN_NAME_SERVER), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_DOMAIN_NAME_SERVER)) },
    { MP_ROM_QSTR(MP_QSTR_ROUTER_SOLICITATION_ADDRESS), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_ROUTER_SOLICITATION_ADDRESS)) },
    { MP_ROM_QSTR(MP_QSTR_REQUESTED_IP_ADDRESS), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_REQUESTED_IP_ADDRESS)) },
    { MP_ROM_QSTR(MP_QSTR_IP_ADDRESS_LEASE_TIME), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IP_ADDRESS_LEASE_TIME)) },
    { MP_ROM_QSTR(MP_QSTR_IP_REQUEST_RETRY_TIME), MP_ROM_PTR(MP_ROM_INT(TCPIP_ADAPTER_IP_REQUEST_RETRY_TIME)) }
};

STATIC MP_DEFINE_CONST_DICT(TCPIP_ADAPTER_locals_dict, TCPIP_ADAPTER_locals_dict_table);

STATIC void TCPIP_ADAPTER_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf TCPIP_ADAPTER");
}



STATIC const mp_obj_type_t mp_TCPIP_ADAPTER_type = {
    { &mp_type_type },
    .name = MP_QSTR_TCPIP_ADAPTER,
    .print = TCPIP_ADAPTER_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&TCPIP_ADAPTER_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf IP_EVENT object definitions
 */
    

STATIC const mp_rom_map_elem_t IP_EVENT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_STA_GOT_IP), MP_ROM_PTR(MP_ROM_INT(IP_EVENT_STA_GOT_IP)) },
    { MP_ROM_QSTR(MP_QSTR_STA_LOST_IP), MP_ROM_PTR(MP_ROM_INT(IP_EVENT_STA_LOST_IP)) },
    { MP_ROM_QSTR(MP_QSTR_AP_STAIPASSIGNED), MP_ROM_PTR(MP_ROM_INT(IP_EVENT_AP_STAIPASSIGNED)) },
    { MP_ROM_QSTR(MP_QSTR_GOT_IP6), MP_ROM_PTR(MP_ROM_INT(IP_EVENT_GOT_IP6)) },
    { MP_ROM_QSTR(MP_QSTR_ETH_GOT_IP), MP_ROM_PTR(MP_ROM_INT(IP_EVENT_ETH_GOT_IP)) }
};

STATIC MP_DEFINE_CONST_DICT(IP_EVENT_locals_dict, IP_EVENT_locals_dict_table);

STATIC void IP_EVENT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf IP_EVENT");
}



STATIC const mp_obj_type_t mp_IP_EVENT_type = {
    { &mp_type_type },
    .name = MP_QSTR_IP_EVENT,
    .print = IP_EVENT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&IP_EVENT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf MDNS_IP_PROTOCOL object definitions
 */
    

STATIC const mp_rom_map_elem_t MDNS_IP_PROTOCOL_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_V4), MP_ROM_PTR(MP_ROM_INT(MDNS_IP_PROTOCOL_V4)) },
    { MP_ROM_QSTR(MP_QSTR_V6), MP_ROM_PTR(MP_ROM_INT(MDNS_IP_PROTOCOL_V6)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(MDNS_IP_PROTOCOL_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(MDNS_IP_PROTOCOL_locals_dict, MDNS_IP_PROTOCOL_locals_dict_table);

STATIC void MDNS_IP_PROTOCOL_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf MDNS_IP_PROTOCOL");
}



STATIC const mp_obj_type_t mp_MDNS_IP_PROTOCOL_type = {
    { &mp_type_type },
    .name = MP_QSTR_MDNS_IP_PROTOCOL,
    .print = MDNS_IP_PROTOCOL_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&MDNS_IP_PROTOCOL_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HTTP_EVENT object definitions
 */
    

STATIC const mp_rom_map_elem_t HTTP_EVENT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_ERROR), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_ERROR)) },
    { MP_ROM_QSTR(MP_QSTR_ON_CONNECTED), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_ON_CONNECTED)) },
    { MP_ROM_QSTR(MP_QSTR_HEADERS_SENT), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_HEADERS_SENT)) },
    { MP_ROM_QSTR(MP_QSTR_HEADER_SENT), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_HEADER_SENT)) },
    { MP_ROM_QSTR(MP_QSTR_ON_HEADER), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_ON_HEADER)) },
    { MP_ROM_QSTR(MP_QSTR_ON_DATA), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_ON_DATA)) },
    { MP_ROM_QSTR(MP_QSTR_ON_FINISH), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_ON_FINISH)) },
    { MP_ROM_QSTR(MP_QSTR_DISCONNECTED), MP_ROM_PTR(MP_ROM_INT(HTTP_EVENT_DISCONNECTED)) }
};

STATIC MP_DEFINE_CONST_DICT(HTTP_EVENT_locals_dict, HTTP_EVENT_locals_dict_table);

STATIC void HTTP_EVENT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HTTP_EVENT");
}



STATIC const mp_obj_type_t mp_HTTP_EVENT_type = {
    { &mp_type_type },
    .name = MP_QSTR_HTTP_EVENT,
    .print = HTTP_EVENT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HTTP_EVENT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HTTP_TRANSPORT object definitions
 */
    

STATIC const mp_rom_map_elem_t HTTP_TRANSPORT_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_UNKNOWN), MP_ROM_PTR(MP_ROM_INT(HTTP_TRANSPORT_UNKNOWN)) },
    { MP_ROM_QSTR(MP_QSTR_OVER_TCP), MP_ROM_PTR(MP_ROM_INT(HTTP_TRANSPORT_OVER_TCP)) },
    { MP_ROM_QSTR(MP_QSTR_OVER_SSL), MP_ROM_PTR(MP_ROM_INT(HTTP_TRANSPORT_OVER_SSL)) }
};

STATIC MP_DEFINE_CONST_DICT(HTTP_TRANSPORT_locals_dict, HTTP_TRANSPORT_locals_dict_table);

STATIC void HTTP_TRANSPORT_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HTTP_TRANSPORT");
}



STATIC const mp_obj_type_t mp_HTTP_TRANSPORT_type = {
    { &mp_type_type },
    .name = MP_QSTR_HTTP_TRANSPORT,
    .print = HTTP_TRANSPORT_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HTTP_TRANSPORT_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HTTP_METHOD object definitions
 */
    

STATIC const mp_rom_map_elem_t HTTP_METHOD_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_GET), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_GET)) },
    { MP_ROM_QSTR(MP_QSTR_POST), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_POST)) },
    { MP_ROM_QSTR(MP_QSTR_PUT), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_PUT)) },
    { MP_ROM_QSTR(MP_QSTR_PATCH), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_PATCH)) },
    { MP_ROM_QSTR(MP_QSTR_DELETE), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_DELETE)) },
    { MP_ROM_QSTR(MP_QSTR_HEAD), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_HEAD)) },
    { MP_ROM_QSTR(MP_QSTR_NOTIFY), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_NOTIFY)) },
    { MP_ROM_QSTR(MP_QSTR_SUBSCRIBE), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_SUBSCRIBE)) },
    { MP_ROM_QSTR(MP_QSTR_UNSUBSCRIBE), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_UNSUBSCRIBE)) },
    { MP_ROM_QSTR(MP_QSTR_OPTIONS), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_OPTIONS)) },
    { MP_ROM_QSTR(MP_QSTR_MAX), MP_ROM_PTR(MP_ROM_INT(HTTP_METHOD_MAX)) }
};

STATIC MP_DEFINE_CONST_DICT(HTTP_METHOD_locals_dict, HTTP_METHOD_locals_dict_table);

STATIC void HTTP_METHOD_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HTTP_METHOD");
}



STATIC const mp_obj_type_t mp_HTTP_METHOD_type = {
    { &mp_type_type },
    .name = MP_QSTR_HTTP_METHOD,
    .print = HTTP_METHOD_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HTTP_METHOD_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HTTP_AUTH_TYPE object definitions
 */
    

STATIC const mp_rom_map_elem_t HTTP_AUTH_TYPE_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(HTTP_AUTH_TYPE_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_BASIC), MP_ROM_PTR(MP_ROM_INT(HTTP_AUTH_TYPE_BASIC)) },
    { MP_ROM_QSTR(MP_QSTR_DIGEST), MP_ROM_PTR(MP_ROM_INT(HTTP_AUTH_TYPE_DIGEST)) }
};

STATIC MP_DEFINE_CONST_DICT(HTTP_AUTH_TYPE_locals_dict, HTTP_AUTH_TYPE_locals_dict_table);

STATIC void HTTP_AUTH_TYPE_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HTTP_AUTH_TYPE");
}



STATIC const mp_obj_type_t mp_HTTP_AUTH_TYPE_type = {
    { &mp_type_type },
    .name = MP_QSTR_HTTP_AUTH_TYPE,
    .print = HTTP_AUTH_TYPE_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HTTP_AUTH_TYPE_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf HttpStatus object definitions
 */
    

STATIC const mp_rom_map_elem_t HttpStatus_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_MovedPermanently), MP_ROM_PTR(MP_ROM_INT(HttpStatus_MovedPermanently)) },
    { MP_ROM_QSTR(MP_QSTR_Found), MP_ROM_PTR(MP_ROM_INT(HttpStatus_Found)) },
    { MP_ROM_QSTR(MP_QSTR_Unauthorized), MP_ROM_PTR(MP_ROM_INT(HttpStatus_Unauthorized)) }
};

STATIC MP_DEFINE_CONST_DICT(HttpStatus_locals_dict, HttpStatus_locals_dict_table);

STATIC void HttpStatus_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf HttpStatus");
}



STATIC const mp_obj_type_t mp_HttpStatus_type = {
    { &mp_type_type },
    .name = MP_QSTR_HttpStatus,
    .print = HttpStatus_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&HttpStatus_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf SH2LIB_ERR object definitions
 */
    

STATIC const mp_rom_map_elem_t SH2LIB_ERR_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_INVALID_ARGUMENT), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INVALID_ARGUMENT)) },
    { MP_ROM_QSTR(MP_QSTR_BUFFER_ERROR), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_BUFFER_ERROR)) },
    { MP_ROM_QSTR(MP_QSTR_UNSUPPORTED_VERSION), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_UNSUPPORTED_VERSION)) },
    { MP_ROM_QSTR(MP_QSTR_WOULDBLOCK), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_WOULDBLOCK)) },
    { MP_ROM_QSTR(MP_QSTR_PROTO), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_PROTO)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_FRAME), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INVALID_FRAME)) },
    { MP_ROM_QSTR(MP_QSTR_EOF), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_EOF)) },
    { MP_ROM_QSTR(MP_QSTR_DEFERRED), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_DEFERRED)) },
    { MP_ROM_QSTR(MP_QSTR_STREAM_ID_NOT_AVAILABLE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_STREAM_ID_NOT_AVAILABLE)) },
    { MP_ROM_QSTR(MP_QSTR_STREAM_CLOSED), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_STREAM_CLOSED)) },
    { MP_ROM_QSTR(MP_QSTR_STREAM_CLOSING), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_STREAM_CLOSING)) },
    { MP_ROM_QSTR(MP_QSTR_STREAM_SHUT_WR), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_STREAM_SHUT_WR)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_STREAM_ID), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INVALID_STREAM_ID)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_STREAM_STATE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INVALID_STREAM_STATE)) },
    { MP_ROM_QSTR(MP_QSTR_DEFERRED_DATA_EXIST), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_DEFERRED_DATA_EXIST)) },
    { MP_ROM_QSTR(MP_QSTR_START_STREAM_NOT_ALLOWED), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_START_STREAM_NOT_ALLOWED)) },
    { MP_ROM_QSTR(MP_QSTR_GOAWAY_ALREADY_SENT), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_GOAWAY_ALREADY_SENT)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_HEADER_BLOCK), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INVALID_HEADER_BLOCK)) },
    { MP_ROM_QSTR(MP_QSTR_INVALID_STATE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INVALID_STATE)) },
    { MP_ROM_QSTR(MP_QSTR_TEMPORAL_CALLBACK_FAILURE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_TEMPORAL_CALLBACK_FAILURE)) },
    { MP_ROM_QSTR(MP_QSTR_FRAME_SIZE_ERROR), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_FRAME_SIZE_ERROR)) },
    { MP_ROM_QSTR(MP_QSTR_HEADER_COMP), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_HEADER_COMP)) },
    { MP_ROM_QSTR(MP_QSTR_FLOW_CONTROL), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_FLOW_CONTROL)) },
    { MP_ROM_QSTR(MP_QSTR_INSUFF_BUFSIZE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INSUFF_BUFSIZE)) },
    { MP_ROM_QSTR(MP_QSTR_PAUSE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_PAUSE)) },
    { MP_ROM_QSTR(MP_QSTR_TOO_MANY_INFLIGHT_SETTINGS), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_TOO_MANY_INFLIGHT_SETTINGS)) },
    { MP_ROM_QSTR(MP_QSTR_PUSH_DISABLED), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_PUSH_DISABLED)) },
    { MP_ROM_QSTR(MP_QSTR_DATA_EXIST), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_DATA_EXIST)) },
    { MP_ROM_QSTR(MP_QSTR_SESSION_CLOSING), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_SESSION_CLOSING)) },
    { MP_ROM_QSTR(MP_QSTR_HTTP_HEADER), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_HTTP_HEADER)) },
    { MP_ROM_QSTR(MP_QSTR_HTTP_MESSAGING), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_HTTP_MESSAGING)) },
    { MP_ROM_QSTR(MP_QSTR_REFUSED_STREAM), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_REFUSED_STREAM)) },
    { MP_ROM_QSTR(MP_QSTR_INTERNAL), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_INTERNAL)) },
    { MP_ROM_QSTR(MP_QSTR_CANCEL), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_CANCEL)) },
    { MP_ROM_QSTR(MP_QSTR_FATAL), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_FATAL)) },
    { MP_ROM_QSTR(MP_QSTR_NOMEM), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_NOMEM)) },
    { MP_ROM_QSTR(MP_QSTR_CALLBACK_FAILURE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_CALLBACK_FAILURE)) },
    { MP_ROM_QSTR(MP_QSTR_BAD_CLIENT_MAGIC), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_BAD_CLIENT_MAGIC)) },
    { MP_ROM_QSTR(MP_QSTR_FLOODED), MP_ROM_PTR(MP_ROM_INT(SH2LIB_ERR_FLOODED)) }
};

STATIC MP_DEFINE_CONST_DICT(SH2LIB_ERR_locals_dict, SH2LIB_ERR_locals_dict_table);

STATIC void SH2LIB_ERR_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf SH2LIB_ERR");
}



STATIC const mp_obj_type_t mp_SH2LIB_ERR_type = {
    { &mp_type_type },
    .name = MP_QSTR_SH2LIB_ERR,
    .print = SH2LIB_ERR_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&SH2LIB_ERR_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf SH2LIB_NV_FLAG object definitions
 */
    

STATIC const mp_rom_map_elem_t SH2LIB_NV_FLAG_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_NV_FLAG_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_NO_INDEX), MP_ROM_PTR(MP_ROM_INT(SH2LIB_NV_FLAG_NO_INDEX)) },
    { MP_ROM_QSTR(MP_QSTR_NO_COPY_NAME), MP_ROM_PTR(MP_ROM_INT(SH2LIB_NV_FLAG_NO_COPY_NAME)) },
    { MP_ROM_QSTR(MP_QSTR_NO_COPY_VALUE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_NV_FLAG_NO_COPY_VALUE)) }
};

STATIC MP_DEFINE_CONST_DICT(SH2LIB_NV_FLAG_locals_dict, SH2LIB_NV_FLAG_locals_dict_table);

STATIC void SH2LIB_NV_FLAG_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf SH2LIB_NV_FLAG");
}



STATIC const mp_obj_type_t mp_SH2LIB_NV_FLAG_type = {
    { &mp_type_type },
    .name = MP_QSTR_SH2LIB_NV_FLAG,
    .print = SH2LIB_NV_FLAG_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&SH2LIB_NV_FLAG_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf SH2LIB_DATA_FLAG object definitions
 */
    

STATIC const mp_rom_map_elem_t SH2LIB_DATA_FLAG_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_FLAG_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_EOF), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_FLAG_EOF)) },
    { MP_ROM_QSTR(MP_QSTR_NO_END_STREAM), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_FLAG_NO_END_STREAM)) },
    { MP_ROM_QSTR(MP_QSTR_NO_COPY), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_FLAG_NO_COPY)) }
};

STATIC MP_DEFINE_CONST_DICT(SH2LIB_DATA_FLAG_locals_dict, SH2LIB_DATA_FLAG_locals_dict_table);

STATIC void SH2LIB_DATA_FLAG_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf SH2LIB_DATA_FLAG");
}



STATIC const mp_obj_type_t mp_SH2LIB_DATA_FLAG_type = {
    { &mp_type_type },
    .name = MP_QSTR_SH2LIB_DATA_FLAG,
    .print = SH2LIB_DATA_FLAG_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&SH2LIB_DATA_FLAG_locals_dict,
    
    .parent = NULL,
};
    

/*
 * espidf SH2LIB_DATA_RECV object definitions
 */
    

STATIC const mp_rom_map_elem_t SH2LIB_DATA_RECV_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_NONE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_RECV_NONE)) },
    { MP_ROM_QSTR(MP_QSTR_RST_STREAM), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_RECV_RST_STREAM)) },
    { MP_ROM_QSTR(MP_QSTR_FRAME_COMPLETE), MP_ROM_PTR(MP_ROM_INT(SH2LIB_DATA_RECV_FRAME_COMPLETE)) }
};

STATIC MP_DEFINE_CONST_DICT(SH2LIB_DATA_RECV_locals_dict, SH2LIB_DATA_RECV_locals_dict_table);

STATIC void SH2LIB_DATA_RECV_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "espidf SH2LIB_DATA_RECV");
}



STATIC const mp_obj_type_t mp_SH2LIB_DATA_RECV_type = {
    { &mp_type_type },
    .name = MP_QSTR_SH2LIB_DATA_RECV,
    .print = SH2LIB_DATA_RECV_print,
    
    .attr = call_parent_methods,
    .locals_dict = (mp_obj_dict_t*)&SH2LIB_DATA_RECV_locals_dict,
    
    .parent = NULL,
};
    
#define funcptr_http_event_handle_cb NULL


/*
 * Struct esp_http_client_event_t
 */

STATIC inline const mp_obj_type_t *get_mp_esp_http_client_event_t_type();

STATIC inline esp_http_client_event_t* mp_write_ptr_esp_http_client_event_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_esp_http_client_event_t_type()));
    return (esp_http_client_event_t*)self->data;
}

#define mp_write_esp_http_client_event_t(struct_obj) *mp_write_ptr_esp_http_client_event_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_esp_http_client_event_t(esp_http_client_event_t *field)
{
    return lv_to_mp_struct(get_mp_esp_http_client_event_t_type(), (void*)field);
}

#define mp_read_esp_http_client_event_t(field) mp_read_ptr_esp_http_client_event_t(copy_buffer(&field, sizeof(esp_http_client_event_t)))
#define mp_read_byref_esp_http_client_event_t(field) mp_read_ptr_esp_http_client_event_t(&field)

STATIC void mp_esp_http_client_event_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    esp_http_client_event_t *data = (esp_http_client_event_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_event_id: dest[0] = mp_obj_new_int(data->event_id); break; // converting from esp_http_client_event_id_t;
            case MP_QSTR_client: dest[0] = ptr_to_mp(data->client); break; // converting from esp_http_client_handle_t;
            case MP_QSTR_data: dest[0] = ptr_to_mp((void*)data->data); break; // converting from void *;
            case MP_QSTR_data_len: dest[0] = mp_obj_new_int(data->data_len); break; // converting from int;
            case MP_QSTR_user_data: dest[0] = ptr_to_mp((void*)data->user_data); break; // converting from void *;
            case MP_QSTR_header_key: dest[0] = convert_to_str((void*)data->header_key); break; // converting from char *;
            case MP_QSTR_header_value: dest[0] = convert_to_str((void*)data->header_value); break; // converting from char *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_event_id: data->event_id = (int)mp_obj_get_int(dest[1]); break; // converting to esp_http_client_event_id_t;
                case MP_QSTR_client: data->client = mp_to_ptr(dest[1]); break; // converting to esp_http_client_handle_t;
                case MP_QSTR_data: data->data = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_data_len: data->data_len = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_user_data: data->user_data = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_header_key: data->header_key = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_header_value: data->header_value = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_esp_http_client_event_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct esp_http_client_event_t");
}

STATIC const mp_obj_dict_t mp_esp_http_client_event_t_locals_dict;

STATIC const mp_obj_type_t mp_esp_http_client_event_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_esp_http_client_event_t,
    .print = mp_esp_http_client_event_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_esp_http_client_event_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_esp_http_client_event_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_esp_http_client_event_t_type()
{
    return &mp_esp_http_client_event_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t http_event_handle_cb(esp_http_client_event_t *evt)
 */
 
STATIC mp_obj_t mp_funcptr_http_event_handle_cb(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_event_t *evt = mp_write_ptr_esp_http_client_event_t(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_event_t *))lv_func_ptr)(evt);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_http_event_handle_cb_obj, 1, mp_funcptr_http_event_handle_cb, funcptr_http_event_handle_cb);
    
STATIC inline mp_obj_t mp_lv_funcptr_http_event_handle_cb(void *func){ return mp_lv_funcptr(&mp_funcptr_http_event_handle_cb_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'esp_http_client_config_t_event_handler_callback'
 * http_event_handle_cb event_handler
 */
    

/*
 * Struct esp_http_client_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_esp_http_client_config_t_type();

STATIC inline esp_http_client_config_t* mp_write_ptr_esp_http_client_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_esp_http_client_config_t_type()));
    return (esp_http_client_config_t*)self->data;
}

#define mp_write_esp_http_client_config_t(struct_obj) *mp_write_ptr_esp_http_client_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_esp_http_client_config_t(esp_http_client_config_t *field)
{
    return lv_to_mp_struct(get_mp_esp_http_client_config_t_type(), (void*)field);
}

#define mp_read_esp_http_client_config_t(field) mp_read_ptr_esp_http_client_config_t(copy_buffer(&field, sizeof(esp_http_client_config_t)))
#define mp_read_byref_esp_http_client_config_t(field) mp_read_ptr_esp_http_client_config_t(&field)

STATIC void mp_esp_http_client_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    esp_http_client_config_t *data = (esp_http_client_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_url: dest[0] = convert_to_str((void*)data->url); break; // converting from char *;
            case MP_QSTR_host: dest[0] = convert_to_str((void*)data->host); break; // converting from char *;
            case MP_QSTR_port: dest[0] = mp_obj_new_int(data->port); break; // converting from int;
            case MP_QSTR_username: dest[0] = convert_to_str((void*)data->username); break; // converting from char *;
            case MP_QSTR_password: dest[0] = convert_to_str((void*)data->password); break; // converting from char *;
            case MP_QSTR_auth_type: dest[0] = mp_obj_new_int(data->auth_type); break; // converting from esp_http_client_auth_type_t;
            case MP_QSTR_path: dest[0] = convert_to_str((void*)data->path); break; // converting from char *;
            case MP_QSTR_query: dest[0] = convert_to_str((void*)data->query); break; // converting from char *;
            case MP_QSTR_cert_pem: dest[0] = convert_to_str((void*)data->cert_pem); break; // converting from char *;
            case MP_QSTR_client_cert_pem: dest[0] = convert_to_str((void*)data->client_cert_pem); break; // converting from char *;
            case MP_QSTR_client_key_pem: dest[0] = convert_to_str((void*)data->client_key_pem); break; // converting from char *;
            case MP_QSTR_method: dest[0] = mp_obj_new_int(data->method); break; // converting from esp_http_client_method_t;
            case MP_QSTR_timeout_ms: dest[0] = mp_obj_new_int(data->timeout_ms); break; // converting from int;
            case MP_QSTR_disable_auto_redirect: dest[0] = convert_to_bool(data->disable_auto_redirect); break; // converting from bool;
            case MP_QSTR_max_redirection_count: dest[0] = mp_obj_new_int(data->max_redirection_count); break; // converting from int;
            case MP_QSTR_event_handler: dest[0] = mp_lv_funcptr(&mp_funcptr_http_event_handle_cb_obj, data->event_handler, NULL ,MP_QSTR_esp_http_client_config_t_event_handler, NULL); break; // converting from callback http_event_handle_cb;
            case MP_QSTR_transport_type: dest[0] = mp_obj_new_int(data->transport_type); break; // converting from esp_http_client_transport_t;
            case MP_QSTR_buffer_size: dest[0] = mp_obj_new_int(data->buffer_size); break; // converting from int;
            case MP_QSTR_buffer_size_tx: dest[0] = mp_obj_new_int(data->buffer_size_tx); break; // converting from int;
            case MP_QSTR_user_data: dest[0] = ptr_to_mp((void*)data->user_data); break; // converting from void *;
            case MP_QSTR_is_async: dest[0] = convert_to_bool(data->is_async); break; // converting from bool;
            case MP_QSTR_use_global_ca_store: dest[0] = convert_to_bool(data->use_global_ca_store); break; // converting from bool;
            case MP_QSTR_skip_cert_common_name_check: dest[0] = convert_to_bool(data->skip_cert_common_name_check); break; // converting from bool;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_url: data->url = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_host: data->host = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_port: data->port = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_username: data->username = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_password: data->password = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_auth_type: data->auth_type = (int)mp_obj_get_int(dest[1]); break; // converting to esp_http_client_auth_type_t;
                case MP_QSTR_path: data->path = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_query: data->query = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_cert_pem: data->cert_pem = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_client_cert_pem: data->client_cert_pem = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_client_key_pem: data->client_key_pem = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_method: data->method = (int)mp_obj_get_int(dest[1]); break; // converting to esp_http_client_method_t;
                case MP_QSTR_timeout_ms: data->timeout_ms = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_disable_auto_redirect: data->disable_auto_redirect = mp_obj_is_true(dest[1]); break; // converting to bool;
                case MP_QSTR_max_redirection_count: data->max_redirection_count = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_event_handler: data->event_handler = mp_lv_callback(dest[1], NULL ,MP_QSTR_esp_http_client_config_t_event_handler, NULL); break; // converting to callback http_event_handle_cb;
                case MP_QSTR_transport_type: data->transport_type = (int)mp_obj_get_int(dest[1]); break; // converting to esp_http_client_transport_t;
                case MP_QSTR_buffer_size: data->buffer_size = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_buffer_size_tx: data->buffer_size_tx = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_user_data: data->user_data = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_is_async: data->is_async = mp_obj_is_true(dest[1]); break; // converting to bool;
                case MP_QSTR_use_global_ca_store: data->use_global_ca_store = mp_obj_is_true(dest[1]); break; // converting to bool;
                case MP_QSTR_skip_cert_common_name_check: data->skip_cert_common_name_check = mp_obj_is_true(dest[1]); break; // converting to bool;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_esp_http_client_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct esp_http_client_config_t");
}

STATIC const mp_obj_dict_t mp_esp_http_client_config_t_locals_dict;

STATIC const mp_obj_type_t mp_esp_http_client_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_esp_http_client_config_t,
    .print = mp_esp_http_client_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_esp_http_client_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_esp_http_client_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_esp_http_client_config_t_type()
{
    return &mp_esp_http_client_config_t_type;
}
    

/*
 * Array convertors for uint8_t [4]
 */

STATIC uint8_t *mp_arr_to_uint8_t___4__(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    uint8_t *lv_arr = (uint8_t*)m_malloc(len * sizeof(uint8_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (uint8_t)mp_obj_get_int(item);
    }
    return (uint8_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_uint8_t___4__(uint8_t *arr)
{
    mp_obj_t obj_arr[4];
    for (size_t i=0; i<4; i++){
        obj_arr[i] = mp_obj_new_int_from_uint(arr[i]);
    }
    return mp_obj_new_list(4, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Struct spi_transaction_t
 */

STATIC inline const mp_obj_type_t *get_mp_spi_transaction_t_type();

STATIC inline struct spi_transaction_t* mp_write_ptr_spi_transaction_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_spi_transaction_t_type()));
    return (struct spi_transaction_t*)self->data;
}

#define mp_write_spi_transaction_t(struct_obj) *mp_write_ptr_spi_transaction_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_spi_transaction_t(struct spi_transaction_t *field)
{
    return lv_to_mp_struct(get_mp_spi_transaction_t_type(), (void*)field);
}

#define mp_read_spi_transaction_t(field) mp_read_ptr_spi_transaction_t(copy_buffer(&field, sizeof(struct spi_transaction_t)))
#define mp_read_byref_spi_transaction_t(field) mp_read_ptr_spi_transaction_t(&field)

STATIC void mp_spi_transaction_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    struct spi_transaction_t *data = (struct spi_transaction_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_flags: dest[0] = mp_obj_new_int_from_uint(data->flags); break; // converting from uint32_t;
            case MP_QSTR_cmd: dest[0] = mp_obj_new_int_from_uint(data->cmd); break; // converting from uint16_t;
            case MP_QSTR_addr: dest[0] = mp_obj_new_int_from_ull(data->addr); break; // converting from uint64_t;
            case MP_QSTR_length: dest[0] = mp_obj_new_int_from_uint(data->length); break; // converting from size_t;
            case MP_QSTR_rxlength: dest[0] = mp_obj_new_int_from_uint(data->rxlength); break; // converting from size_t;
            case MP_QSTR_user: dest[0] = ptr_to_mp((void*)data->user); break; // converting from void *;
            case MP_QSTR_tx_buffer: dest[0] = ptr_to_mp((void*)data->tx_buffer); break; // converting from void *;
            case MP_QSTR_tx_data: dest[0] = mp_arr_from_uint8_t___4__(data->tx_data); break; // converting from uint8_t [4];
            case MP_QSTR_rx_buffer: dest[0] = ptr_to_mp((void*)data->rx_buffer); break; // converting from void *;
            case MP_QSTR_rx_data: dest[0] = mp_arr_from_uint8_t___4__(data->rx_data); break; // converting from uint8_t [4];
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_flags: data->flags = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_cmd: data->cmd = (uint16_t)mp_obj_get_int(dest[1]); break; // converting to uint16_t;
                case MP_QSTR_addr: data->addr = (uint64_t)mp_obj_get_ull(dest[1]); break; // converting to uint64_t;
                case MP_QSTR_length: data->length = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_rxlength: data->rxlength = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_user: data->user = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_tx_buffer: data->tx_buffer = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_tx_data: memcpy(&data->tx_data, mp_arr_to_uint8_t___4__(dest[1]), sizeof(uint8_t)*4); break; // converting to uint8_t [4];
                case MP_QSTR_rx_buffer: data->rx_buffer = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                case MP_QSTR_rx_data: memcpy(&data->rx_data, mp_arr_to_uint8_t___4__(dest[1]), sizeof(uint8_t)*4); break; // converting to uint8_t [4];
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_spi_transaction_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct spi_transaction_t");
}

STATIC const mp_obj_dict_t mp_spi_transaction_t_locals_dict;

STATIC const mp_obj_type_t mp_spi_transaction_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_spi_transaction_t,
    .print = mp_spi_transaction_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_spi_transaction_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_spi_transaction_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_spi_transaction_t_type()
{
    return &mp_spi_transaction_t_type;
}
    

/*
 * Struct spi_transaction_ext_t
 */

STATIC inline const mp_obj_type_t *get_mp_spi_transaction_ext_t_type();

STATIC inline spi_transaction_ext_t* mp_write_ptr_spi_transaction_ext_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_spi_transaction_ext_t_type()));
    return (spi_transaction_ext_t*)self->data;
}

#define mp_write_spi_transaction_ext_t(struct_obj) *mp_write_ptr_spi_transaction_ext_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_spi_transaction_ext_t(spi_transaction_ext_t *field)
{
    return lv_to_mp_struct(get_mp_spi_transaction_ext_t_type(), (void*)field);
}

#define mp_read_spi_transaction_ext_t(field) mp_read_ptr_spi_transaction_ext_t(copy_buffer(&field, sizeof(spi_transaction_ext_t)))
#define mp_read_byref_spi_transaction_ext_t(field) mp_read_ptr_spi_transaction_ext_t(&field)

STATIC void mp_spi_transaction_ext_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    spi_transaction_ext_t *data = (spi_transaction_ext_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_base: dest[0] = mp_read_byref_spi_transaction_t(data->base); break; // converting from spi_transaction_t;
            case MP_QSTR_command_bits: dest[0] = mp_obj_new_int_from_uint(data->command_bits); break; // converting from uint8_t;
            case MP_QSTR_address_bits: dest[0] = mp_obj_new_int_from_uint(data->address_bits); break; // converting from uint8_t;
            case MP_QSTR_dummy_bits: dest[0] = mp_obj_new_int_from_uint(data->dummy_bits); break; // converting from uint8_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_base: data->base = mp_write_spi_transaction_t(dest[1]); break; // converting to spi_transaction_t;
                case MP_QSTR_command_bits: data->command_bits = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_address_bits: data->address_bits = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_dummy_bits: data->dummy_bits = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_spi_transaction_ext_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct spi_transaction_ext_t");
}

STATIC const mp_obj_dict_t mp_spi_transaction_ext_t_locals_dict;

STATIC const mp_obj_type_t mp_spi_transaction_ext_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_spi_transaction_ext_t,
    .print = mp_spi_transaction_ext_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_spi_transaction_ext_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_spi_transaction_ext_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_spi_transaction_ext_t_type()
{
    return &mp_spi_transaction_ext_t_type;
}
    
#define funcptr_gpio_intr_handler_fn_t NULL


/*
 * espidf extension definition for:
 * void gpio_intr_handler_fn_t(uint32_t intr_mask, bool high, void *arg)
 */
 
STATIC mp_obj_t mp_funcptr_gpio_intr_handler_fn_t(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t intr_mask = (uint32_t)mp_obj_get_int(mp_args[0]);
    bool high = mp_obj_is_true(mp_args[1]);
    void *arg = mp_to_ptr(mp_args[2]);
    ((void (*)(uint32_t, bool, void *))lv_func_ptr)(intr_mask, high, arg);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_gpio_intr_handler_fn_t_obj, 3, mp_funcptr_gpio_intr_handler_fn_t, funcptr_gpio_intr_handler_fn_t);
    
STATIC inline mp_obj_t mp_lv_funcptr_gpio_intr_handler_fn_t(void *func){ return mp_lv_funcptr(&mp_funcptr_gpio_intr_handler_fn_t_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Struct gpio_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_gpio_config_t_type();

STATIC inline gpio_config_t* mp_write_ptr_gpio_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_gpio_config_t_type()));
    return (gpio_config_t*)self->data;
}

#define mp_write_gpio_config_t(struct_obj) *mp_write_ptr_gpio_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_gpio_config_t(gpio_config_t *field)
{
    return lv_to_mp_struct(get_mp_gpio_config_t_type(), (void*)field);
}

#define mp_read_gpio_config_t(field) mp_read_ptr_gpio_config_t(copy_buffer(&field, sizeof(gpio_config_t)))
#define mp_read_byref_gpio_config_t(field) mp_read_ptr_gpio_config_t(&field)

STATIC void mp_gpio_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    gpio_config_t *data = (gpio_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_pin_bit_mask: dest[0] = mp_obj_new_int_from_ull(data->pin_bit_mask); break; // converting from uint64_t;
            case MP_QSTR_mode: dest[0] = mp_obj_new_int(data->mode); break; // converting from gpio_mode_t;
            case MP_QSTR_pull_up_en: dest[0] = mp_obj_new_int(data->pull_up_en); break; // converting from gpio_pullup_t;
            case MP_QSTR_pull_down_en: dest[0] = mp_obj_new_int(data->pull_down_en); break; // converting from gpio_pulldown_t;
            case MP_QSTR_intr_type: dest[0] = mp_obj_new_int(data->intr_type); break; // converting from gpio_int_type_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_pin_bit_mask: data->pin_bit_mask = (uint64_t)mp_obj_get_ull(dest[1]); break; // converting to uint64_t;
                case MP_QSTR_mode: data->mode = (int)mp_obj_get_int(dest[1]); break; // converting to gpio_mode_t;
                case MP_QSTR_pull_up_en: data->pull_up_en = (int)mp_obj_get_int(dest[1]); break; // converting to gpio_pullup_t;
                case MP_QSTR_pull_down_en: data->pull_down_en = (int)mp_obj_get_int(dest[1]); break; // converting to gpio_pulldown_t;
                case MP_QSTR_intr_type: data->intr_type = (int)mp_obj_get_int(dest[1]); break; // converting to gpio_int_type_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_gpio_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct gpio_config_t");
}

STATIC const mp_obj_dict_t mp_gpio_config_t_locals_dict;

STATIC const mp_obj_type_t mp_gpio_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_gpio_config_t,
    .print = mp_gpio_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_gpio_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_gpio_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_gpio_config_t_type()
{
    return &mp_gpio_config_t_type;
}
    
#define funcptr_fn NULL


/*
 * espidf extension definition for:
 * void fn(void *)
 */
 
STATIC mp_obj_t mp_funcptr_fn(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *arg0 = mp_to_ptr(mp_args[0]);
    ((void (*)(void *))lv_func_ptr)(arg0);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_fn_obj, 1, mp_funcptr_fn, funcptr_fn);
    
STATIC inline mp_obj_t mp_lv_funcptr_fn(void *func){ return mp_lv_funcptr(&mp_funcptr_fn_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Struct multi_heap_info_t
 */

STATIC inline const mp_obj_type_t *get_mp_multi_heap_info_t_type();

STATIC inline multi_heap_info_t* mp_write_ptr_multi_heap_info_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_multi_heap_info_t_type()));
    return (multi_heap_info_t*)self->data;
}

#define mp_write_multi_heap_info_t(struct_obj) *mp_write_ptr_multi_heap_info_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_multi_heap_info_t(multi_heap_info_t *field)
{
    return lv_to_mp_struct(get_mp_multi_heap_info_t_type(), (void*)field);
}

#define mp_read_multi_heap_info_t(field) mp_read_ptr_multi_heap_info_t(copy_buffer(&field, sizeof(multi_heap_info_t)))
#define mp_read_byref_multi_heap_info_t(field) mp_read_ptr_multi_heap_info_t(&field)

STATIC void mp_multi_heap_info_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    multi_heap_info_t *data = (multi_heap_info_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_total_free_bytes: dest[0] = mp_obj_new_int_from_uint(data->total_free_bytes); break; // converting from size_t;
            case MP_QSTR_total_allocated_bytes: dest[0] = mp_obj_new_int_from_uint(data->total_allocated_bytes); break; // converting from size_t;
            case MP_QSTR_largest_free_block: dest[0] = mp_obj_new_int_from_uint(data->largest_free_block); break; // converting from size_t;
            case MP_QSTR_minimum_free_bytes: dest[0] = mp_obj_new_int_from_uint(data->minimum_free_bytes); break; // converting from size_t;
            case MP_QSTR_allocated_blocks: dest[0] = mp_obj_new_int_from_uint(data->allocated_blocks); break; // converting from size_t;
            case MP_QSTR_free_blocks: dest[0] = mp_obj_new_int_from_uint(data->free_blocks); break; // converting from size_t;
            case MP_QSTR_total_blocks: dest[0] = mp_obj_new_int_from_uint(data->total_blocks); break; // converting from size_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_total_free_bytes: data->total_free_bytes = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_total_allocated_bytes: data->total_allocated_bytes = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_largest_free_block: data->largest_free_block = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_minimum_free_bytes: data->minimum_free_bytes = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_allocated_blocks: data->allocated_blocks = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_free_blocks: data->free_blocks = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_total_blocks: data->total_blocks = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_multi_heap_info_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct multi_heap_info_t");
}

STATIC const mp_obj_dict_t mp_multi_heap_info_t_locals_dict;

STATIC const mp_obj_type_t mp_multi_heap_info_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_multi_heap_info_t,
    .print = mp_multi_heap_info_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_multi_heap_info_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_multi_heap_info_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_multi_heap_info_t_type()
{
    return &mp_multi_heap_info_t_type;
}
    
#define funcptr_ets_idle_cb_t NULL

/* Reusing funcptr_fn for funcptr_ets_idle_cb_t */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_ets_idle_cb_t_obj, 1, mp_funcptr_fn, funcptr_ets_idle_cb_t);
    
STATIC inline mp_obj_t mp_lv_funcptr_ets_idle_cb_t(void *func){ return mp_lv_funcptr(&mp_funcptr_ets_idle_cb_t_obj, func, NULL, MP_QSTR_, NULL); }

#define funcptr_ETSTask NULL


/*
 * espidf extension definition for:
 * void ETSTask(ETSEvent *e)
 */
 
STATIC mp_obj_t mp_funcptr_ETSTask(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    ETSEvent *e = mp_to_ptr(mp_args[0]);
    ((void (*)(ETSEvent *))lv_func_ptr)(e);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_ETSTask_obj, 1, mp_funcptr_ETSTask, funcptr_ETSTask);
    
STATIC inline mp_obj_t mp_lv_funcptr_ETSTask(void *func){ return mp_lv_funcptr(&mp_funcptr_ETSTask_obj, func, NULL, MP_QSTR_, NULL); }

#define funcptr_p NULL


/*
 * espidf extension definition for:
 * void p(char c)
 */
 
STATIC mp_obj_t mp_funcptr_p(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    char c = (char)mp_obj_get_int(mp_args[0]);
    ((void (*)(char))lv_func_ptr)(c);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_p_obj, 1, mp_funcptr_p, funcptr_p);
    
STATIC inline mp_obj_t mp_lv_funcptr_p(void *func){ return mp_lv_funcptr(&mp_funcptr_p_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Struct ETSTimer
 */

STATIC inline const mp_obj_type_t *get_mp_ETSTimer_type();

STATIC inline ETSTimer* mp_write_ptr_ETSTimer(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_ETSTimer_type()));
    return (ETSTimer*)self->data;
}

#define mp_write_ETSTimer(struct_obj) *mp_write_ptr_ETSTimer(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_ETSTimer(ETSTimer *field)
{
    return lv_to_mp_struct(get_mp_ETSTimer_type(), (void*)field);
}

#define mp_read_ETSTimer(field) mp_read_ptr_ETSTimer(copy_buffer(&field, sizeof(ETSTimer)))
#define mp_read_byref_ETSTimer(field) mp_read_ptr_ETSTimer(&field)

STATIC void mp_ETSTimer_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    ETSTimer *data = (ETSTimer*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_timer_next: dest[0] = ptr_to_mp((void*)data->timer_next); break; // converting from ETSTimer *;
            case MP_QSTR_timer_expire: dest[0] = mp_obj_new_int_from_uint(data->timer_expire); break; // converting from uint32_t;
            case MP_QSTR_timer_period: dest[0] = mp_obj_new_int_from_uint(data->timer_period); break; // converting from uint32_t;
            case MP_QSTR_timer_func: dest[0] = ptr_to_mp((void*)data->timer_func); break; // converting from ETSTimerFunc *;
            case MP_QSTR_timer_arg: dest[0] = ptr_to_mp((void*)data->timer_arg); break; // converting from void *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_timer_next: data->timer_next = (void*)mp_to_ptr(dest[1]); break; // converting to ETSTimer *;
                case MP_QSTR_timer_expire: data->timer_expire = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_timer_period: data->timer_period = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_timer_func: data->timer_func = (void*)mp_to_ptr(dest[1]); break; // converting to ETSTimerFunc *;
                case MP_QSTR_timer_arg: data->timer_arg = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_ETSTimer_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct ETSTimer");
}

STATIC const mp_obj_dict_t mp_ETSTimer_locals_dict;

STATIC const mp_obj_type_t mp_ETSTimer_type = {
    { &mp_type_type },
    .name = MP_QSTR_ETSTimer,
    .print = mp_ETSTimer_print,
    .make_new = make_new_lv_struct,
    .attr = mp_ETSTimer_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_ETSTimer_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_ETSTimer_type()
{
    return &mp_ETSTimer_type;
}
    
#define funcptr_vprintf_like_t NULL


/*
 * Function NOT generated:
 * Missing conversion to va_list
 * int vprintf_like_t(const char *, va_list)
 */
    

/*
 * Struct pcnt_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_pcnt_config_t_type();

STATIC inline pcnt_config_t* mp_write_ptr_pcnt_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_pcnt_config_t_type()));
    return (pcnt_config_t*)self->data;
}

#define mp_write_pcnt_config_t(struct_obj) *mp_write_ptr_pcnt_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_pcnt_config_t(pcnt_config_t *field)
{
    return lv_to_mp_struct(get_mp_pcnt_config_t_type(), (void*)field);
}

#define mp_read_pcnt_config_t(field) mp_read_ptr_pcnt_config_t(copy_buffer(&field, sizeof(pcnt_config_t)))
#define mp_read_byref_pcnt_config_t(field) mp_read_ptr_pcnt_config_t(&field)

STATIC void mp_pcnt_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    pcnt_config_t *data = (pcnt_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_pulse_gpio_num: dest[0] = mp_obj_new_int(data->pulse_gpio_num); break; // converting from int;
            case MP_QSTR_ctrl_gpio_num: dest[0] = mp_obj_new_int(data->ctrl_gpio_num); break; // converting from int;
            case MP_QSTR_lctrl_mode: dest[0] = mp_obj_new_int(data->lctrl_mode); break; // converting from pcnt_ctrl_mode_t;
            case MP_QSTR_hctrl_mode: dest[0] = mp_obj_new_int(data->hctrl_mode); break; // converting from pcnt_ctrl_mode_t;
            case MP_QSTR_pos_mode: dest[0] = mp_obj_new_int(data->pos_mode); break; // converting from pcnt_count_mode_t;
            case MP_QSTR_neg_mode: dest[0] = mp_obj_new_int(data->neg_mode); break; // converting from pcnt_count_mode_t;
            case MP_QSTR_counter_h_lim: dest[0] = mp_obj_new_int(data->counter_h_lim); break; // converting from int16_t;
            case MP_QSTR_counter_l_lim: dest[0] = mp_obj_new_int(data->counter_l_lim); break; // converting from int16_t;
            case MP_QSTR_unit: dest[0] = mp_obj_new_int(data->unit); break; // converting from pcnt_unit_t;
            case MP_QSTR_channel: dest[0] = mp_obj_new_int(data->channel); break; // converting from pcnt_channel_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_pulse_gpio_num: data->pulse_gpio_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_ctrl_gpio_num: data->ctrl_gpio_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_lctrl_mode: data->lctrl_mode = (int)mp_obj_get_int(dest[1]); break; // converting to pcnt_ctrl_mode_t;
                case MP_QSTR_hctrl_mode: data->hctrl_mode = (int)mp_obj_get_int(dest[1]); break; // converting to pcnt_ctrl_mode_t;
                case MP_QSTR_pos_mode: data->pos_mode = (int)mp_obj_get_int(dest[1]); break; // converting to pcnt_count_mode_t;
                case MP_QSTR_neg_mode: data->neg_mode = (int)mp_obj_get_int(dest[1]); break; // converting to pcnt_count_mode_t;
                case MP_QSTR_counter_h_lim: data->counter_h_lim = (int16_t)mp_obj_get_int(dest[1]); break; // converting to int16_t;
                case MP_QSTR_counter_l_lim: data->counter_l_lim = (int16_t)mp_obj_get_int(dest[1]); break; // converting to int16_t;
                case MP_QSTR_unit: data->unit = (int)mp_obj_get_int(dest[1]); break; // converting to pcnt_unit_t;
                case MP_QSTR_channel: data->channel = (int)mp_obj_get_int(dest[1]); break; // converting to pcnt_channel_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_pcnt_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct pcnt_config_t");
}

STATIC const mp_obj_dict_t mp_pcnt_config_t_locals_dict;

STATIC const mp_obj_type_t mp_pcnt_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_pcnt_config_t,
    .print = mp_pcnt_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_pcnt_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_pcnt_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_pcnt_config_t_type()
{
    return &mp_pcnt_config_t_type;
}
    
#define funcptr_shutdown_handler_t NULL


/*
 * espidf extension definition for:
 * void shutdown_handler_t(void)
 */
 
STATIC mp_obj_t mp_funcptr_shutdown_handler_t(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    ((void (*)(void))lv_func_ptr)();
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_shutdown_handler_t_obj, 0, mp_funcptr_shutdown_handler_t, funcptr_shutdown_handler_t);
    
STATIC inline mp_obj_t mp_lv_funcptr_shutdown_handler_t(void *func){ return mp_lv_funcptr(&mp_funcptr_shutdown_handler_t_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Struct esp_chip_info_t
 */

STATIC inline const mp_obj_type_t *get_mp_esp_chip_info_t_type();

STATIC inline esp_chip_info_t* mp_write_ptr_esp_chip_info_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_esp_chip_info_t_type()));
    return (esp_chip_info_t*)self->data;
}

#define mp_write_esp_chip_info_t(struct_obj) *mp_write_ptr_esp_chip_info_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_esp_chip_info_t(esp_chip_info_t *field)
{
    return lv_to_mp_struct(get_mp_esp_chip_info_t_type(), (void*)field);
}

#define mp_read_esp_chip_info_t(field) mp_read_ptr_esp_chip_info_t(copy_buffer(&field, sizeof(esp_chip_info_t)))
#define mp_read_byref_esp_chip_info_t(field) mp_read_ptr_esp_chip_info_t(&field)

STATIC void mp_esp_chip_info_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    esp_chip_info_t *data = (esp_chip_info_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_model: dest[0] = mp_obj_new_int(data->model); break; // converting from esp_chip_model_t;
            case MP_QSTR_features: dest[0] = mp_obj_new_int_from_uint(data->features); break; // converting from uint32_t;
            case MP_QSTR_cores: dest[0] = mp_obj_new_int_from_uint(data->cores); break; // converting from uint8_t;
            case MP_QSTR_revision: dest[0] = mp_obj_new_int_from_uint(data->revision); break; // converting from uint8_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_model: data->model = (int)mp_obj_get_int(dest[1]); break; // converting to esp_chip_model_t;
                case MP_QSTR_features: data->features = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_cores: data->cores = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_revision: data->revision = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_esp_chip_info_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct esp_chip_info_t");
}

STATIC const mp_obj_dict_t mp_esp_chip_info_t_locals_dict;

STATIC const mp_obj_type_t mp_esp_chip_info_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_esp_chip_info_t,
    .print = mp_esp_chip_info_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_esp_chip_info_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_esp_chip_info_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_esp_chip_info_t_type()
{
    return &mp_esp_chip_info_t_type;
}
    
typedef __typeof__( ((ip_addr_t*)(0))->u_addr ) ip_addr_u_addr_t;

/*
 * Array convertors for u32_t [4]
 */

STATIC u32_t *mp_arr_to_u32_t___4__(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    u32_t *lv_arr = (u32_t*)m_malloc(len * sizeof(u32_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (uint32_t)mp_obj_get_int(item);
    }
    return (u32_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_u32_t___4__(u32_t *arr)
{
    mp_obj_t obj_arr[4];
    for (size_t i=0; i<4; i++){
        obj_arr[i] = mp_obj_new_int_from_uint(arr[i]);
    }
    return mp_obj_new_list(4, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Struct ip6_addr_t
 */

STATIC inline const mp_obj_type_t *get_mp_ip6_addr_t_type();

STATIC inline ip6_addr_t* mp_write_ptr_ip6_addr_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_ip6_addr_t_type()));
    return (ip6_addr_t*)self->data;
}

#define mp_write_ip6_addr_t(struct_obj) *mp_write_ptr_ip6_addr_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_ip6_addr_t(ip6_addr_t *field)
{
    return lv_to_mp_struct(get_mp_ip6_addr_t_type(), (void*)field);
}

#define mp_read_ip6_addr_t(field) mp_read_ptr_ip6_addr_t(copy_buffer(&field, sizeof(ip6_addr_t)))
#define mp_read_byref_ip6_addr_t(field) mp_read_ptr_ip6_addr_t(&field)

STATIC void mp_ip6_addr_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    ip6_addr_t *data = (ip6_addr_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_addr: dest[0] = mp_arr_from_u32_t___4__(data->addr); break; // converting from u32_t [4];
            case MP_QSTR_zone: dest[0] = mp_obj_new_int_from_uint(data->zone); break; // converting from u8_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_addr: memcpy(&data->addr, mp_arr_to_u32_t___4__(dest[1]), sizeof(u32_t)*4); break; // converting to u32_t [4];
                case MP_QSTR_zone: data->zone = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to u8_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_ip6_addr_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct ip6_addr_t");
}

STATIC const mp_obj_dict_t mp_ip6_addr_t_locals_dict;

STATIC const mp_obj_type_t mp_ip6_addr_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_ip6_addr_t,
    .print = mp_ip6_addr_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_ip6_addr_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_ip6_addr_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_ip6_addr_t_type()
{
    return &mp_ip6_addr_t_type;
}
    

/*
 * Struct ip4_addr_t
 */

STATIC inline const mp_obj_type_t *get_mp_ip4_addr_t_type();

STATIC inline ip4_addr_t* mp_write_ptr_ip4_addr_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_ip4_addr_t_type()));
    return (ip4_addr_t*)self->data;
}

#define mp_write_ip4_addr_t(struct_obj) *mp_write_ptr_ip4_addr_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_ip4_addr_t(ip4_addr_t *field)
{
    return lv_to_mp_struct(get_mp_ip4_addr_t_type(), (void*)field);
}

#define mp_read_ip4_addr_t(field) mp_read_ptr_ip4_addr_t(copy_buffer(&field, sizeof(ip4_addr_t)))
#define mp_read_byref_ip4_addr_t(field) mp_read_ptr_ip4_addr_t(&field)

STATIC void mp_ip4_addr_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    ip4_addr_t *data = (ip4_addr_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_addr: dest[0] = mp_obj_new_int_from_uint(data->addr); break; // converting from u32_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_addr: data->addr = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to u32_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_ip4_addr_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct ip4_addr_t");
}

STATIC const mp_obj_dict_t mp_ip4_addr_t_locals_dict;

STATIC const mp_obj_type_t mp_ip4_addr_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_ip4_addr_t,
    .print = mp_ip4_addr_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_ip4_addr_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_ip4_addr_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_ip4_addr_t_type()
{
    return &mp_ip4_addr_t_type;
}
    

/*
 * Struct ip_addr_u_addr_t
 */

STATIC inline const mp_obj_type_t *get_mp_ip_addr_u_addr_t_type();

STATIC inline ip_addr_u_addr_t* mp_write_ptr_ip_addr_u_addr_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_ip_addr_u_addr_t_type()));
    return (ip_addr_u_addr_t*)self->data;
}

#define mp_write_ip_addr_u_addr_t(struct_obj) *mp_write_ptr_ip_addr_u_addr_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_ip_addr_u_addr_t(ip_addr_u_addr_t *field)
{
    return lv_to_mp_struct(get_mp_ip_addr_u_addr_t_type(), (void*)field);
}

#define mp_read_ip_addr_u_addr_t(field) mp_read_ptr_ip_addr_u_addr_t(copy_buffer(&field, sizeof(ip_addr_u_addr_t)))
#define mp_read_byref_ip_addr_u_addr_t(field) mp_read_ptr_ip_addr_u_addr_t(&field)

STATIC void mp_ip_addr_u_addr_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    ip_addr_u_addr_t *data = (ip_addr_u_addr_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_ip6: dest[0] = mp_read_byref_ip6_addr_t(data->ip6); break; // converting from ip6_addr_t;
            case MP_QSTR_ip4: dest[0] = mp_read_byref_ip4_addr_t(data->ip4); break; // converting from ip4_addr_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_ip6: data->ip6 = mp_write_ip6_addr_t(dest[1]); break; // converting to ip6_addr_t;
                case MP_QSTR_ip4: data->ip4 = mp_write_ip4_addr_t(dest[1]); break; // converting to ip4_addr_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_ip_addr_u_addr_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct ip_addr_u_addr_t");
}

STATIC const mp_obj_dict_t mp_ip_addr_u_addr_t_locals_dict;

STATIC const mp_obj_type_t mp_ip_addr_u_addr_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_ip_addr_u_addr_t,
    .print = mp_ip_addr_u_addr_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_ip_addr_u_addr_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_ip_addr_u_addr_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_ip_addr_u_addr_t_type()
{
    return &mp_ip_addr_u_addr_t_type;
}
    

/*
 * Struct ip_addr_t
 */

STATIC inline const mp_obj_type_t *get_mp_ip_addr_t_type();

STATIC inline ip_addr_t* mp_write_ptr_ip_addr_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_ip_addr_t_type()));
    return (ip_addr_t*)self->data;
}

#define mp_write_ip_addr_t(struct_obj) *mp_write_ptr_ip_addr_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_ip_addr_t(ip_addr_t *field)
{
    return lv_to_mp_struct(get_mp_ip_addr_t_type(), (void*)field);
}

#define mp_read_ip_addr_t(field) mp_read_ptr_ip_addr_t(copy_buffer(&field, sizeof(ip_addr_t)))
#define mp_read_byref_ip_addr_t(field) mp_read_ptr_ip_addr_t(&field)

STATIC void mp_ip_addr_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    ip_addr_t *data = (ip_addr_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_u_addr: dest[0] = mp_read_byref_ip_addr_u_addr_t(data->u_addr); break; // converting from ip_addr_u_addr_t;
            case MP_QSTR_type: dest[0] = mp_obj_new_int_from_uint(data->type); break; // converting from u8_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_u_addr: data->u_addr = mp_write_ip_addr_u_addr_t(dest[1]); break; // converting to ip_addr_u_addr_t;
                case MP_QSTR_type: data->type = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to u8_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_ip_addr_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct ip_addr_t");
}

STATIC const mp_obj_dict_t mp_ip_addr_t_locals_dict;

STATIC const mp_obj_type_t mp_ip_addr_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_ip_addr_t,
    .print = mp_ip_addr_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_ip_addr_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_ip_addr_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_ip_addr_t_type()
{
    return &mp_ip_addr_t_type;
}
    
#define funcptr_dhcps_cb_t NULL


/*
 * Array convertors for u8_t [4]
 */

STATIC u8_t *mp_arr_to_u8_t___4__(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    u8_t *lv_arr = (u8_t*)m_malloc(len * sizeof(u8_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (uint8_t)mp_obj_get_int(item);
    }
    return (u8_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_u8_t___4__(u8_t *arr)
{
    mp_obj_t obj_arr[4];
    for (size_t i=0; i<4; i++){
        obj_arr[i] = mp_obj_new_int_from_uint(arr[i]);
    }
    return mp_obj_new_list(4, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * espidf extension definition for:
 * void dhcps_cb_t(u8_t client_ip[4])
 */
 
STATIC mp_obj_t mp_funcptr_dhcps_cb_t(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u8_t *client_ip = mp_arr_to_u8_t___4__(mp_args[0]);
    ((void (*)(u8_t [4]))lv_func_ptr)(client_ip);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_dhcps_cb_t_obj, 1, mp_funcptr_dhcps_cb_t, funcptr_dhcps_cb_t);
    
STATIC inline mp_obj_t mp_lv_funcptr_dhcps_cb_t(void *func){ return mp_lv_funcptr(&mp_funcptr_dhcps_cb_t_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Array convertors for uint8_t [6]
 */

STATIC uint8_t *mp_arr_to_uint8_t___6__(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    uint8_t *lv_arr = (uint8_t*)m_malloc(len * sizeof(uint8_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = (uint8_t)mp_obj_get_int(item);
    }
    return (uint8_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_uint8_t___6__(uint8_t *arr)
{
    mp_obj_t obj_arr[6];
    for (size_t i=0; i<6; i++){
        obj_arr[i] = mp_obj_new_int_from_uint(arr[i]);
    }
    return mp_obj_new_list(6, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Struct wifi_sta_info_t
 */

STATIC inline const mp_obj_type_t *get_mp_wifi_sta_info_t_type();

STATIC inline wifi_sta_info_t* mp_write_ptr_wifi_sta_info_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_wifi_sta_info_t_type()));
    return (wifi_sta_info_t*)self->data;
}

#define mp_write_wifi_sta_info_t(struct_obj) *mp_write_ptr_wifi_sta_info_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_wifi_sta_info_t(wifi_sta_info_t *field)
{
    return lv_to_mp_struct(get_mp_wifi_sta_info_t_type(), (void*)field);
}

#define mp_read_wifi_sta_info_t(field) mp_read_ptr_wifi_sta_info_t(copy_buffer(&field, sizeof(wifi_sta_info_t)))
#define mp_read_byref_wifi_sta_info_t(field) mp_read_ptr_wifi_sta_info_t(&field)

STATIC void mp_wifi_sta_info_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    wifi_sta_info_t *data = (wifi_sta_info_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_mac: dest[0] = mp_arr_from_uint8_t___6__(data->mac); break; // converting from uint8_t [6];
            case MP_QSTR_rssi: dest[0] = mp_obj_new_int(data->rssi); break; // converting from int8_t;
            case MP_QSTR_phy_11b: dest[0] = mp_obj_new_int_from_uint(data->phy_11b); break; // converting from uint32_t;
            case MP_QSTR_phy_11g: dest[0] = mp_obj_new_int_from_uint(data->phy_11g); break; // converting from uint32_t;
            case MP_QSTR_phy_11n: dest[0] = mp_obj_new_int_from_uint(data->phy_11n); break; // converting from uint32_t;
            case MP_QSTR_phy_lr: dest[0] = mp_obj_new_int_from_uint(data->phy_lr); break; // converting from uint32_t;
            case MP_QSTR_reserved: dest[0] = mp_obj_new_int_from_uint(data->reserved); break; // converting from uint32_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_mac: memcpy(&data->mac, mp_arr_to_uint8_t___6__(dest[1]), sizeof(uint8_t)*6); break; // converting to uint8_t [6];
                case MP_QSTR_rssi: data->rssi = (int8_t)mp_obj_get_int(dest[1]); break; // converting to int8_t;
                case MP_QSTR_phy_11b: data->phy_11b = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_phy_11g: data->phy_11g = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_phy_11n: data->phy_11n = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_phy_lr: data->phy_lr = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_reserved: data->reserved = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_wifi_sta_info_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct wifi_sta_info_t");
}

STATIC const mp_obj_dict_t mp_wifi_sta_info_t_locals_dict;

STATIC const mp_obj_type_t mp_wifi_sta_info_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_wifi_sta_info_t,
    .print = mp_wifi_sta_info_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_wifi_sta_info_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_wifi_sta_info_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_wifi_sta_info_t_type()
{
    return &mp_wifi_sta_info_t_type;
}
    

/*
 * Array convertors for wifi_sta_info_t [10]
 */

STATIC wifi_sta_info_t *mp_arr_to_wifi_sta_info_t___10__(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    wifi_sta_info_t *lv_arr = (wifi_sta_info_t*)m_malloc(len * sizeof(wifi_sta_info_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = mp_write_wifi_sta_info_t(item);
    }
    return (wifi_sta_info_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_wifi_sta_info_t___10__(wifi_sta_info_t *arr)
{
    mp_obj_t obj_arr[10];
    for (size_t i=0; i<10; i++){
        obj_arr[i] = mp_read_wifi_sta_info_t(arr[i]);
    }
    return mp_obj_new_list(10, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Struct wifi_sta_list_t
 */

STATIC inline const mp_obj_type_t *get_mp_wifi_sta_list_t_type();

STATIC inline wifi_sta_list_t* mp_write_ptr_wifi_sta_list_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_wifi_sta_list_t_type()));
    return (wifi_sta_list_t*)self->data;
}

#define mp_write_wifi_sta_list_t(struct_obj) *mp_write_ptr_wifi_sta_list_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_wifi_sta_list_t(wifi_sta_list_t *field)
{
    return lv_to_mp_struct(get_mp_wifi_sta_list_t_type(), (void*)field);
}

#define mp_read_wifi_sta_list_t(field) mp_read_ptr_wifi_sta_list_t(copy_buffer(&field, sizeof(wifi_sta_list_t)))
#define mp_read_byref_wifi_sta_list_t(field) mp_read_ptr_wifi_sta_list_t(&field)

STATIC void mp_wifi_sta_list_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    wifi_sta_list_t *data = (wifi_sta_list_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_sta: dest[0] = mp_arr_from_wifi_sta_info_t___10__(data->sta); break; // converting from wifi_sta_info_t [10];
            case MP_QSTR_num: dest[0] = mp_obj_new_int(data->num); break; // converting from int;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_sta: memcpy(&data->sta, mp_arr_to_wifi_sta_info_t___10__(dest[1]), sizeof(wifi_sta_info_t)*10); break; // converting to wifi_sta_info_t [10];
                case MP_QSTR_num: data->num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_wifi_sta_list_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct wifi_sta_list_t");
}

STATIC const mp_obj_dict_t mp_wifi_sta_list_t_locals_dict;

STATIC const mp_obj_type_t mp_wifi_sta_list_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_wifi_sta_list_t,
    .print = mp_wifi_sta_list_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_wifi_sta_list_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_wifi_sta_list_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_wifi_sta_list_t_type()
{
    return &mp_wifi_sta_list_t_type;
}
    

/*
 * Struct mdns_txt_item_t
 */

STATIC inline const mp_obj_type_t *get_mp_mdns_txt_item_t_type();

STATIC inline mdns_txt_item_t* mp_write_ptr_mdns_txt_item_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_mdns_txt_item_t_type()));
    return (mdns_txt_item_t*)self->data;
}

#define mp_write_mdns_txt_item_t(struct_obj) *mp_write_ptr_mdns_txt_item_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_mdns_txt_item_t(mdns_txt_item_t *field)
{
    return lv_to_mp_struct(get_mp_mdns_txt_item_t_type(), (void*)field);
}

#define mp_read_mdns_txt_item_t(field) mp_read_ptr_mdns_txt_item_t(copy_buffer(&field, sizeof(mdns_txt_item_t)))
#define mp_read_byref_mdns_txt_item_t(field) mp_read_ptr_mdns_txt_item_t(&field)

STATIC void mp_mdns_txt_item_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    mdns_txt_item_t *data = (mdns_txt_item_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_key: dest[0] = convert_to_str((void*)data->key); break; // converting from char *;
            case MP_QSTR_value: dest[0] = convert_to_str((void*)data->value); break; // converting from char *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_key: data->key = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_value: data->value = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_mdns_txt_item_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct mdns_txt_item_t");
}

STATIC const mp_obj_dict_t mp_mdns_txt_item_t_locals_dict;

STATIC const mp_obj_type_t mp_mdns_txt_item_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_mdns_txt_item_t,
    .print = mp_mdns_txt_item_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_mdns_txt_item_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_mdns_txt_item_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_mdns_txt_item_t_type()
{
    return &mp_mdns_txt_item_t_type;
}
    

/*
 * Struct mdns_ip_addr_t
 */

STATIC inline const mp_obj_type_t *get_mp_mdns_ip_addr_t_type();

STATIC inline mdns_ip_addr_t* mp_write_ptr_mdns_ip_addr_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_mdns_ip_addr_t_type()));
    return (mdns_ip_addr_t*)self->data;
}

#define mp_write_mdns_ip_addr_t(struct_obj) *mp_write_ptr_mdns_ip_addr_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_mdns_ip_addr_t(mdns_ip_addr_t *field)
{
    return lv_to_mp_struct(get_mp_mdns_ip_addr_t_type(), (void*)field);
}

#define mp_read_mdns_ip_addr_t(field) mp_read_ptr_mdns_ip_addr_t(copy_buffer(&field, sizeof(mdns_ip_addr_t)))
#define mp_read_byref_mdns_ip_addr_t(field) mp_read_ptr_mdns_ip_addr_t(&field)

STATIC void mp_mdns_ip_addr_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    mdns_ip_addr_t *data = (mdns_ip_addr_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_addr: dest[0] = mp_read_byref_ip_addr_t(data->addr); break; // converting from ip_addr_t;
            case MP_QSTR_next: dest[0] = ptr_to_mp((void*)data->next); break; // converting from mdns_ip_addr_t *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_addr: data->addr = mp_write_ip_addr_t(dest[1]); break; // converting to ip_addr_t;
                case MP_QSTR_next: data->next = (void*)mp_to_ptr(dest[1]); break; // converting to mdns_ip_addr_t *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_mdns_ip_addr_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct mdns_ip_addr_t");
}

STATIC const mp_obj_dict_t mp_mdns_ip_addr_t_locals_dict;

STATIC const mp_obj_type_t mp_mdns_ip_addr_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_mdns_ip_addr_t,
    .print = mp_mdns_ip_addr_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_mdns_ip_addr_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_mdns_ip_addr_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_mdns_ip_addr_t_type()
{
    return &mp_mdns_ip_addr_t_type;
}
    

/*
 * Struct mdns_result_t
 */

STATIC inline const mp_obj_type_t *get_mp_mdns_result_t_type();

STATIC inline mdns_result_t* mp_write_ptr_mdns_result_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_mdns_result_t_type()));
    return (mdns_result_t*)self->data;
}

#define mp_write_mdns_result_t(struct_obj) *mp_write_ptr_mdns_result_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_mdns_result_t(mdns_result_t *field)
{
    return lv_to_mp_struct(get_mp_mdns_result_t_type(), (void*)field);
}

#define mp_read_mdns_result_t(field) mp_read_ptr_mdns_result_t(copy_buffer(&field, sizeof(mdns_result_t)))
#define mp_read_byref_mdns_result_t(field) mp_read_ptr_mdns_result_t(&field)

STATIC void mp_mdns_result_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    mdns_result_t *data = (mdns_result_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_next: dest[0] = ptr_to_mp((void*)data->next); break; // converting from mdns_result_t *;
            case MP_QSTR_tcpip_if: dest[0] = mp_obj_new_int(data->tcpip_if); break; // converting from tcpip_adapter_if_t;
            case MP_QSTR_ip_protocol: dest[0] = mp_obj_new_int(data->ip_protocol); break; // converting from mdns_ip_protocol_t;
            case MP_QSTR_instance_name: dest[0] = convert_to_str((void*)data->instance_name); break; // converting from char *;
            case MP_QSTR_hostname: dest[0] = convert_to_str((void*)data->hostname); break; // converting from char *;
            case MP_QSTR_port: dest[0] = mp_obj_new_int_from_uint(data->port); break; // converting from uint16_t;
            case MP_QSTR_txt: dest[0] = mp_read_ptr_mdns_txt_item_t((void*)data->txt); break; // converting from mdns_txt_item_t *;
            case MP_QSTR_txt_count: dest[0] = mp_obj_new_int_from_uint(data->txt_count); break; // converting from size_t;
            case MP_QSTR_addr: dest[0] = mp_read_ptr_mdns_ip_addr_t((void*)data->addr); break; // converting from mdns_ip_addr_t *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_next: data->next = (void*)mp_to_ptr(dest[1]); break; // converting to mdns_result_t *;
                case MP_QSTR_tcpip_if: data->tcpip_if = (int)mp_obj_get_int(dest[1]); break; // converting to tcpip_adapter_if_t;
                case MP_QSTR_ip_protocol: data->ip_protocol = (int)mp_obj_get_int(dest[1]); break; // converting to mdns_ip_protocol_t;
                case MP_QSTR_instance_name: data->instance_name = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_hostname: data->hostname = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_port: data->port = (uint16_t)mp_obj_get_int(dest[1]); break; // converting to uint16_t;
                case MP_QSTR_txt: data->txt = (void*)mp_write_ptr_mdns_txt_item_t(dest[1]); break; // converting to mdns_txt_item_t *;
                case MP_QSTR_txt_count: data->txt_count = (size_t)mp_obj_get_int(dest[1]); break; // converting to size_t;
                case MP_QSTR_addr: data->addr = (void*)mp_write_ptr_mdns_ip_addr_t(dest[1]); break; // converting to mdns_ip_addr_t *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_mdns_result_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct mdns_result_t");
}

STATIC const mp_obj_dict_t mp_mdns_result_t_locals_dict;

STATIC const mp_obj_type_t mp_mdns_result_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_mdns_result_t,
    .print = mp_mdns_result_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_mdns_result_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_mdns_result_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_mdns_result_t_type()
{
    return &mp_mdns_result_t_type;
}
    

/*
 * Struct http_parser
 */

STATIC inline const mp_obj_type_t *get_mp_http_parser_type();

STATIC inline struct http_parser* mp_write_ptr_http_parser(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_http_parser_type()));
    return (struct http_parser*)self->data;
}

#define mp_write_http_parser(struct_obj) *mp_write_ptr_http_parser(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_http_parser(struct http_parser *field)
{
    return lv_to_mp_struct(get_mp_http_parser_type(), (void*)field);
}

#define mp_read_http_parser(field) mp_read_ptr_http_parser(copy_buffer(&field, sizeof(struct http_parser)))
#define mp_read_byref_http_parser(field) mp_read_ptr_http_parser(&field)

STATIC void mp_http_parser_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    struct http_parser *data = (struct http_parser*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_type: dest[0] = mp_obj_new_int_from_uint(data->type); break; // converting from unsigned int;
            case MP_QSTR_flags: dest[0] = mp_obj_new_int_from_uint(data->flags); break; // converting from unsigned int;
            case MP_QSTR_state: dest[0] = mp_obj_new_int_from_uint(data->state); break; // converting from unsigned int;
            case MP_QSTR_header_state: dest[0] = mp_obj_new_int_from_uint(data->header_state); break; // converting from unsigned int;
            case MP_QSTR_index: dest[0] = mp_obj_new_int_from_uint(data->index); break; // converting from unsigned int;
            case MP_QSTR_lenient_http_headers: dest[0] = mp_obj_new_int_from_uint(data->lenient_http_headers); break; // converting from unsigned int;
            case MP_QSTR_nread: dest[0] = mp_obj_new_int_from_uint(data->nread); break; // converting from uint32_t;
            case MP_QSTR_content_length: dest[0] = mp_obj_new_int_from_ull(data->content_length); break; // converting from uint64_t;
            case MP_QSTR_http_major: dest[0] = mp_obj_new_int_from_uint(data->http_major); break; // converting from unsigned short;
            case MP_QSTR_http_minor: dest[0] = mp_obj_new_int_from_uint(data->http_minor); break; // converting from unsigned short;
            case MP_QSTR_status_code: dest[0] = mp_obj_new_int_from_uint(data->status_code); break; // converting from unsigned int;
            case MP_QSTR_method: dest[0] = mp_obj_new_int_from_uint(data->method); break; // converting from unsigned int;
            case MP_QSTR_http_errno: dest[0] = mp_obj_new_int_from_uint(data->http_errno); break; // converting from unsigned int;
            case MP_QSTR_upgrade: dest[0] = mp_obj_new_int_from_uint(data->upgrade); break; // converting from unsigned int;
            case MP_QSTR_data: dest[0] = ptr_to_mp((void*)data->data); break; // converting from void *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_type: data->type = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_flags: data->flags = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_state: data->state = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_header_state: data->header_state = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_index: data->index = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_lenient_http_headers: data->lenient_http_headers = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_nread: data->nread = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_content_length: data->content_length = (uint64_t)mp_obj_get_ull(dest[1]); break; // converting to uint64_t;
                case MP_QSTR_http_major: data->http_major = (unsigned short)mp_obj_get_int(dest[1]); break; // converting to unsigned short;
                case MP_QSTR_http_minor: data->http_minor = (unsigned short)mp_obj_get_int(dest[1]); break; // converting to unsigned short;
                case MP_QSTR_status_code: data->status_code = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_method: data->method = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_http_errno: data->http_errno = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_upgrade: data->upgrade = (unsigned int)mp_obj_get_int(dest[1]); break; // converting to unsigned int;
                case MP_QSTR_data: data->data = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_http_parser_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct http_parser");
}

STATIC const mp_obj_dict_t mp_http_parser_locals_dict;

STATIC const mp_obj_type_t mp_http_parser_type = {
    { &mp_type_type },
    .name = MP_QSTR_http_parser,
    .print = mp_http_parser_print,
    .make_new = make_new_lv_struct,
    .attr = mp_http_parser_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_http_parser_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_http_parser_type()
{
    return &mp_http_parser_type;
}
    
#define funcptr_http_cb NULL


/*
 * espidf extension definition for:
 * int http_cb(http_parser *)
 */
 
STATIC mp_obj_t mp_funcptr_http_cb(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    http_parser *arg0 = mp_write_ptr_http_parser(mp_args[0]);
    int _res = ((int (*)(http_parser *))lv_func_ptr)(arg0);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_http_cb_obj, 1, mp_funcptr_http_cb, funcptr_http_cb);
    
STATIC inline mp_obj_t mp_lv_funcptr_http_cb(void *func){ return mp_lv_funcptr(&mp_funcptr_http_cb_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_message_begin_callback'
 * http_cb on_message_begin
 */
    
#define funcptr_http_data_cb NULL


/*
 * espidf extension definition for:
 * int http_data_cb(http_parser *, const char *at, size_t length)
 */
 
STATIC mp_obj_t mp_funcptr_http_data_cb(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    http_parser *arg0 = mp_write_ptr_http_parser(mp_args[0]);
    const char *at = (char*)convert_from_str(mp_args[1]);
    size_t length = (size_t)mp_obj_get_int(mp_args[2]);
    int _res = ((int (*)(http_parser *, const char *, size_t))lv_func_ptr)(arg0, at, length);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_http_data_cb_obj, 3, mp_funcptr_http_data_cb, funcptr_http_data_cb);
    
STATIC inline mp_obj_t mp_lv_funcptr_http_data_cb(void *func){ return mp_lv_funcptr(&mp_funcptr_http_data_cb_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_url_callback'
 * http_data_cb on_url
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_status_callback'
 * http_data_cb on_status
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_header_field_callback'
 * http_data_cb on_header_field
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_header_value_callback'
 * http_data_cb on_header_value
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_headers_complete_callback'
 * http_cb on_headers_complete
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_body_callback'
 * http_data_cb on_body
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_message_complete_callback'
 * http_cb on_message_complete
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_chunk_header_callback'
 * http_cb on_chunk_header
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'http_parser_settings_on_chunk_complete_callback'
 * http_cb on_chunk_complete
 */
    

/*
 * Struct http_parser_settings
 */

STATIC inline const mp_obj_type_t *get_mp_http_parser_settings_type();

STATIC inline struct http_parser_settings* mp_write_ptr_http_parser_settings(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_http_parser_settings_type()));
    return (struct http_parser_settings*)self->data;
}

#define mp_write_http_parser_settings(struct_obj) *mp_write_ptr_http_parser_settings(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_http_parser_settings(struct http_parser_settings *field)
{
    return lv_to_mp_struct(get_mp_http_parser_settings_type(), (void*)field);
}

#define mp_read_http_parser_settings(field) mp_read_ptr_http_parser_settings(copy_buffer(&field, sizeof(struct http_parser_settings)))
#define mp_read_byref_http_parser_settings(field) mp_read_ptr_http_parser_settings(&field)

STATIC void mp_http_parser_settings_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    struct http_parser_settings *data = (struct http_parser_settings*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_on_message_begin: dest[0] = mp_lv_funcptr(&mp_funcptr_http_cb_obj, data->on_message_begin, NULL ,MP_QSTR_http_parser_settings_on_message_begin, NULL); break; // converting from callback http_cb;
            case MP_QSTR_on_url: dest[0] = mp_lv_funcptr(&mp_funcptr_http_data_cb_obj, data->on_url, NULL ,MP_QSTR_http_parser_settings_on_url, NULL); break; // converting from callback http_data_cb;
            case MP_QSTR_on_status: dest[0] = mp_lv_funcptr(&mp_funcptr_http_data_cb_obj, data->on_status, NULL ,MP_QSTR_http_parser_settings_on_status, NULL); break; // converting from callback http_data_cb;
            case MP_QSTR_on_header_field: dest[0] = mp_lv_funcptr(&mp_funcptr_http_data_cb_obj, data->on_header_field, NULL ,MP_QSTR_http_parser_settings_on_header_field, NULL); break; // converting from callback http_data_cb;
            case MP_QSTR_on_header_value: dest[0] = mp_lv_funcptr(&mp_funcptr_http_data_cb_obj, data->on_header_value, NULL ,MP_QSTR_http_parser_settings_on_header_value, NULL); break; // converting from callback http_data_cb;
            case MP_QSTR_on_headers_complete: dest[0] = mp_lv_funcptr(&mp_funcptr_http_cb_obj, data->on_headers_complete, NULL ,MP_QSTR_http_parser_settings_on_headers_complete, NULL); break; // converting from callback http_cb;
            case MP_QSTR_on_body: dest[0] = mp_lv_funcptr(&mp_funcptr_http_data_cb_obj, data->on_body, NULL ,MP_QSTR_http_parser_settings_on_body, NULL); break; // converting from callback http_data_cb;
            case MP_QSTR_on_message_complete: dest[0] = mp_lv_funcptr(&mp_funcptr_http_cb_obj, data->on_message_complete, NULL ,MP_QSTR_http_parser_settings_on_message_complete, NULL); break; // converting from callback http_cb;
            case MP_QSTR_on_chunk_header: dest[0] = mp_lv_funcptr(&mp_funcptr_http_cb_obj, data->on_chunk_header, NULL ,MP_QSTR_http_parser_settings_on_chunk_header, NULL); break; // converting from callback http_cb;
            case MP_QSTR_on_chunk_complete: dest[0] = mp_lv_funcptr(&mp_funcptr_http_cb_obj, data->on_chunk_complete, NULL ,MP_QSTR_http_parser_settings_on_chunk_complete, NULL); break; // converting from callback http_cb;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_on_message_begin: data->on_message_begin = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_message_begin, NULL); break; // converting to callback http_cb;
                case MP_QSTR_on_url: data->on_url = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_url, NULL); break; // converting to callback http_data_cb;
                case MP_QSTR_on_status: data->on_status = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_status, NULL); break; // converting to callback http_data_cb;
                case MP_QSTR_on_header_field: data->on_header_field = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_header_field, NULL); break; // converting to callback http_data_cb;
                case MP_QSTR_on_header_value: data->on_header_value = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_header_value, NULL); break; // converting to callback http_data_cb;
                case MP_QSTR_on_headers_complete: data->on_headers_complete = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_headers_complete, NULL); break; // converting to callback http_cb;
                case MP_QSTR_on_body: data->on_body = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_body, NULL); break; // converting to callback http_data_cb;
                case MP_QSTR_on_message_complete: data->on_message_complete = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_message_complete, NULL); break; // converting to callback http_cb;
                case MP_QSTR_on_chunk_header: data->on_chunk_header = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_chunk_header, NULL); break; // converting to callback http_cb;
                case MP_QSTR_on_chunk_complete: data->on_chunk_complete = mp_lv_callback(dest[1], NULL ,MP_QSTR_http_parser_settings_on_chunk_complete, NULL); break; // converting to callback http_cb;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_http_parser_settings_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct http_parser_settings");
}

STATIC const mp_obj_dict_t mp_http_parser_settings_locals_dict;

STATIC const mp_obj_type_t mp_http_parser_settings_type = {
    { &mp_type_type },
    .name = MP_QSTR_http_parser_settings,
    .print = mp_http_parser_settings_print,
    .make_new = make_new_lv_struct,
    .attr = mp_http_parser_settings_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_http_parser_settings_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_http_parser_settings_type()
{
    return &mp_http_parser_settings_type;
}
    

/*
 * http_parser_url * not generated: Missing conversion to struct 
{
  uint16_t off;
  uint16_t len;
} while generating array type conversion
 */
                

/*
 * Struct sh2lib_handle
 */

STATIC inline const mp_obj_type_t *get_mp_sh2lib_handle_type();

STATIC inline struct sh2lib_handle* mp_write_ptr_sh2lib_handle(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_sh2lib_handle_type()));
    return (struct sh2lib_handle*)self->data;
}

#define mp_write_sh2lib_handle(struct_obj) *mp_write_ptr_sh2lib_handle(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_sh2lib_handle(struct sh2lib_handle *field)
{
    return lv_to_mp_struct(get_mp_sh2lib_handle_type(), (void*)field);
}

#define mp_read_sh2lib_handle(field) mp_read_ptr_sh2lib_handle(copy_buffer(&field, sizeof(struct sh2lib_handle)))
#define mp_read_byref_sh2lib_handle(field) mp_read_ptr_sh2lib_handle(&field)

STATIC void mp_sh2lib_handle_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    struct sh2lib_handle *data = (struct sh2lib_handle*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_http2_sess: dest[0] = ptr_to_mp((void*)data->http2_sess); break; // converting from nghttp2_session *;
            case MP_QSTR_hostname: dest[0] = convert_to_str((void*)data->hostname); break; // converting from char *;
            case MP_QSTR_http2_tls: dest[0] = ptr_to_mp((void*)data->http2_tls); break; // converting from esp_tls *;
            case MP_QSTR_user_data: dest[0] = ptr_to_mp((void*)data->user_data); break; // converting from void *;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_http2_sess: data->http2_sess = (void*)mp_to_ptr(dest[1]); break; // converting to nghttp2_session *;
                case MP_QSTR_hostname: data->hostname = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_http2_tls: data->http2_tls = (void*)mp_to_ptr(dest[1]); break; // converting to esp_tls *;
                case MP_QSTR_user_data: data->user_data = (void*)mp_to_ptr(dest[1]); break; // converting to void *;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_sh2lib_handle_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct sh2lib_handle");
}

STATIC const mp_obj_dict_t mp_sh2lib_handle_locals_dict;

STATIC const mp_obj_type_t mp_sh2lib_handle_type = {
    { &mp_type_type },
    .name = MP_QSTR_sh2lib_handle,
    .print = mp_sh2lib_handle_print,
    .make_new = make_new_lv_struct,
    .attr = mp_sh2lib_handle_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_sh2lib_handle_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_sh2lib_handle_type()
{
    return &mp_sh2lib_handle_type;
}
    

STATIC const mp_rom_map_elem_t mp_C_Pointer_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(C_Pointer))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_C_Pointer_locals_dict, mp_C_Pointer_locals_dict_table);
        

/*
 * Callback function http_event_handler
 * esp_err_t http_event_handle_cb(esp_http_client_event_t *evt)
 */

STATIC esp_err_t http_event_handler_callback(esp_http_client_event_t * arg0)
{
    mp_obj_t mp_args[1];
    mp_args[0] = mp_read_ptr_esp_http_client_event_t((void*)arg0);
    mp_obj_t callbacks = get_callback_dict_from_user_data(arg0->user_data);
    mp_obj_t callback_result = mp_call_function_n_kw(mp_obj_dict_get(callbacks, MP_OBJ_NEW_QSTR(MP_QSTR_http_event_handler)) , 1, 0, mp_args);
    return (int32_t)mp_obj_get_int(callback_result);
}


/*
 * espidf extension definition for:
 * inline static void esp_http_client_register_event_handler(esp_http_client_config_t *config, http_event_handle_cb http_event_handler, void *user_data)
 */
 
STATIC mp_obj_t mp_esp_http_client_register_event_handler(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *user_data = mp_to_ptr(mp_args[2]);
    void *http_event_handler = mp_lv_callback(mp_args[1], &http_event_handler_callback, MP_QSTR_http_event_handler, &user_data);
    esp_http_client_config_t *config = mp_write_ptr_esp_http_client_config_t(mp_args[0]);
    ((void (*)(esp_http_client_config_t *, http_event_handle_cb, void *))lv_func_ptr)(config, http_event_handler, user_data);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_esp_http_client_register_event_handler_obj, 3, mp_esp_http_client_register_event_handler, esp_http_client_register_event_handler);
    

/*
 * espidf extension definition for:
 * esp_http_client_handle_t esp_http_client_init(const esp_http_client_config_t *config)
 */
 
STATIC mp_obj_t mp_esp_http_client_init(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const esp_http_client_config_t *config = mp_write_ptr_esp_http_client_config_t(mp_args[0]);
    esp_http_client_handle_t _res = ((esp_http_client_handle_t (*)(const esp_http_client_config_t *))lv_func_ptr)(config);
    return ptr_to_mp(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_esp_http_client_init_obj, 1, mp_esp_http_client_init, esp_http_client_init);
    

STATIC const mp_rom_map_elem_t mp_esp_http_client_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(esp_http_client_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_register_event_handler), MP_ROM_PTR(&mp_esp_http_client_register_event_handler_obj) },
    { MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_esp_http_client_init_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_esp_http_client_config_t_locals_dict, mp_esp_http_client_config_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_esp_http_client_event_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(esp_http_client_event_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_esp_http_client_event_t_locals_dict, mp_esp_http_client_event_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * inline static void set_spi_transaction_ext(spi_transaction_ext_t *ext_trans, spi_transaction_t *trans, uint8_t command_bits, uint8_t address_bits)
 */
 
STATIC mp_obj_t mp_set_spi_transaction_ext(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_transaction_ext_t *ext_trans = mp_write_ptr_spi_transaction_ext_t(mp_args[0]);
    spi_transaction_t *trans = mp_write_ptr_spi_transaction_t(mp_args[1]);
    uint8_t command_bits = (uint8_t)mp_obj_get_int(mp_args[2]);
    uint8_t address_bits = (uint8_t)mp_obj_get_int(mp_args[3]);
    ((void (*)(spi_transaction_ext_t *, spi_transaction_t *, uint8_t, uint8_t))lv_func_ptr)(ext_trans, trans, command_bits, address_bits);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_set_spi_transaction_ext_obj, 4, mp_set_spi_transaction_ext, set_spi_transaction_ext);
    

STATIC const mp_rom_map_elem_t mp_spi_transaction_ext_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(spi_transaction_ext_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_et_spi_transaction_ext), MP_ROM_PTR(&mp_set_spi_transaction_ext_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_spi_transaction_ext_t_locals_dict, mp_spi_transaction_ext_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_spi_transaction_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(struct spi_transaction_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_spi_transaction_t_locals_dict, mp_spi_transaction_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t gpio_config(const gpio_config_t *pGPIOConfig)
 */
 
STATIC mp_obj_t mp_gpio_config(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const gpio_config_t *pGPIOConfig = mp_write_ptr_gpio_config_t(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(const gpio_config_t *))lv_func_ptr)(pGPIOConfig);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_gpio_config_obj, 1, mp_gpio_config, gpio_config);
    

STATIC const mp_rom_map_elem_t mp_gpio_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(gpio_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_config), MP_ROM_PTR(&mp_gpio_config_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_gpio_config_t_locals_dict, mp_gpio_config_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_multi_heap_info_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(multi_heap_info_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_multi_heap_info_t_locals_dict, mp_multi_heap_info_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_ETSTimer_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(ETSTimer))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_ETSTimer_locals_dict, mp_ETSTimer_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t pcnt_unit_config(const pcnt_config_t *pcnt_config)
 */
 
STATIC mp_obj_t mp_pcnt_unit_config(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const pcnt_config_t *pcnt_config = mp_write_ptr_pcnt_config_t(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(const pcnt_config_t *))lv_func_ptr)(pcnt_config);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_pcnt_unit_config_obj, 1, mp_pcnt_unit_config, pcnt_unit_config);
    

STATIC const mp_rom_map_elem_t mp_pcnt_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(pcnt_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_unit_config), MP_ROM_PTR(&mp_pcnt_unit_config_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_pcnt_config_t_locals_dict, mp_pcnt_config_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * void esp_chip_info(esp_chip_info_t *out_info)
 */
 
STATIC mp_obj_t mp_esp_chip_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_chip_info_t *out_info = mp_write_ptr_esp_chip_info_t(mp_args[0]);
    ((void (*)(esp_chip_info_t *))lv_func_ptr)(out_info);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_esp_chip_info_obj, 1, mp_esp_chip_info, esp_chip_info);
    

STATIC const mp_rom_map_elem_t mp_esp_chip_info_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(esp_chip_info_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_info), MP_ROM_PTR(&mp_esp_chip_info_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_esp_chip_info_t_locals_dict, mp_esp_chip_info_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * char *ipaddr_ntoa(const ip_addr_t *addr)
 */
 
STATIC mp_obj_t mp_ipaddr_ntoa(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip_addr_t *addr = mp_write_ptr_ip_addr_t(mp_args[0]);
    char * _res = ((char *(*)(const ip_addr_t *))lv_func_ptr)(addr);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_ipaddr_ntoa_obj, 1, mp_ipaddr_ntoa, ipaddr_ntoa);
    

/*
 * espidf extension definition for:
 * char *ipaddr_ntoa_r(const ip_addr_t *addr, char *buf, int buflen)
 */
 
STATIC mp_obj_t mp_ipaddr_ntoa_r(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip_addr_t *addr = mp_write_ptr_ip_addr_t(mp_args[0]);
    char *buf = (char*)convert_from_str(mp_args[1]);
    int buflen = (int)mp_obj_get_int(mp_args[2]);
    char * _res = ((char *(*)(const ip_addr_t *, char *, int))lv_func_ptr)(addr, buf, buflen);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_ipaddr_ntoa_r_obj, 3, mp_ipaddr_ntoa_r, ipaddr_ntoa_r);
    

STATIC const mp_rom_map_elem_t mp_ip_addr_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(ip_addr_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_paddr_ntoa), MP_ROM_PTR(&mp_ipaddr_ntoa_obj) },
    { MP_ROM_QSTR(MP_QSTR_paddr_ntoa_r), MP_ROM_PTR(&mp_ipaddr_ntoa_r_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_ip_addr_t_locals_dict, mp_ip_addr_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_ip_addr_u_addr_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(ip_addr_u_addr_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_ip_addr_u_addr_t_locals_dict, mp_ip_addr_u_addr_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_ip6_addr_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(ip6_addr_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_ip6_addr_t_locals_dict, mp_ip6_addr_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_ip4_addr_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(ip4_addr_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_ip4_addr_t_locals_dict, mp_ip4_addr_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_wifi_sta_list_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(wifi_sta_list_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_wifi_sta_list_t_locals_dict, mp_wifi_sta_list_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_wifi_sta_info_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(wifi_sta_info_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_wifi_sta_info_t_locals_dict, mp_wifi_sta_info_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * void mdns_query_results_free(mdns_result_t *results)
 */
 
STATIC mp_obj_t mp_mdns_query_results_free(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    mdns_result_t *results = mp_write_ptr_mdns_result_t(mp_args[0]);
    ((void (*)(mdns_result_t *))lv_func_ptr)(results);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_mdns_query_results_free_obj, 1, mp_mdns_query_results_free, mdns_query_results_free);
    

STATIC const mp_rom_map_elem_t mp_mdns_result_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(mdns_result_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_query_results_free), MP_ROM_PTR(&mp_mdns_query_results_free_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_mdns_result_t_locals_dict, mp_mdns_result_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_mdns_txt_item_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(mdns_txt_item_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_mdns_txt_item_t_locals_dict, mp_mdns_txt_item_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_mdns_ip_addr_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(mdns_ip_addr_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_mdns_ip_addr_t_locals_dict, mp_mdns_ip_addr_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * void http_parser_init(http_parser *parser, enum http_parser_type type)
 */
 
STATIC mp_obj_t mp_http_parser_init(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    http_parser *parser = mp_write_ptr_http_parser(mp_args[0]);
    enum http_parser_type type = (int)mp_obj_get_int(mp_args[1]);
    ((void (*)(http_parser *, enum http_parser_type))lv_func_ptr)(parser, type);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_parser_init_obj, 2, mp_http_parser_init, http_parser_init);
    

/*
 * espidf extension definition for:
 * size_t http_parser_execute(http_parser *parser, const http_parser_settings *settings, const char *data, size_t len)
 */
 
STATIC mp_obj_t mp_http_parser_execute(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    http_parser *parser = mp_write_ptr_http_parser(mp_args[0]);
    const http_parser_settings *settings = mp_write_ptr_http_parser_settings(mp_args[1]);
    const char *data = (char*)convert_from_str(mp_args[2]);
    size_t len = (size_t)mp_obj_get_int(mp_args[3]);
    size_t _res = ((size_t (*)(http_parser *, const http_parser_settings *, const char *, size_t))lv_func_ptr)(parser, settings, data, len);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_parser_execute_obj, 4, mp_http_parser_execute, http_parser_execute);
    

/*
 * espidf extension definition for:
 * int http_should_keep_alive(const http_parser *parser)
 */
 
STATIC mp_obj_t mp_http_should_keep_alive(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const http_parser *parser = mp_write_ptr_http_parser(mp_args[0]);
    int _res = ((int (*)(const http_parser *))lv_func_ptr)(parser);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_should_keep_alive_obj, 1, mp_http_should_keep_alive, http_should_keep_alive);
    

/*
 * espidf extension definition for:
 * void http_parser_pause(http_parser *parser, int paused)
 */
 
STATIC mp_obj_t mp_http_parser_pause(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    http_parser *parser = mp_write_ptr_http_parser(mp_args[0]);
    int paused = (int)mp_obj_get_int(mp_args[1]);
    ((void (*)(http_parser *, int))lv_func_ptr)(parser, paused);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_parser_pause_obj, 2, mp_http_parser_pause, http_parser_pause);
    
/* Reusing http_should_keep_alive for http_body_is_final */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_body_is_final_obj, 1, mp_http_should_keep_alive, http_body_is_final);
    

STATIC const mp_rom_map_elem_t mp_http_parser_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(struct http_parser))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_parser_init), MP_ROM_PTR(&mp_http_parser_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_parser_execute), MP_ROM_PTR(&mp_http_parser_execute_obj) },
    { MP_ROM_QSTR(MP_QSTR_should_keep_alive), MP_ROM_PTR(&mp_http_should_keep_alive_obj) },
    { MP_ROM_QSTR(MP_QSTR_parser_pause), MP_ROM_PTR(&mp_http_parser_pause_obj) },
    { MP_ROM_QSTR(MP_QSTR_body_is_final), MP_ROM_PTR(&mp_http_body_is_final_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_http_parser_locals_dict, mp_http_parser_locals_dict_table);
        

/*
 * espidf extension definition for:
 * void http_parser_settings_init(http_parser_settings *settings)
 */
 
STATIC mp_obj_t mp_http_parser_settings_init(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    http_parser_settings *settings = mp_write_ptr_http_parser_settings(mp_args[0]);
    ((void (*)(http_parser_settings *))lv_func_ptr)(settings);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_parser_settings_init_obj, 1, mp_http_parser_settings_init, http_parser_settings_init);
    

STATIC const mp_rom_map_elem_t mp_http_parser_settings_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(struct http_parser_settings))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_settings_init), MP_ROM_PTR(&mp_http_parser_settings_init_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_http_parser_settings_locals_dict, mp_http_parser_settings_locals_dict_table);
        

/*
 * espidf extension definition for:
 * int sh2lib_connect(struct sh2lib_handle *hd, const char *uri)
 */
 
STATIC mp_obj_t mp_sh2lib_connect(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    const char *uri = (char*)convert_from_str(mp_args[1]);
    int _res = ((int (*)(struct sh2lib_handle *, const char *))lv_func_ptr)(hd, uri);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_connect_obj, 2, mp_sh2lib_connect, sh2lib_connect);
    

/*
 * espidf extension definition for:
 * void sh2lib_free(struct sh2lib_handle *hd)
 */
 
STATIC mp_obj_t mp_sh2lib_free(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    ((void (*)(struct sh2lib_handle *))lv_func_ptr)(hd);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_free_obj, 1, mp_sh2lib_free, sh2lib_free);
    

/*
 * Callback function sh2lib_handle_recv_cb
 * int sh2lib_frame_data_recv_cb_t(struct sh2lib_handle *handle, const void *data, size_t len, int flags)
 */

STATIC int sh2lib_handle_recv_cb_callback(struct sh2lib_handle * arg0, const void * arg1, size_t arg2, int arg3)
{
    mp_obj_t mp_args[4];
    mp_args[0] = mp_read_ptr_sh2lib_handle((void*)arg0);
    mp_args[1] = ptr_to_mp((void*)arg1);
    mp_args[2] = mp_obj_new_int_from_uint(arg2);
    mp_args[3] = mp_obj_new_int(arg3);
    mp_obj_t callbacks = get_callback_dict_from_user_data(arg0->user_data);
    mp_obj_t callback_result = mp_call_function_n_kw(mp_obj_dict_get(callbacks, MP_OBJ_NEW_QSTR(MP_QSTR_sh2lib_handle_recv_cb)) , 4, 0, mp_args);
    return (int)mp_obj_get_int(callback_result);
}


/*
 * espidf extension definition for:
 * int sh2lib_do_get(struct sh2lib_handle *hd, const char *path, sh2lib_frame_data_recv_cb_t recv_cb)
 */
 
STATIC mp_obj_t mp_sh2lib_do_get(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    const char *path = (char*)convert_from_str(mp_args[1]);
    void *recv_cb = mp_lv_callback(mp_args[2], &sh2lib_handle_recv_cb_callback, MP_QSTR_sh2lib_handle_recv_cb, &hd->user_data);
    int _res = ((int (*)(struct sh2lib_handle *, const char *, sh2lib_frame_data_recv_cb_t))lv_func_ptr)(hd, path, recv_cb);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_do_get_obj, 3, mp_sh2lib_do_get, sh2lib_do_get);
    

/*
 * Callback function sh2lib_handle_send_cb
 * int sh2lib_putpost_data_cb_t(struct sh2lib_handle *handle, void *data, size_t len, uint32_t *data_flags)
 */

STATIC int sh2lib_handle_send_cb_callback(struct sh2lib_handle * arg0, void * arg1, size_t arg2, uint32_t * arg3)
{
    mp_obj_t mp_args[4];
    mp_args[0] = mp_read_ptr_sh2lib_handle((void*)arg0);
    mp_args[1] = ptr_to_mp((void*)arg1);
    mp_args[2] = mp_obj_new_int_from_uint(arg2);
    mp_args[3] = ptr_to_mp((void*)arg3);
    mp_obj_t callbacks = get_callback_dict_from_user_data(arg0->user_data);
    mp_obj_t callback_result = mp_call_function_n_kw(mp_obj_dict_get(callbacks, MP_OBJ_NEW_QSTR(MP_QSTR_sh2lib_handle_send_cb)) , 4, 0, mp_args);
    return (int)mp_obj_get_int(callback_result);
}


/*
 * espidf extension definition for:
 * int sh2lib_do_post(struct sh2lib_handle *hd, const char *path, sh2lib_putpost_data_cb_t send_cb, sh2lib_frame_data_recv_cb_t recv_cb)
 */
 
STATIC mp_obj_t mp_sh2lib_do_post(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    const char *path = (char*)convert_from_str(mp_args[1]);
    void *send_cb = mp_lv_callback(mp_args[2], &sh2lib_handle_send_cb_callback, MP_QSTR_sh2lib_handle_send_cb, &hd->user_data);
    void *recv_cb = mp_lv_callback(mp_args[3], &sh2lib_handle_recv_cb_callback, MP_QSTR_sh2lib_handle_recv_cb, &hd->user_data);
    int _res = ((int (*)(struct sh2lib_handle *, const char *, sh2lib_putpost_data_cb_t, sh2lib_frame_data_recv_cb_t))lv_func_ptr)(hd, path, send_cb, recv_cb);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_do_post_obj, 4, mp_sh2lib_do_post, sh2lib_do_post);
    
/* Reusing sh2lib_do_post for sh2lib_do_put */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_do_put_obj, 4, mp_sh2lib_do_post, sh2lib_do_put);
    

/*
 * espidf extension definition for:
 * int sh2lib_execute(struct sh2lib_handle *hd)
 */
 
STATIC mp_obj_t mp_sh2lib_execute(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    int _res = ((int (*)(struct sh2lib_handle *))lv_func_ptr)(hd);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_execute_obj, 1, mp_sh2lib_execute, sh2lib_execute);
    

/*
 * Struct sh2lib_nv
 */

STATIC inline const mp_obj_type_t *get_mp_sh2lib_nv_type();

STATIC inline struct sh2lib_nv* mp_write_ptr_sh2lib_nv(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_sh2lib_nv_type()));
    return (struct sh2lib_nv*)self->data;
}

#define mp_write_sh2lib_nv(struct_obj) *mp_write_ptr_sh2lib_nv(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_sh2lib_nv(struct sh2lib_nv *field)
{
    return lv_to_mp_struct(get_mp_sh2lib_nv_type(), (void*)field);
}

#define mp_read_sh2lib_nv(field) mp_read_ptr_sh2lib_nv(copy_buffer(&field, sizeof(struct sh2lib_nv)))
#define mp_read_byref_sh2lib_nv(field) mp_read_ptr_sh2lib_nv(&field)

STATIC void mp_sh2lib_nv_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    struct sh2lib_nv *data = (struct sh2lib_nv*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_name: dest[0] = convert_to_str((void*)data->name); break; // converting from char *;
            case MP_QSTR_value: dest[0] = convert_to_str((void*)data->value); break; // converting from char *;
            case MP_QSTR_flags: dest[0] = mp_obj_new_int_from_uint(data->flags); break; // converting from uint8_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_name: data->name = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_value: data->value = (void*)(char*)convert_from_str(dest[1]); break; // converting to char *;
                case MP_QSTR_flags: data->flags = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_sh2lib_nv_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct sh2lib_nv");
}

STATIC const mp_obj_dict_t mp_sh2lib_nv_locals_dict;

STATIC const mp_obj_type_t mp_sh2lib_nv_type = {
    { &mp_type_type },
    .name = MP_QSTR_sh2lib_nv,
    .print = mp_sh2lib_nv_print,
    .make_new = make_new_lv_struct,
    .attr = mp_sh2lib_nv_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_sh2lib_nv_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_sh2lib_nv_type()
{
    return &mp_sh2lib_nv_type;
}
    

/*
 * Array convertors for sh2lib_nv []
 */

STATIC const struct sh2lib_nv *mp_arr_to_sh2lib_nv_____(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    
    struct sh2lib_nv *lv_arr = (struct sh2lib_nv*)m_malloc(len * sizeof(struct sh2lib_nv));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = mp_write_sh2lib_nv(item);
    }
    return (const struct sh2lib_nv *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_sh2lib_nv_____(const struct sh2lib_nv *arr)
{
    mp_obj_t obj_arr[1];
    for (size_t i=0; i<1; i++){
        obj_arr[i] = mp_read_sh2lib_nv(arr[i]);
    }
    return mp_obj_new_list(1, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * espidf extension definition for:
 * int sh2lib_do_get_with_nv(struct sh2lib_handle *hd, const struct sh2lib_nv nva[], size_t nvlen, sh2lib_frame_data_recv_cb_t recv_cb)
 */
 
STATIC mp_obj_t mp_sh2lib_do_get_with_nv(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    const struct sh2lib_nv *nva = mp_arr_to_sh2lib_nv_____(mp_args[1]);
    size_t nvlen = (size_t)mp_obj_get_int(mp_args[2]);
    void *recv_cb = mp_lv_callback(mp_args[3], &sh2lib_handle_recv_cb_callback, MP_QSTR_sh2lib_handle_recv_cb, &hd->user_data);
    int _res = ((int (*)(struct sh2lib_handle *, const struct sh2lib_nv [], size_t, sh2lib_frame_data_recv_cb_t))lv_func_ptr)(hd, nva, nvlen, recv_cb);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_do_get_with_nv_obj, 4, mp_sh2lib_do_get_with_nv, sh2lib_do_get_with_nv);
    

/*
 * espidf extension definition for:
 * int sh2lib_do_putpost_with_nv(struct sh2lib_handle *hd, const struct sh2lib_nv nva[], size_t nvlen, sh2lib_putpost_data_cb_t send_cb, sh2lib_frame_data_recv_cb_t recv_cb)
 */
 
STATIC mp_obj_t mp_sh2lib_do_putpost_with_nv(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    const struct sh2lib_nv *nva = mp_arr_to_sh2lib_nv_____(mp_args[1]);
    size_t nvlen = (size_t)mp_obj_get_int(mp_args[2]);
    void *send_cb = mp_lv_callback(mp_args[3], &sh2lib_handle_send_cb_callback, MP_QSTR_sh2lib_handle_send_cb, &hd->user_data);
    void *recv_cb = mp_lv_callback(mp_args[4], &sh2lib_handle_recv_cb_callback, MP_QSTR_sh2lib_handle_recv_cb, &hd->user_data);
    int _res = ((int (*)(struct sh2lib_handle *, const struct sh2lib_nv [], size_t, sh2lib_putpost_data_cb_t, sh2lib_frame_data_recv_cb_t))lv_func_ptr)(hd, nva, nvlen, send_cb, recv_cb);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_do_putpost_with_nv_obj, 5, mp_sh2lib_do_putpost_with_nv, sh2lib_do_putpost_with_nv);
    

/*
 * espidf extension definition for:
 * int sh2lib_session_resume_data(struct sh2lib_handle *hd, int32_t stream_id)
 */
 
STATIC mp_obj_t mp_sh2lib_session_resume_data(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct sh2lib_handle *hd = mp_write_ptr_sh2lib_handle(mp_args[0]);
    int32_t stream_id = (int32_t)mp_obj_get_int(mp_args[1]);
    int _res = ((int (*)(struct sh2lib_handle *, int32_t))lv_func_ptr)(hd, stream_id);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_sh2lib_session_resume_data_obj, 2, mp_sh2lib_session_resume_data, sh2lib_session_resume_data);
    

STATIC const mp_rom_map_elem_t mp_sh2lib_handle_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(struct sh2lib_handle))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    { MP_ROM_QSTR(MP_QSTR_connect), MP_ROM_PTR(&mp_sh2lib_connect_obj) },
    { MP_ROM_QSTR(MP_QSTR_free), MP_ROM_PTR(&mp_sh2lib_free_obj) },
    { MP_ROM_QSTR(MP_QSTR_do_get), MP_ROM_PTR(&mp_sh2lib_do_get_obj) },
    { MP_ROM_QSTR(MP_QSTR_do_post), MP_ROM_PTR(&mp_sh2lib_do_post_obj) },
    { MP_ROM_QSTR(MP_QSTR_do_put), MP_ROM_PTR(&mp_sh2lib_do_put_obj) },
    { MP_ROM_QSTR(MP_QSTR_execute), MP_ROM_PTR(&mp_sh2lib_execute_obj) },
    { MP_ROM_QSTR(MP_QSTR_do_get_with_nv), MP_ROM_PTR(&mp_sh2lib_do_get_with_nv_obj) },
    { MP_ROM_QSTR(MP_QSTR_do_putpost_with_nv), MP_ROM_PTR(&mp_sh2lib_do_putpost_with_nv_obj) },
    { MP_ROM_QSTR(MP_QSTR_session_resume_data), MP_ROM_PTR(&mp_sh2lib_session_resume_data_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_sh2lib_handle_locals_dict, mp_sh2lib_handle_locals_dict_table);
        

/* 
 *
 * Global Module Functions
 *
 */


/*
 * espidf extension definition for:
 * inline static bool dhcps_router_enabled(dhcps_offer_t offer)
 */
 
STATIC mp_obj_t mp_dhcps_router_enabled(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    dhcps_offer_t offer = (uint8_t)mp_obj_get_int(mp_args[0]);
    bool _res = ((bool (*)(dhcps_offer_t))lv_func_ptr)(offer);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_router_enabled_obj, 1, mp_dhcps_router_enabled, dhcps_router_enabled);
    

STATIC const mp_rom_map_elem_t mp_sh2lib_nv_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(struct sh2lib_nv))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_sh2lib_nv_locals_dict, mp_sh2lib_nv_locals_dict_table);
        
/* Reusing dhcps_router_enabled for dhcps_dns_enabled */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_dns_enabled_obj, 1, mp_dhcps_router_enabled, dhcps_dns_enabled);
    

/*
 * espidf extension definition for:
 * const char *esp_get_idf_version(void)
 */
 
STATIC mp_obj_t mp_esp_get_idf_version(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    const char * _res = ((const char *(*)(void))lv_func_ptr)();
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_get_idf_version_obj, 0, mp_esp_get_idf_version, esp_get_idf_version);
    

/*
 * espidf extension definition for:
 * inline static void SPH0645_WORKAROUND(int i2s_num)
 */
 
STATIC mp_obj_t mp_SPH0645_WORKAROUND(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int i2s_num = (int)mp_obj_get_int(mp_args[0]);
    ((void (*)(int))lv_func_ptr)(i2s_num);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_SPH0645_WORKAROUND_obj, 1, mp_SPH0645_WORKAROUND, SPH0645_WORKAROUND);
    

/*
 * espidf extension definition for:
 * inline static void get_ccount(int *ccount)
 */
 
STATIC mp_obj_t mp_get_ccount(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int *ccount = mp_to_ptr(mp_args[0]);
    ((void (*)(int *))lv_func_ptr)(ccount);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_get_ccount_obj, 1, mp_get_ccount, get_ccount);
    

/*
 * espidf extension definition for:
 * uint32_t esp_clk_slowclk_cal_get()
 */
 
STATIC mp_obj_t mp_esp_clk_slowclk_cal_get(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    uint32_t _res = ((uint32_t (*)())lv_func_ptr)();
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_clk_slowclk_cal_get_obj, 0, mp_esp_clk_slowclk_cal_get, esp_clk_slowclk_cal_get);
    

/*
 * espidf extension definition for:
 * void esp_clk_slowclk_cal_set(uint32_t value)
 */
 
STATIC mp_obj_t mp_esp_clk_slowclk_cal_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t value = (uint32_t)mp_obj_get_int(mp_args[0]);
    ((void (*)(uint32_t))lv_func_ptr)(value);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_clk_slowclk_cal_set_obj, 1, mp_esp_clk_slowclk_cal_set, esp_clk_slowclk_cal_set);
    

/*
 * espidf extension definition for:
 * int esp_clk_cpu_freq(void)
 */
 
STATIC mp_obj_t mp_esp_clk_cpu_freq(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    int _res = ((int (*)(void))lv_func_ptr)();
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_clk_cpu_freq_obj, 0, mp_esp_clk_cpu_freq, esp_clk_cpu_freq);
    
/* Reusing esp_clk_cpu_freq for esp_clk_apb_freq */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_clk_apb_freq_obj, 0, mp_esp_clk_cpu_freq, esp_clk_apb_freq);
    
/* Reusing esp_clk_cpu_freq for esp_clk_xtal_freq */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_clk_xtal_freq_obj, 0, mp_esp_clk_cpu_freq, esp_clk_xtal_freq);
    

/*
 * espidf extension definition for:
 * uint64_t esp_clk_rtc_time()
 */
 
STATIC mp_obj_t mp_esp_clk_rtc_time(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    uint64_t _res = ((uint64_t (*)())lv_func_ptr)();
    return mp_obj_new_int_from_ull(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_clk_rtc_time_obj, 0, mp_esp_clk_rtc_time, esp_clk_rtc_time);
    

/*
 * espidf extension definition for:
 * const char *esp_err_to_name(esp_err_t code)
 */
 
STATIC mp_obj_t mp_esp_err_to_name(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_err_t code = (int32_t)mp_obj_get_int(mp_args[0]);
    const char * _res = ((const char *(*)(esp_err_t))lv_func_ptr)(code);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_err_to_name_obj, 1, mp_esp_err_to_name, esp_err_to_name);
    

/*
 * espidf extension definition for:
 * const char *esp_err_to_name_r(esp_err_t code, char *buf, size_t buflen)
 */
 
STATIC mp_obj_t mp_esp_err_to_name_r(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_err_t code = (int32_t)mp_obj_get_int(mp_args[0]);
    char *buf = (char*)convert_from_str(mp_args[1]);
    size_t buflen = (size_t)mp_obj_get_int(mp_args[2]);
    const char * _res = ((const char *(*)(esp_err_t, char *, size_t))lv_func_ptr)(code, buf, buflen);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_err_to_name_r_obj, 3, mp_esp_err_to_name_r, esp_err_to_name_r);
    
/* Reusing funcptr_shutdown_handler_t for gpio_init */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_init_obj, 0, mp_funcptr_shutdown_handler_t, gpio_init);
    

/*
 * espidf extension definition for:
 * void gpio_output_set(uint32_t set_mask, uint32_t clear_mask, uint32_t enable_mask, uint32_t disable_mask)
 */
 
STATIC mp_obj_t mp_gpio_output_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t set_mask = (uint32_t)mp_obj_get_int(mp_args[0]);
    uint32_t clear_mask = (uint32_t)mp_obj_get_int(mp_args[1]);
    uint32_t enable_mask = (uint32_t)mp_obj_get_int(mp_args[2]);
    uint32_t disable_mask = (uint32_t)mp_obj_get_int(mp_args[3]);
    ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))lv_func_ptr)(set_mask, clear_mask, enable_mask, disable_mask);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_output_set_obj, 4, mp_gpio_output_set, gpio_output_set);
    
/* Reusing gpio_output_set for gpio_output_set_high */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_output_set_high_obj, 4, mp_gpio_output_set, gpio_output_set_high);
    

/*
 * espidf extension definition for:
 * uint32_t gpio_input_get(void)
 */
 
STATIC mp_obj_t mp_gpio_input_get(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    uint32_t _res = ((uint32_t (*)(void))lv_func_ptr)();
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_input_get_obj, 0, mp_gpio_input_get, gpio_input_get);
    
/* Reusing gpio_input_get for gpio_input_get_high */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_input_get_high_obj, 0, mp_gpio_input_get, gpio_input_get_high);
    

/*
 * Function NOT generated:
 * Callback argument 'gpio_intr_handler_fn_t fn' cannot be the first argument! We assume the first argument contains the user_data
 * gpio_intr_handler_fn_t fn
 */
    

/*
 * espidf extension definition for:
 * void gpio_intr_handler_register(gpio_intr_handler_fn_t fn, void *arg)
 */
 
STATIC mp_obj_t mp_gpio_intr_handler_register(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_intr_handler_fn_t fn = mp_to_ptr(mp_args[0]);
    void *arg = mp_to_ptr(mp_args[1]);
    ((void (*)(gpio_intr_handler_fn_t, void *))lv_func_ptr)(fn, arg);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_handler_register_obj, 2, mp_gpio_intr_handler_register, gpio_intr_handler_register);
    
/* Reusing gpio_input_get for gpio_intr_pending */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_pending_obj, 0, mp_gpio_input_get, gpio_intr_pending);
    
/* Reusing gpio_input_get for gpio_intr_pending_high */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_pending_high_obj, 0, mp_gpio_input_get, gpio_intr_pending_high);
    
/* Reusing esp_clk_slowclk_cal_set for gpio_intr_ack */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_ack_obj, 1, mp_esp_clk_slowclk_cal_set, gpio_intr_ack);
    
/* Reusing esp_clk_slowclk_cal_set for gpio_intr_ack_high */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_ack_high_obj, 1, mp_esp_clk_slowclk_cal_set, gpio_intr_ack_high);
    

/*
 * espidf extension definition for:
 * void gpio_pin_wakeup_enable(uint32_t i, GPIO_INT_TYPE intr_state)
 */
 
STATIC mp_obj_t mp_gpio_pin_wakeup_enable(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t i = (uint32_t)mp_obj_get_int(mp_args[0]);
    GPIO_INT_TYPE intr_state = (int)mp_obj_get_int(mp_args[1]);
    ((void (*)(uint32_t, GPIO_INT_TYPE))lv_func_ptr)(i, intr_state);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pin_wakeup_enable_obj, 2, mp_gpio_pin_wakeup_enable, gpio_pin_wakeup_enable);
    
/* Reusing funcptr_shutdown_handler_t for gpio_pin_wakeup_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pin_wakeup_disable_obj, 0, mp_funcptr_shutdown_handler_t, gpio_pin_wakeup_disable);
    

/*
 * espidf extension definition for:
 * void gpio_matrix_in(uint32_t gpio, uint32_t signal_idx, bool inv)
 */
 
STATIC mp_obj_t mp_gpio_matrix_in(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t gpio = (uint32_t)mp_obj_get_int(mp_args[0]);
    uint32_t signal_idx = (uint32_t)mp_obj_get_int(mp_args[1]);
    bool inv = mp_obj_is_true(mp_args[2]);
    ((void (*)(uint32_t, uint32_t, bool))lv_func_ptr)(gpio, signal_idx, inv);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_matrix_in_obj, 3, mp_gpio_matrix_in, gpio_matrix_in);
    

/*
 * espidf extension definition for:
 * void gpio_matrix_out(uint32_t gpio, uint32_t signal_idx, bool out_inv, bool oen_inv)
 */
 
STATIC mp_obj_t mp_gpio_matrix_out(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t gpio = (uint32_t)mp_obj_get_int(mp_args[0]);
    uint32_t signal_idx = (uint32_t)mp_obj_get_int(mp_args[1]);
    bool out_inv = mp_obj_is_true(mp_args[2]);
    bool oen_inv = mp_obj_is_true(mp_args[3]);
    ((void (*)(uint32_t, uint32_t, bool, bool))lv_func_ptr)(gpio, signal_idx, out_inv, oen_inv);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_matrix_out_obj, 4, mp_gpio_matrix_out, gpio_matrix_out);
    

/*
 * espidf extension definition for:
 * void gpio_pad_select_gpio(uint8_t gpio_num)
 */
 
STATIC mp_obj_t mp_gpio_pad_select_gpio(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t gpio_num = (uint8_t)mp_obj_get_int(mp_args[0]);
    ((void (*)(uint8_t))lv_func_ptr)(gpio_num);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pad_select_gpio_obj, 1, mp_gpio_pad_select_gpio, gpio_pad_select_gpio);
    

/*
 * espidf extension definition for:
 * void gpio_pad_set_drv(uint8_t gpio_num, uint8_t drv)
 */
 
STATIC mp_obj_t mp_gpio_pad_set_drv(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t gpio_num = (uint8_t)mp_obj_get_int(mp_args[0]);
    uint8_t drv = (uint8_t)mp_obj_get_int(mp_args[1]);
    ((void (*)(uint8_t, uint8_t))lv_func_ptr)(gpio_num, drv);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pad_set_drv_obj, 2, mp_gpio_pad_set_drv, gpio_pad_set_drv);
    
/* Reusing gpio_pad_select_gpio for gpio_pad_pullup */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pad_pullup_obj, 1, mp_gpio_pad_select_gpio, gpio_pad_pullup);
    
/* Reusing gpio_pad_select_gpio for gpio_pad_pulldown */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pad_pulldown_obj, 1, mp_gpio_pad_select_gpio, gpio_pad_pulldown);
    
/* Reusing gpio_pad_select_gpio for gpio_pad_unhold */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pad_unhold_obj, 1, mp_gpio_pad_select_gpio, gpio_pad_unhold);
    
/* Reusing gpio_pad_select_gpio for gpio_pad_hold */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pad_hold_obj, 1, mp_gpio_pad_select_gpio, gpio_pad_hold);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_intr_mark_shared(int intno, int cpu, bool is_in_iram)
 */
 
STATIC mp_obj_t mp_esp_intr_mark_shared(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int intno = (int)mp_obj_get_int(mp_args[0]);
    int cpu = (int)mp_obj_get_int(mp_args[1]);
    bool is_in_iram = mp_obj_is_true(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(int, int, bool))lv_func_ptr)(intno, cpu, is_in_iram);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_mark_shared_obj, 3, mp_esp_intr_mark_shared, esp_intr_mark_shared);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_intr_reserve(int intno, int cpu)
 */
 
STATIC mp_obj_t mp_esp_intr_reserve(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int intno = (int)mp_obj_get_int(mp_args[0]);
    int cpu = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(int, int))lv_func_ptr)(intno, cpu);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_reserve_obj, 2, mp_esp_intr_reserve, esp_intr_reserve);
    

/*
 * Function NOT generated:
 * Callback function 'intr_handler_t handler' must receive a struct pointer with user_data member as its first argument!
 * intr_handler_t handler
 */
    

/*
 * espidf extension definition for:
 * esp_err_t esp_intr_alloc(int source, int flags, intr_handler_t handler, void *arg, intr_handle_t *ret_handle)
 */
 
STATIC mp_obj_t mp_esp_intr_alloc(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int source = (int)mp_obj_get_int(mp_args[0]);
    int flags = (int)mp_obj_get_int(mp_args[1]);
    intr_handler_t handler = mp_to_ptr(mp_args[2]);
    void *arg = mp_to_ptr(mp_args[3]);
    intr_handle_t *ret_handle = mp_to_ptr(mp_args[4]);
    esp_err_t _res = ((esp_err_t (*)(int, int, intr_handler_t, void *, intr_handle_t *))lv_func_ptr)(source, flags, handler, arg, ret_handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_alloc_obj, 5, mp_esp_intr_alloc, esp_intr_alloc);
    

/*
 * Function NOT generated:
 * Callback function 'intr_handler_t handler' must receive a struct pointer with user_data member as its first argument!
 * intr_handler_t handler
 */
    

/*
 * espidf extension definition for:
 * esp_err_t esp_intr_alloc_intrstatus(int source, int flags, uint32_t intrstatusreg, uint32_t intrstatusmask, intr_handler_t handler, void *arg, intr_handle_t *ret_handle)
 */
 
STATIC mp_obj_t mp_esp_intr_alloc_intrstatus(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int source = (int)mp_obj_get_int(mp_args[0]);
    int flags = (int)mp_obj_get_int(mp_args[1]);
    uint32_t intrstatusreg = (uint32_t)mp_obj_get_int(mp_args[2]);
    uint32_t intrstatusmask = (uint32_t)mp_obj_get_int(mp_args[3]);
    intr_handler_t handler = mp_to_ptr(mp_args[4]);
    void *arg = mp_to_ptr(mp_args[5]);
    intr_handle_t *ret_handle = mp_to_ptr(mp_args[6]);
    esp_err_t _res = ((esp_err_t (*)(int, int, uint32_t, uint32_t, intr_handler_t, void *, intr_handle_t *))lv_func_ptr)(source, flags, intrstatusreg, intrstatusmask, handler, arg, ret_handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_alloc_intrstatus_obj, 7, mp_esp_intr_alloc_intrstatus, esp_intr_alloc_intrstatus);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_intr_free(intr_handle_t handle)
 */
 
STATIC mp_obj_t mp_esp_intr_free(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    intr_handle_t handle = mp_to_ptr(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(intr_handle_t))lv_func_ptr)(handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_free_obj, 1, mp_esp_intr_free, esp_intr_free);
    

/*
 * espidf extension definition for:
 * int esp_intr_get_cpu(intr_handle_t handle)
 */
 
STATIC mp_obj_t mp_esp_intr_get_cpu(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    intr_handle_t handle = mp_to_ptr(mp_args[0]);
    int _res = ((int (*)(intr_handle_t))lv_func_ptr)(handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_get_cpu_obj, 1, mp_esp_intr_get_cpu, esp_intr_get_cpu);
    
/* Reusing esp_intr_get_cpu for esp_intr_get_intno */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_get_intno_obj, 1, mp_esp_intr_get_cpu, esp_intr_get_intno);
    
/* Reusing esp_intr_free for esp_intr_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_disable_obj, 1, mp_esp_intr_free, esp_intr_disable);
    
/* Reusing esp_intr_free for esp_intr_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_enable_obj, 1, mp_esp_intr_free, esp_intr_enable);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_intr_set_in_iram(intr_handle_t handle, bool is_in_iram)
 */
 
STATIC mp_obj_t mp_esp_intr_set_in_iram(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    intr_handle_t handle = mp_to_ptr(mp_args[0]);
    bool is_in_iram = mp_obj_is_true(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(intr_handle_t, bool))lv_func_ptr)(handle, is_in_iram);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_set_in_iram_obj, 2, mp_esp_intr_set_in_iram, esp_intr_set_in_iram);
    

/*
 * espidf extension definition for:
 * void esp_intr_noniram_disable()
 */
 
STATIC mp_obj_t mp_esp_intr_noniram_disable(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    ((void (*)())lv_func_ptr)();
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_noniram_disable_obj, 0, mp_esp_intr_noniram_disable, esp_intr_noniram_disable);
    
/* Reusing esp_intr_noniram_disable for esp_intr_noniram_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_intr_noniram_enable_obj, 0, mp_esp_intr_noniram_disable, esp_intr_noniram_enable);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_reset_pin(gpio_num_t gpio_num)
 */
 
STATIC mp_obj_t mp_gpio_reset_pin(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t))lv_func_ptr)(gpio_num);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_reset_pin_obj, 1, mp_gpio_reset_pin, gpio_reset_pin);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_set_intr_type(gpio_num_t gpio_num, gpio_int_type_t intr_type)
 */
 
STATIC mp_obj_t mp_gpio_set_intr_type(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    gpio_int_type_t intr_type = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, gpio_int_type_t))lv_func_ptr)(gpio_num, intr_type);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_set_intr_type_obj, 2, mp_gpio_set_intr_type, gpio_set_intr_type);
    
/* Reusing gpio_reset_pin for gpio_intr_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_enable_obj, 1, mp_gpio_reset_pin, gpio_intr_enable);
    
/* Reusing gpio_reset_pin for gpio_intr_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_intr_disable_obj, 1, mp_gpio_reset_pin, gpio_intr_disable);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_set_level(gpio_num_t gpio_num, uint32_t level)
 */
 
STATIC mp_obj_t mp_gpio_set_level(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    uint32_t level = (uint32_t)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, uint32_t))lv_func_ptr)(gpio_num, level);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_set_level_obj, 2, mp_gpio_set_level, gpio_set_level);
    

/*
 * espidf extension definition for:
 * int gpio_get_level(gpio_num_t gpio_num)
 */
 
STATIC mp_obj_t mp_gpio_get_level(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    int _res = ((int (*)(gpio_num_t))lv_func_ptr)(gpio_num);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_get_level_obj, 1, mp_gpio_get_level, gpio_get_level);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_set_direction(gpio_num_t gpio_num, gpio_mode_t mode)
 */
 
STATIC mp_obj_t mp_gpio_set_direction(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    gpio_mode_t mode = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, gpio_mode_t))lv_func_ptr)(gpio_num, mode);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_set_direction_obj, 2, mp_gpio_set_direction, gpio_set_direction);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_set_pull_mode(gpio_num_t gpio_num, gpio_pull_mode_t pull)
 */
 
STATIC mp_obj_t mp_gpio_set_pull_mode(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    gpio_pull_mode_t pull = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, gpio_pull_mode_t))lv_func_ptr)(gpio_num, pull);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_set_pull_mode_obj, 2, mp_gpio_set_pull_mode, gpio_set_pull_mode);
    
/* Reusing gpio_set_intr_type for gpio_wakeup_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_wakeup_enable_obj, 2, mp_gpio_set_intr_type, gpio_wakeup_enable);
    
/* Reusing gpio_reset_pin for gpio_wakeup_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_wakeup_disable_obj, 1, mp_gpio_reset_pin, gpio_wakeup_disable);
    

/*
 * Function NOT generated:
 * Callback argument 'void (*fn)(void *)' cannot be the first argument! We assume the first argument contains the user_data
 * void (*fn)(void *)
 */
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_isr_register(void (*fn)(void *), void *arg, int intr_alloc_flags, gpio_isr_handle_t *handle)
 */
 
STATIC mp_obj_t mp_gpio_isr_register(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void (*fn)(void *) = mp_to_ptr(mp_args[0]);
    void *arg = mp_to_ptr(mp_args[1]);
    int intr_alloc_flags = (int)mp_obj_get_int(mp_args[2]);
    gpio_isr_handle_t *handle = mp_to_ptr(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(void (*)(void *), void *, int, gpio_isr_handle_t *))lv_func_ptr)(fn, arg, intr_alloc_flags, handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_isr_register_obj, 4, mp_gpio_isr_register, gpio_isr_register);
    
/* Reusing gpio_reset_pin for gpio_pullup_en */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pullup_en_obj, 1, mp_gpio_reset_pin, gpio_pullup_en);
    
/* Reusing gpio_reset_pin for gpio_pullup_dis */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pullup_dis_obj, 1, mp_gpio_reset_pin, gpio_pullup_dis);
    
/* Reusing gpio_reset_pin for gpio_pulldown_en */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pulldown_en_obj, 1, mp_gpio_reset_pin, gpio_pulldown_en);
    
/* Reusing gpio_reset_pin for gpio_pulldown_dis */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_pulldown_dis_obj, 1, mp_gpio_reset_pin, gpio_pulldown_dis);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_install_isr_service(int intr_alloc_flags)
 */
 
STATIC mp_obj_t mp_gpio_install_isr_service(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int intr_alloc_flags = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(int))lv_func_ptr)(intr_alloc_flags);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_install_isr_service_obj, 1, mp_gpio_install_isr_service, gpio_install_isr_service);
    
/* Reusing esp_intr_noniram_disable for gpio_uninstall_isr_service */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_uninstall_isr_service_obj, 0, mp_esp_intr_noniram_disable, gpio_uninstall_isr_service);
    

/*
 * Function NOT generated:
 * Callback function 'gpio_isr_t isr_handler' must receive a struct pointer with user_data member as its first argument!
 * gpio_isr_t isr_handler
 */
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_isr_handler_add(gpio_num_t gpio_num, gpio_isr_t isr_handler, void *args)
 */
 
STATIC mp_obj_t mp_gpio_isr_handler_add(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    gpio_isr_t isr_handler = mp_to_ptr(mp_args[1]);
    void *args = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, gpio_isr_t, void *))lv_func_ptr)(gpio_num, isr_handler, args);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_isr_handler_add_obj, 3, mp_gpio_isr_handler_add, gpio_isr_handler_add);
    
/* Reusing gpio_reset_pin for gpio_isr_handler_remove */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_isr_handler_remove_obj, 1, mp_gpio_reset_pin, gpio_isr_handler_remove);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_set_drive_capability(gpio_num_t gpio_num, gpio_drive_cap_t strength)
 */
 
STATIC mp_obj_t mp_gpio_set_drive_capability(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    gpio_drive_cap_t strength = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, gpio_drive_cap_t))lv_func_ptr)(gpio_num, strength);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_set_drive_capability_obj, 2, mp_gpio_set_drive_capability, gpio_set_drive_capability);
    

/*
 * espidf extension definition for:
 * esp_err_t gpio_get_drive_capability(gpio_num_t gpio_num, gpio_drive_cap_t *strength)
 */
 
STATIC mp_obj_t mp_gpio_get_drive_capability(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    gpio_num_t gpio_num = (int)mp_obj_get_int(mp_args[0]);
    gpio_drive_cap_t *strength = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(gpio_num_t, gpio_drive_cap_t *))lv_func_ptr)(gpio_num, strength);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_get_drive_capability_obj, 2, mp_gpio_get_drive_capability, gpio_get_drive_capability);
    
/* Reusing gpio_reset_pin for gpio_hold_en */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_hold_en_obj, 1, mp_gpio_reset_pin, gpio_hold_en);
    
/* Reusing gpio_reset_pin for gpio_hold_dis */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_hold_dis_obj, 1, mp_gpio_reset_pin, gpio_hold_dis);
    
/* Reusing funcptr_shutdown_handler_t for gpio_deep_sleep_hold_en */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_deep_sleep_hold_en_obj, 0, mp_funcptr_shutdown_handler_t, gpio_deep_sleep_hold_en);
    
/* Reusing funcptr_shutdown_handler_t for gpio_deep_sleep_hold_dis */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_deep_sleep_hold_dis_obj, 0, mp_funcptr_shutdown_handler_t, gpio_deep_sleep_hold_dis);
    

/*
 * espidf extension definition for:
 * void gpio_iomux_in(uint32_t gpio_num, uint32_t signal_idx)
 */
 
STATIC mp_obj_t mp_gpio_iomux_in(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t gpio_num = (uint32_t)mp_obj_get_int(mp_args[0]);
    uint32_t signal_idx = (uint32_t)mp_obj_get_int(mp_args[1]);
    ((void (*)(uint32_t, uint32_t))lv_func_ptr)(gpio_num, signal_idx);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_iomux_in_obj, 2, mp_gpio_iomux_in, gpio_iomux_in);
    

/*
 * espidf extension definition for:
 * void gpio_iomux_out(uint8_t gpio_num, int func, bool oen_inv)
 */
 
STATIC mp_obj_t mp_gpio_iomux_out(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t gpio_num = (uint8_t)mp_obj_get_int(mp_args[0]);
    int func = (int)mp_obj_get_int(mp_args[1]);
    bool oen_inv = mp_obj_is_true(mp_args[2]);
    ((void (*)(uint8_t, int, bool))lv_func_ptr)(gpio_num, func, oen_inv);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_gpio_iomux_out_obj, 3, mp_gpio_iomux_out, gpio_iomux_out);
    

/*
 * Struct spi_bus_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_spi_bus_config_t_type();

STATIC inline spi_bus_config_t* mp_write_ptr_spi_bus_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_spi_bus_config_t_type()));
    return (spi_bus_config_t*)self->data;
}

#define mp_write_spi_bus_config_t(struct_obj) *mp_write_ptr_spi_bus_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_spi_bus_config_t(spi_bus_config_t *field)
{
    return lv_to_mp_struct(get_mp_spi_bus_config_t_type(), (void*)field);
}

#define mp_read_spi_bus_config_t(field) mp_read_ptr_spi_bus_config_t(copy_buffer(&field, sizeof(spi_bus_config_t)))
#define mp_read_byref_spi_bus_config_t(field) mp_read_ptr_spi_bus_config_t(&field)

STATIC void mp_spi_bus_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    spi_bus_config_t *data = (spi_bus_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_mosi_io_num: dest[0] = mp_obj_new_int(data->mosi_io_num); break; // converting from int;
            case MP_QSTR_miso_io_num: dest[0] = mp_obj_new_int(data->miso_io_num); break; // converting from int;
            case MP_QSTR_sclk_io_num: dest[0] = mp_obj_new_int(data->sclk_io_num); break; // converting from int;
            case MP_QSTR_quadwp_io_num: dest[0] = mp_obj_new_int(data->quadwp_io_num); break; // converting from int;
            case MP_QSTR_quadhd_io_num: dest[0] = mp_obj_new_int(data->quadhd_io_num); break; // converting from int;
            case MP_QSTR_max_transfer_sz: dest[0] = mp_obj_new_int(data->max_transfer_sz); break; // converting from int;
            case MP_QSTR_flags: dest[0] = mp_obj_new_int_from_uint(data->flags); break; // converting from uint32_t;
            case MP_QSTR_intr_flags: dest[0] = mp_obj_new_int(data->intr_flags); break; // converting from int;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_mosi_io_num: data->mosi_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_miso_io_num: data->miso_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_sclk_io_num: data->sclk_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_quadwp_io_num: data->quadwp_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_quadhd_io_num: data->quadhd_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_max_transfer_sz: data->max_transfer_sz = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_flags: data->flags = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_intr_flags: data->intr_flags = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_spi_bus_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct spi_bus_config_t");
}

STATIC const mp_obj_dict_t mp_spi_bus_config_t_locals_dict;

STATIC const mp_obj_type_t mp_spi_bus_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_spi_bus_config_t,
    .print = mp_spi_bus_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_spi_bus_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_spi_bus_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_spi_bus_config_t_type()
{
    return &mp_spi_bus_config_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t spi_bus_initialize(spi_host_device_t host, const spi_bus_config_t *bus_config, int dma_chan)
 */
 
STATIC mp_obj_t mp_spi_bus_initialize(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_host_device_t host = (int)mp_obj_get_int(mp_args[0]);
    const spi_bus_config_t *bus_config = mp_write_ptr_spi_bus_config_t(mp_args[1]);
    int dma_chan = (int)mp_obj_get_int(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(spi_host_device_t, const spi_bus_config_t *, int))lv_func_ptr)(host, bus_config, dma_chan);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_bus_initialize_obj, 3, mp_spi_bus_initialize, spi_bus_initialize);
    

STATIC const mp_rom_map_elem_t mp_spi_bus_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(spi_bus_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_spi_bus_config_t_locals_dict, mp_spi_bus_config_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t spi_bus_free(spi_host_device_t host)
 */
 
STATIC mp_obj_t mp_spi_bus_free(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_host_device_t host = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(spi_host_device_t))lv_func_ptr)(host);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_bus_free_obj, 1, mp_spi_bus_free, spi_bus_free);
    
#define funcptr_transaction_cb_t NULL


/*
 * espidf extension definition for:
 * void transaction_cb_t(spi_transaction_t *trans)
 */
 
STATIC mp_obj_t mp_funcptr_transaction_cb_t(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_transaction_t *trans = mp_write_ptr_spi_transaction_t(mp_args[0]);
    ((void (*)(spi_transaction_t *))lv_func_ptr)(trans);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_funcptr_transaction_cb_t_obj, 1, mp_funcptr_transaction_cb_t, funcptr_transaction_cb_t);
    
STATIC inline mp_obj_t mp_lv_funcptr_transaction_cb_t(void *func){ return mp_lv_funcptr(&mp_funcptr_transaction_cb_t_obj, func, NULL, MP_QSTR_, NULL); }


/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'spi_device_interface_config_t_pre_cb_callback'
 * transaction_cb_t pre_cb
 */
    

/*
 * Function NOT generated:
 * Missing 'user_data' as a field of the first parameter of the callback function 'spi_device_interface_config_t_post_cb_callback'
 * transaction_cb_t post_cb
 */
    

/*
 * Struct spi_device_interface_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_spi_device_interface_config_t_type();

STATIC inline spi_device_interface_config_t* mp_write_ptr_spi_device_interface_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_spi_device_interface_config_t_type()));
    return (spi_device_interface_config_t*)self->data;
}

#define mp_write_spi_device_interface_config_t(struct_obj) *mp_write_ptr_spi_device_interface_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_spi_device_interface_config_t(spi_device_interface_config_t *field)
{
    return lv_to_mp_struct(get_mp_spi_device_interface_config_t_type(), (void*)field);
}

#define mp_read_spi_device_interface_config_t(field) mp_read_ptr_spi_device_interface_config_t(copy_buffer(&field, sizeof(spi_device_interface_config_t)))
#define mp_read_byref_spi_device_interface_config_t(field) mp_read_ptr_spi_device_interface_config_t(&field)

STATIC void mp_spi_device_interface_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    spi_device_interface_config_t *data = (spi_device_interface_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_command_bits: dest[0] = mp_obj_new_int_from_uint(data->command_bits); break; // converting from uint8_t;
            case MP_QSTR_address_bits: dest[0] = mp_obj_new_int_from_uint(data->address_bits); break; // converting from uint8_t;
            case MP_QSTR_dummy_bits: dest[0] = mp_obj_new_int_from_uint(data->dummy_bits); break; // converting from uint8_t;
            case MP_QSTR_mode: dest[0] = mp_obj_new_int_from_uint(data->mode); break; // converting from uint8_t;
            case MP_QSTR_duty_cycle_pos: dest[0] = mp_obj_new_int_from_uint(data->duty_cycle_pos); break; // converting from uint8_t;
            case MP_QSTR_cs_ena_pretrans: dest[0] = mp_obj_new_int_from_uint(data->cs_ena_pretrans); break; // converting from uint8_t;
            case MP_QSTR_cs_ena_posttrans: dest[0] = mp_obj_new_int_from_uint(data->cs_ena_posttrans); break; // converting from uint8_t;
            case MP_QSTR_clock_speed_hz: dest[0] = mp_obj_new_int(data->clock_speed_hz); break; // converting from int;
            case MP_QSTR_input_delay_ns: dest[0] = mp_obj_new_int(data->input_delay_ns); break; // converting from int;
            case MP_QSTR_spics_io_num: dest[0] = mp_obj_new_int(data->spics_io_num); break; // converting from int;
            case MP_QSTR_flags: dest[0] = mp_obj_new_int_from_uint(data->flags); break; // converting from uint32_t;
            case MP_QSTR_queue_size: dest[0] = mp_obj_new_int(data->queue_size); break; // converting from int;
            case MP_QSTR_pre_cb: dest[0] = mp_lv_funcptr(&mp_funcptr_transaction_cb_t_obj, data->pre_cb, NULL ,MP_QSTR_spi_device_interface_config_t_pre_cb, NULL); break; // converting from callback transaction_cb_t;
            case MP_QSTR_post_cb: dest[0] = mp_lv_funcptr(&mp_funcptr_transaction_cb_t_obj, data->post_cb, NULL ,MP_QSTR_spi_device_interface_config_t_post_cb, NULL); break; // converting from callback transaction_cb_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_command_bits: data->command_bits = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_address_bits: data->address_bits = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_dummy_bits: data->dummy_bits = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_mode: data->mode = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_duty_cycle_pos: data->duty_cycle_pos = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_cs_ena_pretrans: data->cs_ena_pretrans = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_cs_ena_posttrans: data->cs_ena_posttrans = (uint8_t)mp_obj_get_int(dest[1]); break; // converting to uint8_t;
                case MP_QSTR_clock_speed_hz: data->clock_speed_hz = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_input_delay_ns: data->input_delay_ns = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_spics_io_num: data->spics_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_flags: data->flags = (uint32_t)mp_obj_get_int(dest[1]); break; // converting to uint32_t;
                case MP_QSTR_queue_size: data->queue_size = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_pre_cb: data->pre_cb = mp_lv_callback(dest[1], NULL ,MP_QSTR_spi_device_interface_config_t_pre_cb, NULL); break; // converting to callback transaction_cb_t;
                case MP_QSTR_post_cb: data->post_cb = mp_lv_callback(dest[1], NULL ,MP_QSTR_spi_device_interface_config_t_post_cb, NULL); break; // converting to callback transaction_cb_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_spi_device_interface_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct spi_device_interface_config_t");
}

STATIC const mp_obj_dict_t mp_spi_device_interface_config_t_locals_dict;

STATIC const mp_obj_type_t mp_spi_device_interface_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_spi_device_interface_config_t,
    .print = mp_spi_device_interface_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_spi_device_interface_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_spi_device_interface_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_spi_device_interface_config_t_type()
{
    return &mp_spi_device_interface_config_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t spi_bus_add_device(spi_host_device_t host, const spi_device_interface_config_t *dev_config, spi_device_handle_t *handle)
 */
 
STATIC mp_obj_t mp_spi_bus_add_device(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_host_device_t host = (int)mp_obj_get_int(mp_args[0]);
    const spi_device_interface_config_t *dev_config = mp_write_ptr_spi_device_interface_config_t(mp_args[1]);
    spi_device_handle_t *handle = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(spi_host_device_t, const spi_device_interface_config_t *, spi_device_handle_t *))lv_func_ptr)(host, dev_config, handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_bus_add_device_obj, 3, mp_spi_bus_add_device, spi_bus_add_device);
    

STATIC const mp_rom_map_elem_t mp_spi_device_interface_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(spi_device_interface_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_spi_device_interface_config_t_locals_dict, mp_spi_device_interface_config_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t spi_bus_remove_device(spi_device_handle_t handle)
 */
 
STATIC mp_obj_t mp_spi_bus_remove_device(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_device_handle_t handle = mp_to_ptr(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(spi_device_handle_t))lv_func_ptr)(handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_bus_remove_device_obj, 1, mp_spi_bus_remove_device, spi_bus_remove_device);
    

/*
 * espidf extension definition for:
 * esp_err_t spi_device_queue_trans(spi_device_handle_t handle, spi_transaction_t *trans_desc, TickType_t ticks_to_wait)
 */
 
STATIC mp_obj_t mp_spi_device_queue_trans(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_device_handle_t handle = mp_to_ptr(mp_args[0]);
    spi_transaction_t *trans_desc = mp_write_ptr_spi_transaction_t(mp_args[1]);
    TickType_t ticks_to_wait = (uint32_t)mp_obj_get_int(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(spi_device_handle_t, spi_transaction_t *, TickType_t))lv_func_ptr)(handle, trans_desc, ticks_to_wait);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_queue_trans_obj, 3, mp_spi_device_queue_trans, spi_device_queue_trans);
    

/*
 * espidf extension definition for:
 * esp_err_t spi_device_get_trans_result(spi_device_handle_t handle, spi_transaction_t **trans_desc, TickType_t ticks_to_wait)
 */
 
STATIC mp_obj_t mp_spi_device_get_trans_result(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_device_handle_t handle = mp_to_ptr(mp_args[0]);
    spi_transaction_t **trans_desc = mp_to_ptr(mp_args[1]);
    TickType_t ticks_to_wait = (uint32_t)mp_obj_get_int(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(spi_device_handle_t, spi_transaction_t **, TickType_t))lv_func_ptr)(handle, trans_desc, ticks_to_wait);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_get_trans_result_obj, 3, mp_spi_device_get_trans_result, spi_device_get_trans_result);
    

/*
 * espidf extension definition for:
 * esp_err_t spi_device_transmit(spi_device_handle_t handle, spi_transaction_t *trans_desc)
 */
 
STATIC mp_obj_t mp_spi_device_transmit(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_device_handle_t handle = mp_to_ptr(mp_args[0]);
    spi_transaction_t *trans_desc = mp_write_ptr_spi_transaction_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(spi_device_handle_t, spi_transaction_t *))lv_func_ptr)(handle, trans_desc);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_transmit_obj, 2, mp_spi_device_transmit, spi_device_transmit);
    
/* Reusing spi_device_queue_trans for spi_device_polling_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_polling_start_obj, 3, mp_spi_device_queue_trans, spi_device_polling_start);
    

/*
 * espidf extension definition for:
 * esp_err_t spi_device_polling_end(spi_device_handle_t handle, TickType_t ticks_to_wait)
 */
 
STATIC mp_obj_t mp_spi_device_polling_end(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_device_handle_t handle = mp_to_ptr(mp_args[0]);
    TickType_t ticks_to_wait = (uint32_t)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(spi_device_handle_t, TickType_t))lv_func_ptr)(handle, ticks_to_wait);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_polling_end_obj, 2, mp_spi_device_polling_end, spi_device_polling_end);
    
/* Reusing spi_device_transmit for spi_device_polling_transmit */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_polling_transmit_obj, 2, mp_spi_device_transmit, spi_device_polling_transmit);
    
/* Reusing spi_device_polling_end for spi_device_acquire_bus */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_acquire_bus_obj, 2, mp_spi_device_polling_end, spi_device_acquire_bus);
    

/*
 * espidf extension definition for:
 * void spi_device_release_bus(spi_device_handle_t dev)
 */
 
STATIC mp_obj_t mp_spi_device_release_bus(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    spi_device_handle_t dev = mp_to_ptr(mp_args[0]);
    ((void (*)(spi_device_handle_t))lv_func_ptr)(dev);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_device_release_bus_obj, 1, mp_spi_device_release_bus, spi_device_release_bus);
    

/*
 * espidf extension definition for:
 * int spi_cal_clock(int fapb, int hz, int duty_cycle, uint32_t *reg_o)
 */
 
STATIC mp_obj_t mp_spi_cal_clock(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int fapb = (int)mp_obj_get_int(mp_args[0]);
    int hz = (int)mp_obj_get_int(mp_args[1]);
    int duty_cycle = (int)mp_obj_get_int(mp_args[2]);
    uint32_t *reg_o = mp_to_ptr(mp_args[3]);
    int _res = ((int (*)(int, int, int, uint32_t *))lv_func_ptr)(fapb, hz, duty_cycle, reg_o);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_cal_clock_obj, 4, mp_spi_cal_clock, spi_cal_clock);
    

/*
 * espidf extension definition for:
 * int spi_get_actual_clock(int fapb, int hz, int duty_cycle)
 */
 
STATIC mp_obj_t mp_spi_get_actual_clock(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int fapb = (int)mp_obj_get_int(mp_args[0]);
    int hz = (int)mp_obj_get_int(mp_args[1]);
    int duty_cycle = (int)mp_obj_get_int(mp_args[2]);
    int _res = ((int (*)(int, int, int))lv_func_ptr)(fapb, hz, duty_cycle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_get_actual_clock_obj, 3, mp_spi_get_actual_clock, spi_get_actual_clock);
    

/*
 * espidf extension definition for:
 * void spi_get_timing(bool gpio_is_used, int input_delay_ns, int eff_clk, int *dummy_o, int *cycles_remain_o)
 */
 
STATIC mp_obj_t mp_spi_get_timing(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    bool gpio_is_used = mp_obj_is_true(mp_args[0]);
    int input_delay_ns = (int)mp_obj_get_int(mp_args[1]);
    int eff_clk = (int)mp_obj_get_int(mp_args[2]);
    int *dummy_o = mp_to_ptr(mp_args[3]);
    int *cycles_remain_o = mp_to_ptr(mp_args[4]);
    ((void (*)(bool, int, int, int *, int *))lv_func_ptr)(gpio_is_used, input_delay_ns, eff_clk, dummy_o, cycles_remain_o);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_get_timing_obj, 5, mp_spi_get_timing, spi_get_timing);
    

/*
 * espidf extension definition for:
 * int spi_get_freq_limit(bool gpio_is_used, int input_delay_ns)
 */
 
STATIC mp_obj_t mp_spi_get_freq_limit(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    bool gpio_is_used = mp_obj_is_true(mp_args[0]);
    int input_delay_ns = (int)mp_obj_get_int(mp_args[1]);
    int _res = ((int (*)(bool, int))lv_func_ptr)(gpio_is_used, input_delay_ns);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_get_freq_limit_obj, 2, mp_spi_get_freq_limit, spi_get_freq_limit);
    

/*
 * espidf extension definition for:
 * void *multi_heap_malloc(multi_heap_handle_t heap, size_t size)
 */
 
STATIC mp_obj_t mp_multi_heap_malloc(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    size_t size = (size_t)mp_obj_get_int(mp_args[1]);
    void * _res = ((void *(*)(multi_heap_handle_t, size_t))lv_func_ptr)(heap, size);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_malloc_obj, 2, mp_multi_heap_malloc, multi_heap_malloc);
    

/*
 * espidf extension definition for:
 * void multi_heap_free(multi_heap_handle_t heap, void *p)
 */
 
STATIC mp_obj_t mp_multi_heap_free(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    void *p = mp_to_ptr(mp_args[1]);
    ((void (*)(multi_heap_handle_t, void *))lv_func_ptr)(heap, p);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_free_obj, 2, mp_multi_heap_free, multi_heap_free);
    

/*
 * espidf extension definition for:
 * void *multi_heap_realloc(multi_heap_handle_t heap, void *p, size_t size)
 */
 
STATIC mp_obj_t mp_multi_heap_realloc(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    void *p = mp_to_ptr(mp_args[1]);
    size_t size = (size_t)mp_obj_get_int(mp_args[2]);
    void * _res = ((void *(*)(multi_heap_handle_t, void *, size_t))lv_func_ptr)(heap, p, size);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_realloc_obj, 3, mp_multi_heap_realloc, multi_heap_realloc);
    

/*
 * espidf extension definition for:
 * size_t multi_heap_get_allocated_size(multi_heap_handle_t heap, void *p)
 */
 
STATIC mp_obj_t mp_multi_heap_get_allocated_size(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    void *p = mp_to_ptr(mp_args[1]);
    size_t _res = ((size_t (*)(multi_heap_handle_t, void *))lv_func_ptr)(heap, p);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_get_allocated_size_obj, 2, mp_multi_heap_get_allocated_size, multi_heap_get_allocated_size);
    

/*
 * espidf extension definition for:
 * multi_heap_handle_t multi_heap_register(void *start, size_t size)
 */
 
STATIC mp_obj_t mp_multi_heap_register(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *start = mp_to_ptr(mp_args[0]);
    size_t size = (size_t)mp_obj_get_int(mp_args[1]);
    multi_heap_handle_t _res = ((multi_heap_handle_t (*)(void *, size_t))lv_func_ptr)(start, size);
    return ptr_to_mp(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_register_obj, 2, mp_multi_heap_register, multi_heap_register);
    
/* Reusing multi_heap_free for multi_heap_set_lock */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_set_lock_obj, 2, mp_multi_heap_free, multi_heap_set_lock);
    

/*
 * espidf extension definition for:
 * void multi_heap_dump(multi_heap_handle_t heap)
 */
 
STATIC mp_obj_t mp_multi_heap_dump(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    ((void (*)(multi_heap_handle_t))lv_func_ptr)(heap);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_dump_obj, 1, mp_multi_heap_dump, multi_heap_dump);
    

/*
 * espidf extension definition for:
 * bool multi_heap_check(multi_heap_handle_t heap, bool print_errors)
 */
 
STATIC mp_obj_t mp_multi_heap_check(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    bool print_errors = mp_obj_is_true(mp_args[1]);
    bool _res = ((bool (*)(multi_heap_handle_t, bool))lv_func_ptr)(heap, print_errors);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_check_obj, 2, mp_multi_heap_check, multi_heap_check);
    

/*
 * espidf extension definition for:
 * size_t multi_heap_free_size(multi_heap_handle_t heap)
 */
 
STATIC mp_obj_t mp_multi_heap_free_size(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    size_t _res = ((size_t (*)(multi_heap_handle_t))lv_func_ptr)(heap);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_free_size_obj, 1, mp_multi_heap_free_size, multi_heap_free_size);
    
/* Reusing multi_heap_free_size for multi_heap_minimum_free_size */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_minimum_free_size_obj, 1, mp_multi_heap_free_size, multi_heap_minimum_free_size);
    

/*
 * espidf extension definition for:
 * void multi_heap_get_info(multi_heap_handle_t heap, multi_heap_info_t *info)
 */
 
STATIC mp_obj_t mp_multi_heap_get_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_handle_t heap = mp_to_ptr(mp_args[0]);
    multi_heap_info_t *info = mp_write_ptr_multi_heap_info_t(mp_args[1]);
    ((void (*)(multi_heap_handle_t, multi_heap_info_t *))lv_func_ptr)(heap, info);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_multi_heap_get_info_obj, 2, mp_multi_heap_get_info, multi_heap_get_info);
    

/*
 * espidf extension definition for:
 * void *heap_caps_malloc(size_t size, uint32_t caps)
 */
 
STATIC mp_obj_t mp_heap_caps_malloc(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    size_t size = (size_t)mp_obj_get_int(mp_args[0]);
    uint32_t caps = (uint32_t)mp_obj_get_int(mp_args[1]);
    void * _res = ((void *(*)(size_t, uint32_t))lv_func_ptr)(size, caps);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_malloc_obj, 2, mp_heap_caps_malloc, heap_caps_malloc);
    
/* Reusing funcptr_fn for heap_caps_free */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_free_obj, 1, mp_funcptr_fn, heap_caps_free);
    

/*
 * espidf extension definition for:
 * void *heap_caps_realloc(void *ptr, size_t size, int caps)
 */
 
STATIC mp_obj_t mp_heap_caps_realloc(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *ptr = mp_to_ptr(mp_args[0]);
    size_t size = (size_t)mp_obj_get_int(mp_args[1]);
    int caps = (int)mp_obj_get_int(mp_args[2]);
    void * _res = ((void *(*)(void *, size_t, int))lv_func_ptr)(ptr, size, caps);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_realloc_obj, 3, mp_heap_caps_realloc, heap_caps_realloc);
    

/*
 * espidf extension definition for:
 * void *heap_caps_calloc(size_t n, size_t size, uint32_t caps)
 */
 
STATIC mp_obj_t mp_heap_caps_calloc(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    size_t n = (size_t)mp_obj_get_int(mp_args[0]);
    size_t size = (size_t)mp_obj_get_int(mp_args[1]);
    uint32_t caps = (uint32_t)mp_obj_get_int(mp_args[2]);
    void * _res = ((void *(*)(size_t, size_t, uint32_t))lv_func_ptr)(n, size, caps);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_calloc_obj, 3, mp_heap_caps_calloc, heap_caps_calloc);
    

/*
 * espidf extension definition for:
 * size_t heap_caps_get_free_size(uint32_t caps)
 */
 
STATIC mp_obj_t mp_heap_caps_get_free_size(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t caps = (uint32_t)mp_obj_get_int(mp_args[0]);
    size_t _res = ((size_t (*)(uint32_t))lv_func_ptr)(caps);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_get_free_size_obj, 1, mp_heap_caps_get_free_size, heap_caps_get_free_size);
    
/* Reusing heap_caps_get_free_size for heap_caps_get_minimum_free_size */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_get_minimum_free_size_obj, 1, mp_heap_caps_get_free_size, heap_caps_get_minimum_free_size);
    
/* Reusing heap_caps_get_free_size for heap_caps_get_largest_free_block */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_get_largest_free_block_obj, 1, mp_heap_caps_get_free_size, heap_caps_get_largest_free_block);
    

/*
 * espidf extension definition for:
 * void heap_caps_get_info(multi_heap_info_t *info, uint32_t caps)
 */
 
STATIC mp_obj_t mp_heap_caps_get_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    multi_heap_info_t *info = mp_write_ptr_multi_heap_info_t(mp_args[0]);
    uint32_t caps = (uint32_t)mp_obj_get_int(mp_args[1]);
    ((void (*)(multi_heap_info_t *, uint32_t))lv_func_ptr)(info, caps);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_get_info_obj, 2, mp_heap_caps_get_info, heap_caps_get_info);
    
/* Reusing esp_clk_slowclk_cal_set for heap_caps_print_heap_info */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_print_heap_info_obj, 1, mp_esp_clk_slowclk_cal_set, heap_caps_print_heap_info);
    

/*
 * espidf extension definition for:
 * bool heap_caps_check_integrity_all(bool print_errors)
 */
 
STATIC mp_obj_t mp_heap_caps_check_integrity_all(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    bool print_errors = mp_obj_is_true(mp_args[0]);
    bool _res = ((bool (*)(bool))lv_func_ptr)(print_errors);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_check_integrity_all_obj, 1, mp_heap_caps_check_integrity_all, heap_caps_check_integrity_all);
    

/*
 * espidf extension definition for:
 * bool heap_caps_check_integrity(uint32_t caps, bool print_errors)
 */
 
STATIC mp_obj_t mp_heap_caps_check_integrity(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t caps = (uint32_t)mp_obj_get_int(mp_args[0]);
    bool print_errors = mp_obj_is_true(mp_args[1]);
    bool _res = ((bool (*)(uint32_t, bool))lv_func_ptr)(caps, print_errors);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_check_integrity_obj, 2, mp_heap_caps_check_integrity, heap_caps_check_integrity);
    

/*
 * espidf extension definition for:
 * bool heap_caps_check_integrity_addr(intptr_t addr, bool print_errors)
 */
 
STATIC mp_obj_t mp_heap_caps_check_integrity_addr(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    intptr_t addr = (int)mp_obj_get_int(mp_args[0]);
    bool print_errors = mp_obj_is_true(mp_args[1]);
    bool _res = ((bool (*)(intptr_t, bool))lv_func_ptr)(addr, print_errors);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_check_integrity_addr_obj, 2, mp_heap_caps_check_integrity_addr, heap_caps_check_integrity_addr);
    

/*
 * espidf extension definition for:
 * void heap_caps_malloc_extmem_enable(size_t limit)
 */
 
STATIC mp_obj_t mp_heap_caps_malloc_extmem_enable(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    size_t limit = (size_t)mp_obj_get_int(mp_args[0]);
    ((void (*)(size_t))lv_func_ptr)(limit);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_malloc_extmem_enable_obj, 1, mp_heap_caps_malloc_extmem_enable, heap_caps_malloc_extmem_enable);
    

/*
 * Function NOT generated:
 * Cannot convert ellipsis param
 * void *heap_caps_malloc_prefer(size_t size, size_t num, ...)
 */
    

/*
 * Function NOT generated:
 * Cannot convert ellipsis param
 * void *heap_caps_realloc_prefer(void *ptr, size_t size, size_t num, ...)
 */
    

/*
 * Function NOT generated:
 * Cannot convert ellipsis param
 * void *heap_caps_calloc_prefer(size_t n, size_t size, size_t num, ...)
 */
    
/* Reusing esp_clk_slowclk_cal_set for heap_caps_dump */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_dump_obj, 1, mp_esp_clk_slowclk_cal_set, heap_caps_dump);
    
/* Reusing esp_intr_noniram_disable for heap_caps_dump_all */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_heap_caps_dump_all_obj, 0, mp_esp_intr_noniram_disable, heap_caps_dump_all);
    
/* Reusing funcptr_shutdown_handler_t for ets_run */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_run_obj, 0, mp_funcptr_shutdown_handler_t, ets_run);
    

/*
 * Function NOT generated:
 * Callback argument 'ets_idle_cb_t func' cannot be the first argument! We assume the first argument contains the user_data
 * ets_idle_cb_t func
 */
    

/*
 * espidf extension definition for:
 * void ets_set_idle_cb(ets_idle_cb_t func, void *arg)
 */
 
STATIC mp_obj_t mp_ets_set_idle_cb(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    ets_idle_cb_t func = mp_to_ptr(mp_args[0]);
    void *arg = mp_to_ptr(mp_args[1]);
    ((void (*)(ets_idle_cb_t, void *))lv_func_ptr)(func, arg);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_set_idle_cb_obj, 2, mp_ets_set_idle_cb, ets_set_idle_cb);
    

/*
 * Function NOT generated:
 * Callback argument 'ETSTask task' cannot be the first argument! We assume the first argument contains the user_data
 * ETSTask task
 */
    

/*
 * espidf extension definition for:
 * void ets_task(ETSTask task, uint8_t prio, ETSEvent *queue, uint8_t qlen)
 */
 
STATIC mp_obj_t mp_ets_task(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    ETSTask task = mp_to_ptr(mp_args[0]);
    uint8_t prio = (uint8_t)mp_obj_get_int(mp_args[1]);
    ETSEvent *queue = mp_to_ptr(mp_args[2]);
    uint8_t qlen = (uint8_t)mp_obj_get_int(mp_args[3]);
    ((void (*)(ETSTask, uint8_t, ETSEvent *, uint8_t))lv_func_ptr)(task, prio, queue, qlen);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_task_obj, 4, mp_ets_task, ets_task);
    

/*
 * espidf extension definition for:
 * ETS_STATUS ets_post(uint8_t prio, ETSSignal sig, ETSParam par)
 */
 
STATIC mp_obj_t mp_ets_post(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t prio = (uint8_t)mp_obj_get_int(mp_args[0]);
    ETSSignal sig = (uint32_t)mp_obj_get_int(mp_args[1]);
    ETSParam par = (uint32_t)mp_obj_get_int(mp_args[2]);
    ETS_STATUS _res = ((ETS_STATUS (*)(uint8_t, ETSSignal, ETSParam))lv_func_ptr)(prio, sig, par);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_post_obj, 3, mp_ets_post, ets_post);
    
/* Reusing esp_clk_slowclk_cal_set for ets_set_user_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_set_user_start_obj, 1, mp_esp_clk_slowclk_cal_set, ets_set_user_start);
    
/* Reusing esp_clk_slowclk_cal_set for ets_set_startup_callback */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_set_startup_callback_obj, 1, mp_esp_clk_slowclk_cal_set, ets_set_startup_callback);
    
/* Reusing esp_clk_slowclk_cal_set for ets_set_appcpu_boot_addr */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_set_appcpu_boot_addr_obj, 1, mp_esp_clk_slowclk_cal_set, ets_set_appcpu_boot_addr);
    

/*
 * espidf extension definition for:
 * ETS_STATUS ets_unpack_flash_code_legacy(uint32_t pos, uint32_t *entry_addr, bool jump, bool config)
 */
 
STATIC mp_obj_t mp_ets_unpack_flash_code_legacy(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t pos = (uint32_t)mp_obj_get_int(mp_args[0]);
    uint32_t *entry_addr = mp_to_ptr(mp_args[1]);
    bool jump = mp_obj_is_true(mp_args[2]);
    bool config = mp_obj_is_true(mp_args[3]);
    ETS_STATUS _res = ((ETS_STATUS (*)(uint32_t, uint32_t *, bool, bool))lv_func_ptr)(pos, entry_addr, jump, config);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_unpack_flash_code_legacy_obj, 4, mp_ets_unpack_flash_code_legacy, ets_unpack_flash_code_legacy);
    

/*
 * espidf extension definition for:
 * ETS_STATUS ets_unpack_flash_code(uint32_t pos, uint32_t *entry_addr, bool jump, bool sb_need_check, bool config)
 */
 
STATIC mp_obj_t mp_ets_unpack_flash_code(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint32_t pos = (uint32_t)mp_obj_get_int(mp_args[0]);
    uint32_t *entry_addr = mp_to_ptr(mp_args[1]);
    bool jump = mp_obj_is_true(mp_args[2]);
    bool sb_need_check = mp_obj_is_true(mp_args[3]);
    bool config = mp_obj_is_true(mp_args[4]);
    ETS_STATUS _res = ((ETS_STATUS (*)(uint32_t, uint32_t *, bool, bool, bool))lv_func_ptr)(pos, entry_addr, jump, sb_need_check, config);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_unpack_flash_code_obj, 5, mp_ets_unpack_flash_code, ets_unpack_flash_code);
    

/*
 * Function NOT generated:
 * Cannot convert ellipsis param
 * int ets_printf(const char *fmt, ...)
 */
    
/* Reusing funcptr_p for ets_write_char_uart */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_write_char_uart_obj, 1, mp_funcptr_p, ets_write_char_uart);
    

/*
 * Function NOT generated:
 * Callback argument 'void (*p)(char c)' cannot be the first argument! We assume the first argument contains the user_data
 * void (*p)(char c)
 */
    

/*
 * espidf extension definition for:
 * void ets_install_putc1(void (*p)(char c))
 */
 
STATIC mp_obj_t mp_ets_install_putc1(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void (*p)(char c) = mp_to_ptr(mp_args[0]);
    ((void (*)(void (*)(char)))lv_func_ptr)(p);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_install_putc1_obj, 1, mp_ets_install_putc1, ets_install_putc1);
    
/* Reusing ets_install_putc1 for ets_install_putc2 */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_install_putc2_obj, 1, mp_ets_install_putc1, ets_install_putc2);
    
/* Reusing funcptr_shutdown_handler_t for ets_install_uart_printf */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_install_uart_printf_obj, 0, mp_funcptr_shutdown_handler_t, ets_install_uart_printf);
    
/* Reusing funcptr_shutdown_handler_t for ets_timer_init */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_init_obj, 0, mp_funcptr_shutdown_handler_t, ets_timer_init);
    
/* Reusing funcptr_shutdown_handler_t for ets_timer_deinit */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_deinit_obj, 0, mp_funcptr_shutdown_handler_t, ets_timer_deinit);
    

/*
 * espidf extension definition for:
 * void ets_timer_arm(ETSTimer *timer, uint32_t tmout, bool repeat)
 */
 
STATIC mp_obj_t mp_ets_timer_arm(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    ETSTimer *timer = mp_write_ptr_ETSTimer(mp_args[0]);
    uint32_t tmout = (uint32_t)mp_obj_get_int(mp_args[1]);
    bool repeat = mp_obj_is_true(mp_args[2]);
    ((void (*)(ETSTimer *, uint32_t, bool))lv_func_ptr)(timer, tmout, repeat);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_arm_obj, 3, mp_ets_timer_arm, ets_timer_arm);
    
/* Reusing ets_timer_arm for ets_timer_arm_us */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_arm_us_obj, 3, mp_ets_timer_arm, ets_timer_arm_us);
    

/*
 * espidf extension definition for:
 * void ets_timer_disarm(ETSTimer *timer)
 */
 
STATIC mp_obj_t mp_ets_timer_disarm(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    ETSTimer *timer = mp_write_ptr_ETSTimer(mp_args[0]);
    ((void (*)(ETSTimer *))lv_func_ptr)(timer);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_disarm_obj, 1, mp_ets_timer_disarm, ets_timer_disarm);
    

/*
 * espidf extension definition for:
 * void ets_timer_setfn(ETSTimer *ptimer, ETSTimerFunc *pfunction, void *parg)
 */
 
STATIC mp_obj_t mp_ets_timer_setfn(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    ETSTimer *ptimer = mp_write_ptr_ETSTimer(mp_args[0]);
    ETSTimerFunc *pfunction = mp_to_ptr(mp_args[1]);
    void *parg = mp_to_ptr(mp_args[2]);
    ((void (*)(ETSTimer *, ETSTimerFunc *, void *))lv_func_ptr)(ptimer, pfunction, parg);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_setfn_obj, 3, mp_ets_timer_setfn, ets_timer_setfn);
    
/* Reusing ets_timer_disarm for ets_timer_done */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_timer_done_obj, 1, mp_ets_timer_disarm, ets_timer_done);
    
/* Reusing esp_clk_slowclk_cal_set for ets_delay_us */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_delay_us_obj, 1, mp_esp_clk_slowclk_cal_set, ets_delay_us);
    
/* Reusing esp_clk_slowclk_cal_set for ets_update_cpu_frequency */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_update_cpu_frequency_obj, 1, mp_esp_clk_slowclk_cal_set, ets_update_cpu_frequency);
    
/* Reusing esp_clk_slowclk_cal_set for ets_update_cpu_frequency_rom */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_update_cpu_frequency_rom_obj, 1, mp_esp_clk_slowclk_cal_set, ets_update_cpu_frequency_rom);
    
/* Reusing gpio_input_get for ets_get_cpu_frequency */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_get_cpu_frequency_obj, 0, mp_gpio_input_get, ets_get_cpu_frequency);
    
/* Reusing gpio_input_get for ets_get_xtal_scale */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_get_xtal_scale_obj, 0, mp_gpio_input_get, ets_get_xtal_scale);
    
/* Reusing gpio_input_get for ets_get_detected_xtal_freq */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_get_detected_xtal_freq_obj, 0, mp_gpio_input_get, ets_get_detected_xtal_freq);
    

/*
 * Function NOT generated:
 * Callback function 'ets_isr_t func' must receive a struct pointer with user_data member as its first argument!
 * ets_isr_t func
 */
    

/*
 * espidf extension definition for:
 * void ets_isr_attach(int i, ets_isr_t func, void *arg)
 */
 
STATIC mp_obj_t mp_ets_isr_attach(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int i = (int)mp_obj_get_int(mp_args[0]);
    ets_isr_t func = mp_to_ptr(mp_args[1]);
    void *arg = mp_to_ptr(mp_args[2]);
    ((void (*)(int, ets_isr_t, void *))lv_func_ptr)(i, func, arg);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_isr_attach_obj, 3, mp_ets_isr_attach, ets_isr_attach);
    
/* Reusing esp_clk_slowclk_cal_set for ets_isr_mask */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_isr_mask_obj, 1, mp_esp_clk_slowclk_cal_set, ets_isr_mask);
    
/* Reusing esp_clk_slowclk_cal_set for ets_isr_unmask */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_isr_unmask_obj, 1, mp_esp_clk_slowclk_cal_set, ets_isr_unmask);
    
/* Reusing funcptr_shutdown_handler_t for ets_intr_lock */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_intr_lock_obj, 0, mp_funcptr_shutdown_handler_t, ets_intr_lock);
    
/* Reusing funcptr_shutdown_handler_t for ets_intr_unlock */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_intr_unlock_obj, 0, mp_funcptr_shutdown_handler_t, ets_intr_unlock);
    
/* Reusing funcptr_shutdown_handler_t for ets_waiti0 */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ets_waiti0_obj, 0, mp_funcptr_shutdown_handler_t, ets_waiti0);
    

/*
 * espidf extension definition for:
 * void intr_matrix_set(int cpu_no, uint32_t model_num, uint32_t intr_num)
 */
 
STATIC mp_obj_t mp_intr_matrix_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    int cpu_no = (int)mp_obj_get_int(mp_args[0]);
    uint32_t model_num = (uint32_t)mp_obj_get_int(mp_args[1]);
    uint32_t intr_num = (uint32_t)mp_obj_get_int(mp_args[2]);
    ((void (*)(int, uint32_t, uint32_t))lv_func_ptr)(cpu_no, model_num, intr_num);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_intr_matrix_set_obj, 3, mp_intr_matrix_set, intr_matrix_set);
    

/*
 * espidf extension definition for:
 * void esp_log_level_set(const char *tag, esp_log_level_t level)
 */
 
STATIC mp_obj_t mp_esp_log_level_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *tag = (char*)convert_from_str(mp_args[0]);
    esp_log_level_t level = (int)mp_obj_get_int(mp_args[1]);
    ((void (*)(const char *, esp_log_level_t))lv_func_ptr)(tag, level);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_level_set_obj, 2, mp_esp_log_level_set, esp_log_level_set);
    

/*
 * Function NOT generated:
 * Callback argument 'vprintf_like_t func' cannot be the first argument! We assume the first argument contains the user_data
 * vprintf_like_t func
 */
    

/*
 * espidf extension definition for:
 * vprintf_like_t esp_log_set_vprintf(vprintf_like_t func)
 */
 
STATIC mp_obj_t mp_esp_log_set_vprintf(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    vprintf_like_t func = mp_to_ptr(mp_args[0]);
    vprintf_like_t _res = ((vprintf_like_t (*)(vprintf_like_t))lv_func_ptr)(func);
    return ptr_to_mp(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_set_vprintf_obj, 1, mp_esp_log_set_vprintf, esp_log_set_vprintf);
    
/* Reusing gpio_input_get for esp_log_timestamp */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_timestamp_obj, 0, mp_gpio_input_get, esp_log_timestamp);
    
/* Reusing gpio_input_get for esp_log_early_timestamp */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_early_timestamp_obj, 0, mp_gpio_input_get, esp_log_early_timestamp);
    

/*
 * Function NOT generated:
 * Cannot convert ellipsis param
 * void esp_log_write(esp_log_level_t level, const char *tag, const char *format, ...)
 */
    

/*
 * Function NOT generated:
 * Missing conversion to va_list
 * void esp_log_writev(esp_log_level_t level, const char *tag, const char *format, va_list args)
 */
    

/*
 * espidf extension definition for:
 * void esp_log_buffer_hex_internal(const char *tag, const void *buffer, uint16_t buff_len, esp_log_level_t level)
 */
 
STATIC mp_obj_t mp_esp_log_buffer_hex_internal(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *tag = (char*)convert_from_str(mp_args[0]);
    const void *buffer = mp_to_ptr(mp_args[1]);
    uint16_t buff_len = (uint16_t)mp_obj_get_int(mp_args[2]);
    esp_log_level_t level = (int)mp_obj_get_int(mp_args[3]);
    ((void (*)(const char *, const void *, uint16_t, esp_log_level_t))lv_func_ptr)(tag, buffer, buff_len, level);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_buffer_hex_internal_obj, 4, mp_esp_log_buffer_hex_internal, esp_log_buffer_hex_internal);
    
/* Reusing esp_log_buffer_hex_internal for esp_log_buffer_char_internal */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_buffer_char_internal_obj, 4, mp_esp_log_buffer_hex_internal, esp_log_buffer_char_internal);
    
/* Reusing esp_log_buffer_hex_internal for esp_log_buffer_hexdump_internal */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_log_buffer_hexdump_internal_obj, 4, mp_esp_log_buffer_hex_internal, esp_log_buffer_hexdump_internal);
    

/*
 * espidf extension definition for:
 * esp_err_t adc1_pad_get_io_num(adc1_channel_t channel, gpio_num_t *gpio_num)
 */
 
STATIC mp_obj_t mp_adc1_pad_get_io_num(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc1_channel_t channel = (int)mp_obj_get_int(mp_args[0]);
    gpio_num_t *gpio_num = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc1_channel_t, gpio_num_t *))lv_func_ptr)(channel, gpio_num);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc1_pad_get_io_num_obj, 2, mp_adc1_pad_get_io_num, adc1_pad_get_io_num);
    

/*
 * espidf extension definition for:
 * esp_err_t adc1_config_width(adc_bits_width_t width_bit)
 */
 
STATIC mp_obj_t mp_adc1_config_width(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc_bits_width_t width_bit = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(adc_bits_width_t))lv_func_ptr)(width_bit);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc1_config_width_obj, 1, mp_adc1_config_width, adc1_config_width);
    

/*
 * espidf extension definition for:
 * esp_err_t adc_set_data_width(adc_unit_t adc_unit, adc_bits_width_t width_bit)
 */
 
STATIC mp_obj_t mp_adc_set_data_width(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc_unit_t adc_unit = (int)mp_obj_get_int(mp_args[0]);
    adc_bits_width_t width_bit = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc_unit_t, adc_bits_width_t))lv_func_ptr)(adc_unit, width_bit);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_set_data_width_obj, 2, mp_adc_set_data_width, adc_set_data_width);
    

/*
 * espidf extension definition for:
 * esp_err_t adc1_config_channel_atten(adc1_channel_t channel, adc_atten_t atten)
 */
 
STATIC mp_obj_t mp_adc1_config_channel_atten(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc1_channel_t channel = (int)mp_obj_get_int(mp_args[0]);
    adc_atten_t atten = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc1_channel_t, adc_atten_t))lv_func_ptr)(channel, atten);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc1_config_channel_atten_obj, 2, mp_adc1_config_channel_atten, adc1_config_channel_atten);
    

/*
 * espidf extension definition for:
 * int adc1_get_raw(adc1_channel_t channel)
 */
 
STATIC mp_obj_t mp_adc1_get_raw(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc1_channel_t channel = (int)mp_obj_get_int(mp_args[0]);
    int _res = ((int (*)(adc1_channel_t))lv_func_ptr)(channel);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc1_get_raw_obj, 1, mp_adc1_get_raw, adc1_get_raw);
    
/* Reusing esp_intr_noniram_disable for adc_power_on */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_power_on_obj, 0, mp_esp_intr_noniram_disable, adc_power_on);
    
/* Reusing esp_intr_noniram_disable for adc_power_off */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_power_off_obj, 0, mp_esp_intr_noniram_disable, adc_power_off);
    

/*
 * espidf extension definition for:
 * esp_err_t adc_gpio_init(adc_unit_t adc_unit, adc_channel_t channel)
 */
 
STATIC mp_obj_t mp_adc_gpio_init(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc_unit_t adc_unit = (int)mp_obj_get_int(mp_args[0]);
    adc_channel_t channel = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc_unit_t, adc_channel_t))lv_func_ptr)(adc_unit, channel);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_gpio_init_obj, 2, mp_adc_gpio_init, adc_gpio_init);
    

/*
 * espidf extension definition for:
 * esp_err_t adc_set_data_inv(adc_unit_t adc_unit, bool inv_en)
 */
 
STATIC mp_obj_t mp_adc_set_data_inv(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc_unit_t adc_unit = (int)mp_obj_get_int(mp_args[0]);
    bool inv_en = mp_obj_is_true(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc_unit_t, bool))lv_func_ptr)(adc_unit, inv_en);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_set_data_inv_obj, 2, mp_adc_set_data_inv, adc_set_data_inv);
    

/*
 * espidf extension definition for:
 * esp_err_t adc_set_clk_div(uint8_t clk_div)
 */
 
STATIC mp_obj_t mp_adc_set_clk_div(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t clk_div = (uint8_t)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(uint8_t))lv_func_ptr)(clk_div);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_set_clk_div_obj, 1, mp_adc_set_clk_div, adc_set_clk_div);
    

/*
 * espidf extension definition for:
 * esp_err_t adc_set_i2s_data_source(adc_i2s_source_t src)
 */
 
STATIC mp_obj_t mp_adc_set_i2s_data_source(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc_i2s_source_t src = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(adc_i2s_source_t))lv_func_ptr)(src);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_set_i2s_data_source_obj, 1, mp_adc_set_i2s_data_source, adc_set_i2s_data_source);
    
/* Reusing adc_gpio_init for adc_i2s_mode_init */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc_i2s_mode_init_obj, 2, mp_adc_gpio_init, adc_i2s_mode_init);
    
/* Reusing esp_intr_noniram_disable for adc1_ulp_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc1_ulp_enable_obj, 0, mp_esp_intr_noniram_disable, adc1_ulp_enable);
    

/*
 * espidf extension definition for:
 * int hall_sensor_read()
 */
 
STATIC mp_obj_t mp_hall_sensor_read(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    int _res = ((int (*)())lv_func_ptr)();
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_hall_sensor_read_obj, 0, mp_hall_sensor_read, hall_sensor_read);
    

/*
 * espidf extension definition for:
 * esp_err_t adc2_pad_get_io_num(adc2_channel_t channel, gpio_num_t *gpio_num)
 */
 
STATIC mp_obj_t mp_adc2_pad_get_io_num(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc2_channel_t channel = (int)mp_obj_get_int(mp_args[0]);
    gpio_num_t *gpio_num = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc2_channel_t, gpio_num_t *))lv_func_ptr)(channel, gpio_num);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc2_pad_get_io_num_obj, 2, mp_adc2_pad_get_io_num, adc2_pad_get_io_num);
    

/*
 * espidf extension definition for:
 * esp_err_t adc2_config_channel_atten(adc2_channel_t channel, adc_atten_t atten)
 */
 
STATIC mp_obj_t mp_adc2_config_channel_atten(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc2_channel_t channel = (int)mp_obj_get_int(mp_args[0]);
    adc_atten_t atten = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc2_channel_t, adc_atten_t))lv_func_ptr)(channel, atten);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc2_config_channel_atten_obj, 2, mp_adc2_config_channel_atten, adc2_config_channel_atten);
    

/*
 * espidf extension definition for:
 * esp_err_t adc2_get_raw(adc2_channel_t channel, adc_bits_width_t width_bit, int *raw_out)
 */
 
STATIC mp_obj_t mp_adc2_get_raw(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc2_channel_t channel = (int)mp_obj_get_int(mp_args[0]);
    adc_bits_width_t width_bit = (int)mp_obj_get_int(mp_args[1]);
    int *raw_out = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(adc2_channel_t, adc_bits_width_t, int *))lv_func_ptr)(channel, width_bit, raw_out);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc2_get_raw_obj, 3, mp_adc2_get_raw, adc2_get_raw);
    
/* Reusing gpio_reset_pin for adc2_vref_to_gpio */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_adc2_vref_to_gpio_obj, 1, mp_gpio_reset_pin, adc2_vref_to_gpio);
    

/*
 * espidf extension definition for:
 * void periph_module_enable(periph_module_t periph)
 */
 
STATIC mp_obj_t mp_periph_module_enable(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    periph_module_t periph = (int)mp_obj_get_int(mp_args[0]);
    ((void (*)(periph_module_t))lv_func_ptr)(periph);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_periph_module_enable_obj, 1, mp_periph_module_enable, periph_module_enable);
    
/* Reusing periph_module_enable for periph_module_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_periph_module_disable_obj, 1, mp_periph_module_enable, periph_module_disable);
    
/* Reusing periph_module_enable for periph_module_reset */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_periph_module_reset_obj, 1, mp_periph_module_enable, periph_module_reset);
    

/*
 * Struct i2s_pin_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_i2s_pin_config_t_type();

STATIC inline i2s_pin_config_t* mp_write_ptr_i2s_pin_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_i2s_pin_config_t_type()));
    return (i2s_pin_config_t*)self->data;
}

#define mp_write_i2s_pin_config_t(struct_obj) *mp_write_ptr_i2s_pin_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_i2s_pin_config_t(i2s_pin_config_t *field)
{
    return lv_to_mp_struct(get_mp_i2s_pin_config_t_type(), (void*)field);
}

#define mp_read_i2s_pin_config_t(field) mp_read_ptr_i2s_pin_config_t(copy_buffer(&field, sizeof(i2s_pin_config_t)))
#define mp_read_byref_i2s_pin_config_t(field) mp_read_ptr_i2s_pin_config_t(&field)

STATIC void mp_i2s_pin_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    i2s_pin_config_t *data = (i2s_pin_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_bck_io_num: dest[0] = mp_obj_new_int(data->bck_io_num); break; // converting from int;
            case MP_QSTR_ws_io_num: dest[0] = mp_obj_new_int(data->ws_io_num); break; // converting from int;
            case MP_QSTR_data_out_num: dest[0] = mp_obj_new_int(data->data_out_num); break; // converting from int;
            case MP_QSTR_data_in_num: dest[0] = mp_obj_new_int(data->data_in_num); break; // converting from int;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_bck_io_num: data->bck_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_ws_io_num: data->ws_io_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_data_out_num: data->data_out_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_data_in_num: data->data_in_num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_i2s_pin_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct i2s_pin_config_t");
}

STATIC const mp_obj_dict_t mp_i2s_pin_config_t_locals_dict;

STATIC const mp_obj_type_t mp_i2s_pin_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_i2s_pin_config_t,
    .print = mp_i2s_pin_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_i2s_pin_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_i2s_pin_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_i2s_pin_config_t_type()
{
    return &mp_i2s_pin_config_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_set_pin(i2s_port_t i2s_num, const i2s_pin_config_t *pin)
 */
 
STATIC mp_obj_t mp_i2s_set_pin(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    const i2s_pin_config_t *pin = mp_write_ptr_i2s_pin_config_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, const i2s_pin_config_t *))lv_func_ptr)(i2s_num, pin);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_set_pin_obj, 2, mp_i2s_set_pin, i2s_set_pin);
    

STATIC const mp_rom_map_elem_t mp_i2s_pin_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(i2s_pin_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_i2s_pin_config_t_locals_dict, mp_i2s_pin_config_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t i2s_set_pdm_rx_down_sample(i2s_port_t i2s_num, i2s_pdm_dsr_t dsr)
 */
 
STATIC mp_obj_t mp_i2s_set_pdm_rx_down_sample(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    i2s_pdm_dsr_t dsr = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, i2s_pdm_dsr_t))lv_func_ptr)(i2s_num, dsr);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_set_pdm_rx_down_sample_obj, 2, mp_i2s_set_pdm_rx_down_sample, i2s_set_pdm_rx_down_sample);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_set_dac_mode(i2s_dac_mode_t dac_mode)
 */
 
STATIC mp_obj_t mp_i2s_set_dac_mode(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_dac_mode_t dac_mode = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(i2s_dac_mode_t))lv_func_ptr)(dac_mode);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_set_dac_mode_obj, 1, mp_i2s_set_dac_mode, i2s_set_dac_mode);
    

/*
 * Struct i2s_config_t
 */

STATIC inline const mp_obj_type_t *get_mp_i2s_config_t_type();

STATIC inline i2s_config_t* mp_write_ptr_i2s_config_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_i2s_config_t_type()));
    return (i2s_config_t*)self->data;
}

#define mp_write_i2s_config_t(struct_obj) *mp_write_ptr_i2s_config_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_i2s_config_t(i2s_config_t *field)
{
    return lv_to_mp_struct(get_mp_i2s_config_t_type(), (void*)field);
}

#define mp_read_i2s_config_t(field) mp_read_ptr_i2s_config_t(copy_buffer(&field, sizeof(i2s_config_t)))
#define mp_read_byref_i2s_config_t(field) mp_read_ptr_i2s_config_t(&field)

STATIC void mp_i2s_config_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    i2s_config_t *data = (i2s_config_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_mode: dest[0] = mp_obj_new_int(data->mode); break; // converting from i2s_mode_t;
            case MP_QSTR_sample_rate: dest[0] = mp_obj_new_int(data->sample_rate); break; // converting from int;
            case MP_QSTR_bits_per_sample: dest[0] = mp_obj_new_int(data->bits_per_sample); break; // converting from i2s_bits_per_sample_t;
            case MP_QSTR_channel_format: dest[0] = mp_obj_new_int(data->channel_format); break; // converting from i2s_channel_fmt_t;
            case MP_QSTR_communication_format: dest[0] = mp_obj_new_int(data->communication_format); break; // converting from i2s_comm_format_t;
            case MP_QSTR_intr_alloc_flags: dest[0] = mp_obj_new_int(data->intr_alloc_flags); break; // converting from int;
            case MP_QSTR_dma_buf_count: dest[0] = mp_obj_new_int(data->dma_buf_count); break; // converting from int;
            case MP_QSTR_dma_buf_len: dest[0] = mp_obj_new_int(data->dma_buf_len); break; // converting from int;
            case MP_QSTR_use_apll: dest[0] = convert_to_bool(data->use_apll); break; // converting from bool;
            case MP_QSTR_tx_desc_auto_clear: dest[0] = convert_to_bool(data->tx_desc_auto_clear); break; // converting from bool;
            case MP_QSTR_fixed_mclk: dest[0] = mp_obj_new_int(data->fixed_mclk); break; // converting from int;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_mode: data->mode = (int)mp_obj_get_int(dest[1]); break; // converting to i2s_mode_t;
                case MP_QSTR_sample_rate: data->sample_rate = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_bits_per_sample: data->bits_per_sample = (int)mp_obj_get_int(dest[1]); break; // converting to i2s_bits_per_sample_t;
                case MP_QSTR_channel_format: data->channel_format = (int)mp_obj_get_int(dest[1]); break; // converting to i2s_channel_fmt_t;
                case MP_QSTR_communication_format: data->communication_format = (int)mp_obj_get_int(dest[1]); break; // converting to i2s_comm_format_t;
                case MP_QSTR_intr_alloc_flags: data->intr_alloc_flags = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_dma_buf_count: data->dma_buf_count = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_dma_buf_len: data->dma_buf_len = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                case MP_QSTR_use_apll: data->use_apll = mp_obj_is_true(dest[1]); break; // converting to bool;
                case MP_QSTR_tx_desc_auto_clear: data->tx_desc_auto_clear = mp_obj_is_true(dest[1]); break; // converting to bool;
                case MP_QSTR_fixed_mclk: data->fixed_mclk = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_i2s_config_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct i2s_config_t");
}

STATIC const mp_obj_dict_t mp_i2s_config_t_locals_dict;

STATIC const mp_obj_type_t mp_i2s_config_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_i2s_config_t,
    .print = mp_i2s_config_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_i2s_config_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_i2s_config_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_i2s_config_t_type()
{
    return &mp_i2s_config_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_driver_install(i2s_port_t i2s_num, const i2s_config_t *i2s_config, int queue_size, void *i2s_queue)
 */
 
STATIC mp_obj_t mp_i2s_driver_install(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    const i2s_config_t *i2s_config = mp_write_ptr_i2s_config_t(mp_args[1]);
    int queue_size = (int)mp_obj_get_int(mp_args[2]);
    void *i2s_queue = mp_to_ptr(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, const i2s_config_t *, int, void *))lv_func_ptr)(i2s_num, i2s_config, queue_size, i2s_queue);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_driver_install_obj, 4, mp_i2s_driver_install, i2s_driver_install);
    

STATIC const mp_rom_map_elem_t mp_i2s_config_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(i2s_config_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_i2s_config_t_locals_dict, mp_i2s_config_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t i2s_driver_uninstall(i2s_port_t i2s_num)
 */
 
STATIC mp_obj_t mp_i2s_driver_uninstall(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t))lv_func_ptr)(i2s_num);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_driver_uninstall_obj, 1, mp_i2s_driver_uninstall, i2s_driver_uninstall);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_write(i2s_port_t i2s_num, const void *src, size_t size, size_t *bytes_written, TickType_t ticks_to_wait)
 */
 
STATIC mp_obj_t mp_i2s_write(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    const void *src = mp_to_ptr(mp_args[1]);
    size_t size = (size_t)mp_obj_get_int(mp_args[2]);
    size_t *bytes_written = mp_to_ptr(mp_args[3]);
    TickType_t ticks_to_wait = (uint32_t)mp_obj_get_int(mp_args[4]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, const void *, size_t, size_t *, TickType_t))lv_func_ptr)(i2s_num, src, size, bytes_written, ticks_to_wait);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_write_obj, 5, mp_i2s_write, i2s_write);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_write_expand(i2s_port_t i2s_num, const void *src, size_t size, size_t src_bits, size_t aim_bits, size_t *bytes_written, TickType_t ticks_to_wait)
 */
 
STATIC mp_obj_t mp_i2s_write_expand(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    const void *src = mp_to_ptr(mp_args[1]);
    size_t size = (size_t)mp_obj_get_int(mp_args[2]);
    size_t src_bits = (size_t)mp_obj_get_int(mp_args[3]);
    size_t aim_bits = (size_t)mp_obj_get_int(mp_args[4]);
    size_t *bytes_written = mp_to_ptr(mp_args[5]);
    TickType_t ticks_to_wait = (uint32_t)mp_obj_get_int(mp_args[6]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, const void *, size_t, size_t, size_t, size_t *, TickType_t))lv_func_ptr)(i2s_num, src, size, src_bits, aim_bits, bytes_written, ticks_to_wait);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_write_expand_obj, 7, mp_i2s_write_expand, i2s_write_expand);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_read(i2s_port_t i2s_num, void *dest, size_t size, size_t *bytes_read, TickType_t ticks_to_wait)
 */
 
STATIC mp_obj_t mp_i2s_read(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    void *dest = mp_to_ptr(mp_args[1]);
    size_t size = (size_t)mp_obj_get_int(mp_args[2]);
    size_t *bytes_read = mp_to_ptr(mp_args[3]);
    TickType_t ticks_to_wait = (uint32_t)mp_obj_get_int(mp_args[4]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, void *, size_t, size_t *, TickType_t))lv_func_ptr)(i2s_num, dest, size, bytes_read, ticks_to_wait);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_read_obj, 5, mp_i2s_read, i2s_read);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_set_sample_rates(i2s_port_t i2s_num, uint32_t rate)
 */
 
STATIC mp_obj_t mp_i2s_set_sample_rates(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    uint32_t rate = (uint32_t)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, uint32_t))lv_func_ptr)(i2s_num, rate);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_set_sample_rates_obj, 2, mp_i2s_set_sample_rates, i2s_set_sample_rates);
    
/* Reusing i2s_driver_uninstall for i2s_stop */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_stop_obj, 1, mp_i2s_driver_uninstall, i2s_stop);
    
/* Reusing i2s_driver_uninstall for i2s_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_start_obj, 1, mp_i2s_driver_uninstall, i2s_start);
    
/* Reusing i2s_driver_uninstall for i2s_zero_dma_buffer */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_zero_dma_buffer_obj, 1, mp_i2s_driver_uninstall, i2s_zero_dma_buffer);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_set_clk(i2s_port_t i2s_num, uint32_t rate, i2s_bits_per_sample_t bits, i2s_channel_t ch)
 */
 
STATIC mp_obj_t mp_i2s_set_clk(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    uint32_t rate = (uint32_t)mp_obj_get_int(mp_args[1]);
    i2s_bits_per_sample_t bits = (int)mp_obj_get_int(mp_args[2]);
    i2s_channel_t ch = (int)mp_obj_get_int(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(i2s_port_t, uint32_t, i2s_bits_per_sample_t, i2s_channel_t))lv_func_ptr)(i2s_num, rate, bits, ch);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_set_clk_obj, 4, mp_i2s_set_clk, i2s_set_clk);
    

/*
 * espidf extension definition for:
 * float i2s_get_clk(i2s_port_t i2s_num)
 */
 
STATIC mp_obj_t mp_i2s_get_clk(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    i2s_port_t i2s_num = (int)mp_obj_get_int(mp_args[0]);
    float _res = ((float (*)(i2s_port_t))lv_func_ptr)(i2s_num);
    return mp_obj_new_float(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_get_clk_obj, 1, mp_i2s_get_clk, i2s_get_clk);
    

/*
 * espidf extension definition for:
 * esp_err_t i2s_set_adc_mode(adc_unit_t adc_unit, adc1_channel_t adc_channel)
 */
 
STATIC mp_obj_t mp_i2s_set_adc_mode(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    adc_unit_t adc_unit = (int)mp_obj_get_int(mp_args[0]);
    adc1_channel_t adc_channel = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(adc_unit_t, adc1_channel_t))lv_func_ptr)(adc_unit, adc_channel);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_set_adc_mode_obj, 2, mp_i2s_set_adc_mode, i2s_set_adc_mode);
    
/* Reusing i2s_driver_uninstall for i2s_adc_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_adc_enable_obj, 1, mp_i2s_driver_uninstall, i2s_adc_enable);
    
/* Reusing i2s_driver_uninstall for i2s_adc_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_i2s_adc_disable_obj, 1, mp_i2s_driver_uninstall, i2s_adc_disable);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_get_counter_value(pcnt_unit_t pcnt_unit, int16_t *count)
 */
 
STATIC mp_obj_t mp_pcnt_get_counter_value(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t pcnt_unit = (int)mp_obj_get_int(mp_args[0]);
    int16_t *count = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, int16_t *))lv_func_ptr)(pcnt_unit, count);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_get_counter_value_obj, 2, mp_pcnt_get_counter_value, pcnt_get_counter_value);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_counter_pause(pcnt_unit_t pcnt_unit)
 */
 
STATIC mp_obj_t mp_pcnt_counter_pause(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t pcnt_unit = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t))lv_func_ptr)(pcnt_unit);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_counter_pause_obj, 1, mp_pcnt_counter_pause, pcnt_counter_pause);
    
/* Reusing pcnt_counter_pause for pcnt_counter_resume */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_counter_resume_obj, 1, mp_pcnt_counter_pause, pcnt_counter_resume);
    
/* Reusing pcnt_counter_pause for pcnt_counter_clear */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_counter_clear_obj, 1, mp_pcnt_counter_pause, pcnt_counter_clear);
    
/* Reusing pcnt_counter_pause for pcnt_intr_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_intr_enable_obj, 1, mp_pcnt_counter_pause, pcnt_intr_enable);
    
/* Reusing pcnt_counter_pause for pcnt_intr_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_intr_disable_obj, 1, mp_pcnt_counter_pause, pcnt_intr_disable);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_event_enable(pcnt_unit_t unit, pcnt_evt_type_t evt_type)
 */
 
STATIC mp_obj_t mp_pcnt_event_enable(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    pcnt_evt_type_t evt_type = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, pcnt_evt_type_t))lv_func_ptr)(unit, evt_type);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_event_enable_obj, 2, mp_pcnt_event_enable, pcnt_event_enable);
    
/* Reusing pcnt_event_enable for pcnt_event_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_event_disable_obj, 2, mp_pcnt_event_enable, pcnt_event_disable);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_set_event_value(pcnt_unit_t unit, pcnt_evt_type_t evt_type, int16_t value)
 */
 
STATIC mp_obj_t mp_pcnt_set_event_value(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    pcnt_evt_type_t evt_type = (int)mp_obj_get_int(mp_args[1]);
    int16_t value = (int16_t)mp_obj_get_int(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, pcnt_evt_type_t, int16_t))lv_func_ptr)(unit, evt_type, value);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_set_event_value_obj, 3, mp_pcnt_set_event_value, pcnt_set_event_value);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_get_event_value(pcnt_unit_t unit, pcnt_evt_type_t evt_type, int16_t *value)
 */
 
STATIC mp_obj_t mp_pcnt_get_event_value(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    pcnt_evt_type_t evt_type = (int)mp_obj_get_int(mp_args[1]);
    int16_t *value = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, pcnt_evt_type_t, int16_t *))lv_func_ptr)(unit, evt_type, value);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_get_event_value_obj, 3, mp_pcnt_get_event_value, pcnt_get_event_value);
    

/*
 * Function NOT generated:
 * Callback argument 'void (*fn)(void *)' cannot be the first argument! We assume the first argument contains the user_data
 * void (*fn)(void *)
 */
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_isr_register(void (*fn)(void *), void *arg, int intr_alloc_flags, pcnt_isr_handle_t *handle)
 */
 
STATIC mp_obj_t mp_pcnt_isr_register(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void (*fn)(void *) = mp_to_ptr(mp_args[0]);
    void *arg = mp_to_ptr(mp_args[1]);
    int intr_alloc_flags = (int)mp_obj_get_int(mp_args[2]);
    pcnt_isr_handle_t *handle = mp_to_ptr(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(void (*)(void *), void *, int, pcnt_isr_handle_t *))lv_func_ptr)(fn, arg, intr_alloc_flags, handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_isr_register_obj, 4, mp_pcnt_isr_register, pcnt_isr_register);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_set_pin(pcnt_unit_t unit, pcnt_channel_t channel, int pulse_io, int ctrl_io)
 */
 
STATIC mp_obj_t mp_pcnt_set_pin(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    pcnt_channel_t channel = (int)mp_obj_get_int(mp_args[1]);
    int pulse_io = (int)mp_obj_get_int(mp_args[2]);
    int ctrl_io = (int)mp_obj_get_int(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, pcnt_channel_t, int, int))lv_func_ptr)(unit, channel, pulse_io, ctrl_io);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_set_pin_obj, 4, mp_pcnt_set_pin, pcnt_set_pin);
    
/* Reusing pcnt_counter_pause for pcnt_filter_enable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_filter_enable_obj, 1, mp_pcnt_counter_pause, pcnt_filter_enable);
    
/* Reusing pcnt_counter_pause for pcnt_filter_disable */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_filter_disable_obj, 1, mp_pcnt_counter_pause, pcnt_filter_disable);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_set_filter_value(pcnt_unit_t unit, uint16_t filter_val)
 */
 
STATIC mp_obj_t mp_pcnt_set_filter_value(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    uint16_t filter_val = (uint16_t)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, uint16_t))lv_func_ptr)(unit, filter_val);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_set_filter_value_obj, 2, mp_pcnt_set_filter_value, pcnt_set_filter_value);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_get_filter_value(pcnt_unit_t unit, uint16_t *filter_val)
 */
 
STATIC mp_obj_t mp_pcnt_get_filter_value(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    uint16_t *filter_val = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, uint16_t *))lv_func_ptr)(unit, filter_val);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_get_filter_value_obj, 2, mp_pcnt_get_filter_value, pcnt_get_filter_value);
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_set_mode(pcnt_unit_t unit, pcnt_channel_t channel, pcnt_count_mode_t pos_mode, pcnt_count_mode_t neg_mode, pcnt_ctrl_mode_t hctrl_mode, pcnt_ctrl_mode_t lctrl_mode)
 */
 
STATIC mp_obj_t mp_pcnt_set_mode(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    pcnt_channel_t channel = (int)mp_obj_get_int(mp_args[1]);
    pcnt_count_mode_t pos_mode = (int)mp_obj_get_int(mp_args[2]);
    pcnt_count_mode_t neg_mode = (int)mp_obj_get_int(mp_args[3]);
    pcnt_ctrl_mode_t hctrl_mode = (int)mp_obj_get_int(mp_args[4]);
    pcnt_ctrl_mode_t lctrl_mode = (int)mp_obj_get_int(mp_args[5]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, pcnt_channel_t, pcnt_count_mode_t, pcnt_count_mode_t, pcnt_ctrl_mode_t, pcnt_ctrl_mode_t))lv_func_ptr)(unit, channel, pos_mode, neg_mode, hctrl_mode, lctrl_mode);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_set_mode_obj, 6, mp_pcnt_set_mode, pcnt_set_mode);
    

/*
 * Function NOT generated:
 * Callback function 'void (*isr_handler)(void *)' must receive a struct pointer with user_data member as its first argument!
 * void (*isr_handler)(void *)
 */
    

/*
 * espidf extension definition for:
 * esp_err_t pcnt_isr_handler_add(pcnt_unit_t unit, void (*isr_handler)(void *), void *args)
 */
 
STATIC mp_obj_t mp_pcnt_isr_handler_add(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    pcnt_unit_t unit = (int)mp_obj_get_int(mp_args[0]);
    void (*isr_handler)(void *) = mp_to_ptr(mp_args[1]);
    void *args = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(pcnt_unit_t, void (*)(void *), void *))lv_func_ptr)(unit, isr_handler, args);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_isr_handler_add_obj, 3, mp_pcnt_isr_handler_add, pcnt_isr_handler_add);
    
/* Reusing gpio_install_isr_service for pcnt_isr_service_install */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_isr_service_install_obj, 1, mp_gpio_install_isr_service, pcnt_isr_service_install);
    
/* Reusing funcptr_shutdown_handler_t for pcnt_isr_service_uninstall */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_isr_service_uninstall_obj, 0, mp_funcptr_shutdown_handler_t, pcnt_isr_service_uninstall);
    
/* Reusing pcnt_counter_pause for pcnt_isr_handler_remove */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_pcnt_isr_handler_remove_obj, 1, mp_pcnt_counter_pause, pcnt_isr_handler_remove);
    
/* Reusing esp_clk_cpu_freq for xt_clock_freq */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_xt_clock_freq_obj, 0, mp_esp_clk_cpu_freq, xt_clock_freq);
    
/* Reusing funcptr_fn for vPortCleanUpTCB */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_vPortCleanUpTCB_obj, 1, mp_funcptr_fn, vPortCleanUpTCB);
    

/*
 * Function NOT generated:
 * Callback argument 'shutdown_handler_t handle' cannot be the first argument! We assume the first argument contains the user_data
 * shutdown_handler_t handle
 */
    

/*
 * espidf extension definition for:
 * esp_err_t esp_register_shutdown_handler(shutdown_handler_t handle)
 */
 
STATIC mp_obj_t mp_esp_register_shutdown_handler(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    shutdown_handler_t handle = mp_to_ptr(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(shutdown_handler_t))lv_func_ptr)(handle);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_register_shutdown_handler_obj, 1, mp_esp_register_shutdown_handler, esp_register_shutdown_handler);
    
/* Reusing esp_register_shutdown_handler for esp_unregister_shutdown_handler */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_unregister_shutdown_handler_obj, 1, mp_esp_register_shutdown_handler, esp_unregister_shutdown_handler);
    
/* Reusing funcptr_shutdown_handler_t for esp_restart */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_restart_obj, 0, mp_funcptr_shutdown_handler_t, esp_restart);
    

/*
 * espidf extension definition for:
 * esp_reset_reason_t esp_reset_reason(void)
 */
 
STATIC mp_obj_t mp_esp_reset_reason(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    esp_reset_reason_t _res = ((esp_reset_reason_t (*)(void))lv_func_ptr)();
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_reset_reason_obj, 0, mp_esp_reset_reason, esp_reset_reason);
    
/* Reusing gpio_input_get for esp_get_free_heap_size */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_get_free_heap_size_obj, 0, mp_gpio_input_get, esp_get_free_heap_size);
    
/* Reusing gpio_input_get for esp_get_minimum_free_heap_size */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_get_minimum_free_heap_size_obj, 0, mp_gpio_input_get, esp_get_minimum_free_heap_size);
    
/* Reusing gpio_input_get for esp_random */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_random_obj, 0, mp_gpio_input_get, esp_random);
    

/*
 * espidf extension definition for:
 * void esp_fill_random(void *buf, size_t len)
 */
 
STATIC mp_obj_t mp_esp_fill_random(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *buf = mp_to_ptr(mp_args[0]);
    size_t len = (size_t)mp_obj_get_int(mp_args[1]);
    ((void (*)(void *, size_t))lv_func_ptr)(buf, len);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_fill_random_obj, 2, mp_esp_fill_random, esp_fill_random);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_base_mac_addr_set(uint8_t *mac)
 */
 
STATIC mp_obj_t mp_esp_base_mac_addr_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t *mac = mp_to_ptr(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(uint8_t *))lv_func_ptr)(mac);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_base_mac_addr_set_obj, 1, mp_esp_base_mac_addr_set, esp_base_mac_addr_set);
    
/* Reusing esp_base_mac_addr_set for esp_base_mac_addr_get */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_base_mac_addr_get_obj, 1, mp_esp_base_mac_addr_set, esp_base_mac_addr_get);
    
/* Reusing esp_base_mac_addr_set for esp_efuse_mac_get_custom */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_efuse_mac_get_custom_obj, 1, mp_esp_base_mac_addr_set, esp_efuse_mac_get_custom);
    
/* Reusing esp_base_mac_addr_set for esp_efuse_mac_get_default */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_efuse_mac_get_default_obj, 1, mp_esp_base_mac_addr_set, esp_efuse_mac_get_default);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_read_mac(uint8_t *mac, esp_mac_type_t type)
 */
 
STATIC mp_obj_t mp_esp_read_mac(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t *mac = mp_to_ptr(mp_args[0]);
    esp_mac_type_t type = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(uint8_t *, esp_mac_type_t))lv_func_ptr)(mac, type);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_read_mac_obj, 2, mp_esp_read_mac, esp_read_mac);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_derive_local_mac(uint8_t *local_mac, const uint8_t *universal_mac)
 */
 
STATIC mp_obj_t mp_esp_derive_local_mac(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t *local_mac = mp_to_ptr(mp_args[0]);
    const uint8_t *universal_mac = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(uint8_t *, const uint8_t *))lv_func_ptr)(local_mac, universal_mac);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_derive_local_mac_obj, 2, mp_esp_derive_local_mac, esp_derive_local_mac);
    

/*
 * espidf extension definition for:
 * bool dhcp_ip_addr_restore(void *netif)
 */
 
STATIC mp_obj_t mp_dhcp_ip_addr_restore(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *netif = mp_to_ptr(mp_args[0]);
    bool _res = ((bool (*)(void *))lv_func_ptr)(netif);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcp_ip_addr_restore_obj, 1, mp_dhcp_ip_addr_restore, dhcp_ip_addr_restore);
    
/* Reusing funcptr_fn for dhcp_ip_addr_store */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcp_ip_addr_store_obj, 1, mp_funcptr_fn, dhcp_ip_addr_store);
    
/* Reusing funcptr_fn for dhcp_ip_addr_erase */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcp_ip_addr_erase_obj, 1, mp_funcptr_fn, dhcp_ip_addr_erase);
    

/*
 * espidf extension definition for:
 * u16_t lwip_htons(u16_t x)
 */
 
STATIC mp_obj_t mp_lwip_htons(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u16_t x = (uint16_t)mp_obj_get_int(mp_args[0]);
    u16_t _res = ((u16_t (*)(u16_t))lv_func_ptr)(x);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_lwip_htons_obj, 1, mp_lwip_htons, lwip_htons);
    

/*
 * espidf extension definition for:
 * u32_t lwip_htonl(u32_t x)
 */
 
STATIC mp_obj_t mp_lwip_htonl(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u32_t x = (uint32_t)mp_obj_get_int(mp_args[0]);
    u32_t _res = ((u32_t (*)(u32_t))lv_func_ptr)(x);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_lwip_htonl_obj, 1, mp_lwip_htonl, lwip_htonl);
    

/*
 * espidf extension definition for:
 * void lwip_itoa(char *result, size_t bufsize, int number)
 */
 
STATIC mp_obj_t mp_lwip_itoa(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    char *result = (char*)convert_from_str(mp_args[0]);
    size_t bufsize = (size_t)mp_obj_get_int(mp_args[1]);
    int number = (int)mp_obj_get_int(mp_args[2]);
    ((void (*)(char *, size_t, int))lv_func_ptr)(result, bufsize, number);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_lwip_itoa_obj, 3, mp_lwip_itoa, lwip_itoa);
    

/*
 * espidf extension definition for:
 * int lwip_strnicmp(const char *str1, const char *str2, size_t len)
 */
 
STATIC mp_obj_t mp_lwip_strnicmp(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *str1 = (char*)convert_from_str(mp_args[0]);
    const char *str2 = (char*)convert_from_str(mp_args[1]);
    size_t len = (size_t)mp_obj_get_int(mp_args[2]);
    int _res = ((int (*)(const char *, const char *, size_t))lv_func_ptr)(str1, str2, len);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_lwip_strnicmp_obj, 3, mp_lwip_strnicmp, lwip_strnicmp);
    

/*
 * espidf extension definition for:
 * int lwip_stricmp(const char *str1, const char *str2)
 */
 
STATIC mp_obj_t mp_lwip_stricmp(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *str1 = (char*)convert_from_str(mp_args[0]);
    const char *str2 = (char*)convert_from_str(mp_args[1]);
    int _res = ((int (*)(const char *, const char *))lv_func_ptr)(str1, str2);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_lwip_stricmp_obj, 2, mp_lwip_stricmp, lwip_stricmp);
    

/*
 * espidf extension definition for:
 * char *lwip_strnstr(const char *buffer, const char *token, size_t n)
 */
 
STATIC mp_obj_t mp_lwip_strnstr(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *buffer = (char*)convert_from_str(mp_args[0]);
    const char *token = (char*)convert_from_str(mp_args[1]);
    size_t n = (size_t)mp_obj_get_int(mp_args[2]);
    char * _res = ((char *(*)(const char *, const char *, size_t))lv_func_ptr)(buffer, token, n);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_lwip_strnstr_obj, 3, mp_lwip_strnstr, lwip_strnstr);
    

/*
 * espidf extension definition for:
 * u8_t ip4_addr_isbroadcast_u32(u32_t addr, const struct netif *netif)
 */
 
STATIC mp_obj_t mp_ip4_addr_isbroadcast_u32(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u32_t addr = (uint32_t)mp_obj_get_int(mp_args[0]);
    const struct netif *netif = mp_to_ptr(mp_args[1]);
    u8_t _res = ((u8_t (*)(u32_t, const struct netif *))lv_func_ptr)(addr, netif);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip4_addr_isbroadcast_u32_obj, 2, mp_ip4_addr_isbroadcast_u32, ip4_addr_isbroadcast_u32);
    

/*
 * espidf extension definition for:
 * u8_t ip4_addr_netmask_valid(u32_t netmask)
 */
 
STATIC mp_obj_t mp_ip4_addr_netmask_valid(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u32_t netmask = (uint32_t)mp_obj_get_int(mp_args[0]);
    u8_t _res = ((u8_t (*)(u32_t))lv_func_ptr)(netmask);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip4_addr_netmask_valid_obj, 1, mp_ip4_addr_netmask_valid, ip4_addr_netmask_valid);
    

/*
 * espidf extension definition for:
 * u32_t ipaddr_addr(const char *cp)
 */
 
STATIC mp_obj_t mp_ipaddr_addr(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *cp = (char*)convert_from_str(mp_args[0]);
    u32_t _res = ((u32_t (*)(const char *))lv_func_ptr)(cp);
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ipaddr_addr_obj, 1, mp_ipaddr_addr, ipaddr_addr);
    

/*
 * espidf extension definition for:
 * int ip4addr_aton(const char *cp, ip4_addr_t *addr)
 */
 
STATIC mp_obj_t mp_ip4addr_aton(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *cp = (char*)convert_from_str(mp_args[0]);
    ip4_addr_t *addr = mp_write_ptr_ip4_addr_t(mp_args[1]);
    int _res = ((int (*)(const char *, ip4_addr_t *))lv_func_ptr)(cp, addr);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip4addr_aton_obj, 2, mp_ip4addr_aton, ip4addr_aton);
    

/*
 * espidf extension definition for:
 * char *ip4addr_ntoa(const ip4_addr_t *addr)
 */
 
STATIC mp_obj_t mp_ip4addr_ntoa(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip4_addr_t *addr = mp_write_ptr_ip4_addr_t(mp_args[0]);
    char * _res = ((char *(*)(const ip4_addr_t *))lv_func_ptr)(addr);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip4addr_ntoa_obj, 1, mp_ip4addr_ntoa, ip4addr_ntoa);
    

/*
 * espidf extension definition for:
 * char *ip4addr_ntoa_r(const ip4_addr_t *addr, char *buf, int buflen)
 */
 
STATIC mp_obj_t mp_ip4addr_ntoa_r(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip4_addr_t *addr = mp_write_ptr_ip4_addr_t(mp_args[0]);
    char *buf = (char*)convert_from_str(mp_args[1]);
    int buflen = (int)mp_obj_get_int(mp_args[2]);
    char * _res = ((char *(*)(const ip4_addr_t *, char *, int))lv_func_ptr)(addr, buf, buflen);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip4addr_ntoa_r_obj, 3, mp_ip4addr_ntoa_r, ip4addr_ntoa_r);
    

/*
 * espidf extension definition for:
 * int ip6addr_aton(const char *cp, ip6_addr_t *addr)
 */
 
STATIC mp_obj_t mp_ip6addr_aton(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *cp = (char*)convert_from_str(mp_args[0]);
    ip6_addr_t *addr = mp_write_ptr_ip6_addr_t(mp_args[1]);
    int _res = ((int (*)(const char *, ip6_addr_t *))lv_func_ptr)(cp, addr);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip6addr_aton_obj, 2, mp_ip6addr_aton, ip6addr_aton);
    

/*
 * espidf extension definition for:
 * char *ip6addr_ntoa(const ip6_addr_t *addr)
 */
 
STATIC mp_obj_t mp_ip6addr_ntoa(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip6_addr_t *addr = mp_write_ptr_ip6_addr_t(mp_args[0]);
    char * _res = ((char *(*)(const ip6_addr_t *))lv_func_ptr)(addr);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip6addr_ntoa_obj, 1, mp_ip6addr_ntoa, ip6addr_ntoa);
    

/*
 * espidf extension definition for:
 * char *ip6addr_ntoa_r(const ip6_addr_t *addr, char *buf, int buflen)
 */
 
STATIC mp_obj_t mp_ip6addr_ntoa_r(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip6_addr_t *addr = mp_write_ptr_ip6_addr_t(mp_args[0]);
    char *buf = (char*)convert_from_str(mp_args[1]);
    int buflen = (int)mp_obj_get_int(mp_args[2]);
    char * _res = ((char *(*)(const ip6_addr_t *, char *, int))lv_func_ptr)(addr, buf, buflen);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ip6addr_ntoa_r_obj, 3, mp_ip6addr_ntoa_r, ip6addr_ntoa_r);
    

/*
 * espidf extension definition for:
 * int ipaddr_aton(const char *cp, ip_addr_t *addr)
 */
 
STATIC mp_obj_t mp_ipaddr_aton(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *cp = (char*)convert_from_str(mp_args[0]);
    ip_addr_t *addr = mp_write_ptr_ip_addr_t(mp_args[1]);
    int _res = ((int (*)(const char *, ip_addr_t *))lv_func_ptr)(cp, addr);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ipaddr_aton_obj, 2, mp_ipaddr_aton, ipaddr_aton);
    

/*
 * espidf extension definition for:
 * void dhcps_start(struct netif *netif, ip4_addr_t ip)
 */
 
STATIC mp_obj_t mp_dhcps_start(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct netif *netif = mp_to_ptr(mp_args[0]);
    ip4_addr_t ip = mp_write_ip4_addr_t(mp_args[1]);
    ((void (*)(struct netif *, ip4_addr_t))lv_func_ptr)(netif, ip);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_start_obj, 2, mp_dhcps_start, dhcps_start);
    

/*
 * espidf extension definition for:
 * void dhcps_stop(struct netif *netif)
 */
 
STATIC mp_obj_t mp_dhcps_stop(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct netif *netif = mp_to_ptr(mp_args[0]);
    ((void (*)(struct netif *))lv_func_ptr)(netif);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_stop_obj, 1, mp_dhcps_stop, dhcps_stop);
    

/*
 * espidf extension definition for:
 * void *dhcps_option_info(u8_t op_id, u32_t opt_len)
 */
 
STATIC mp_obj_t mp_dhcps_option_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u8_t op_id = (uint8_t)mp_obj_get_int(mp_args[0]);
    u32_t opt_len = (uint32_t)mp_obj_get_int(mp_args[1]);
    void * _res = ((void *(*)(u8_t, u32_t))lv_func_ptr)(op_id, opt_len);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_option_info_obj, 2, mp_dhcps_option_info, dhcps_option_info);
    

/*
 * espidf extension definition for:
 * void dhcps_set_option_info(u8_t op_id, void *opt_info, u32_t opt_len)
 */
 
STATIC mp_obj_t mp_dhcps_set_option_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u8_t op_id = (uint8_t)mp_obj_get_int(mp_args[0]);
    void *opt_info = mp_to_ptr(mp_args[1]);
    u32_t opt_len = (uint32_t)mp_obj_get_int(mp_args[2]);
    ((void (*)(u8_t, void *, u32_t))lv_func_ptr)(op_id, opt_info, opt_len);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_set_option_info_obj, 3, mp_dhcps_set_option_info, dhcps_set_option_info);
    

/*
 * espidf extension definition for:
 * bool dhcp_search_ip_on_mac(u8_t *mac, ip4_addr_t *ip)
 */
 
STATIC mp_obj_t mp_dhcp_search_ip_on_mac(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    u8_t *mac = mp_to_ptr(mp_args[0]);
    ip4_addr_t *ip = mp_write_ptr_ip4_addr_t(mp_args[1]);
    bool _res = ((bool (*)(u8_t *, ip4_addr_t *))lv_func_ptr)(mac, ip);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcp_search_ip_on_mac_obj, 2, mp_dhcp_search_ip_on_mac, dhcp_search_ip_on_mac);
    

/*
 * espidf extension definition for:
 * void dhcps_dns_setserver(const ip_addr_t *dnsserver)
 */
 
STATIC mp_obj_t mp_dhcps_dns_setserver(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const ip_addr_t *dnsserver = mp_write_ptr_ip_addr_t(mp_args[0]);
    ((void (*)(const ip_addr_t *))lv_func_ptr)(dnsserver);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_dns_setserver_obj, 1, mp_dhcps_dns_setserver, dhcps_dns_setserver);
    

/*
 * espidf extension definition for:
 * ip4_addr_t dhcps_dns_getserver()
 */
 
STATIC mp_obj_t mp_dhcps_dns_getserver(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    ip4_addr_t _res = ((ip4_addr_t (*)())lv_func_ptr)();
    return mp_read_ip4_addr_t(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_dns_getserver_obj, 0, mp_dhcps_dns_getserver, dhcps_dns_getserver);
    

/*
 * Function NOT generated:
 * Callback argument 'dhcps_cb_t cb' cannot be the first argument! We assume the first argument contains the user_data
 * dhcps_cb_t cb
 */
    

/*
 * espidf extension definition for:
 * void dhcps_set_new_lease_cb(dhcps_cb_t cb)
 */
 
STATIC mp_obj_t mp_dhcps_set_new_lease_cb(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    dhcps_cb_t cb = mp_to_ptr(mp_args[0]);
    ((void (*)(dhcps_cb_t))lv_func_ptr)(cb);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_dhcps_set_new_lease_cb_obj, 1, mp_dhcps_set_new_lease_cb, dhcps_set_new_lease_cb);
    
/* Reusing funcptr_shutdown_handler_t for tcpip_adapter_init */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_init_obj, 0, mp_funcptr_shutdown_handler_t, tcpip_adapter_init);
    

/*
 * Struct tcpip_adapter_ip_info_t
 */

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_ip_info_t_type();

STATIC inline tcpip_adapter_ip_info_t* mp_write_ptr_tcpip_adapter_ip_info_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_tcpip_adapter_ip_info_t_type()));
    return (tcpip_adapter_ip_info_t*)self->data;
}

#define mp_write_tcpip_adapter_ip_info_t(struct_obj) *mp_write_ptr_tcpip_adapter_ip_info_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_tcpip_adapter_ip_info_t(tcpip_adapter_ip_info_t *field)
{
    return lv_to_mp_struct(get_mp_tcpip_adapter_ip_info_t_type(), (void*)field);
}

#define mp_read_tcpip_adapter_ip_info_t(field) mp_read_ptr_tcpip_adapter_ip_info_t(copy_buffer(&field, sizeof(tcpip_adapter_ip_info_t)))
#define mp_read_byref_tcpip_adapter_ip_info_t(field) mp_read_ptr_tcpip_adapter_ip_info_t(&field)

STATIC void mp_tcpip_adapter_ip_info_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    tcpip_adapter_ip_info_t *data = (tcpip_adapter_ip_info_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_ip: dest[0] = mp_read_byref_ip4_addr_t(data->ip); break; // converting from ip4_addr_t;
            case MP_QSTR_netmask: dest[0] = mp_read_byref_ip4_addr_t(data->netmask); break; // converting from ip4_addr_t;
            case MP_QSTR_gw: dest[0] = mp_read_byref_ip4_addr_t(data->gw); break; // converting from ip4_addr_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_ip: data->ip = mp_write_ip4_addr_t(dest[1]); break; // converting to ip4_addr_t;
                case MP_QSTR_netmask: data->netmask = mp_write_ip4_addr_t(dest[1]); break; // converting to ip4_addr_t;
                case MP_QSTR_gw: data->gw = mp_write_ip4_addr_t(dest[1]); break; // converting to ip4_addr_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_tcpip_adapter_ip_info_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct tcpip_adapter_ip_info_t");
}

STATIC const mp_obj_dict_t mp_tcpip_adapter_ip_info_t_locals_dict;

STATIC const mp_obj_type_t mp_tcpip_adapter_ip_info_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_tcpip_adapter_ip_info_t,
    .print = mp_tcpip_adapter_ip_info_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_tcpip_adapter_ip_info_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_tcpip_adapter_ip_info_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_ip_info_t_type()
{
    return &mp_tcpip_adapter_ip_info_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_eth_start(uint8_t *mac, tcpip_adapter_ip_info_t *ip_info, void *args)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_eth_start(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t *mac = mp_to_ptr(mp_args[0]);
    tcpip_adapter_ip_info_t *ip_info = mp_write_ptr_tcpip_adapter_ip_info_t(mp_args[1]);
    void *args = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(uint8_t *, tcpip_adapter_ip_info_t *, void *))lv_func_ptr)(mac, ip_info, args);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_eth_start_obj, 3, mp_tcpip_adapter_eth_start, tcpip_adapter_eth_start);
    

STATIC const mp_rom_map_elem_t mp_tcpip_adapter_ip_info_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(tcpip_adapter_ip_info_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_tcpip_adapter_ip_info_t_locals_dict, mp_tcpip_adapter_ip_info_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_sta_start(uint8_t *mac, tcpip_adapter_ip_info_t *ip_info)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_sta_start(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    uint8_t *mac = mp_to_ptr(mp_args[0]);
    tcpip_adapter_ip_info_t *ip_info = mp_write_ptr_tcpip_adapter_ip_info_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(uint8_t *, tcpip_adapter_ip_info_t *))lv_func_ptr)(mac, ip_info);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_sta_start_obj, 2, mp_tcpip_adapter_sta_start, tcpip_adapter_sta_start);
    
/* Reusing tcpip_adapter_sta_start for tcpip_adapter_ap_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_ap_start_obj, 2, mp_tcpip_adapter_sta_start, tcpip_adapter_ap_start);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_stop(tcpip_adapter_if_t tcpip_if)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_stop(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t))lv_func_ptr)(tcpip_if);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_stop_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_stop);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_up */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_up_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_up);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_down */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_down_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_down);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_get_ip_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_ip_info_t *ip_info)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_ip_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    tcpip_adapter_ip_info_t *ip_info = mp_write_ptr_tcpip_adapter_ip_info_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, tcpip_adapter_ip_info_t *))lv_func_ptr)(tcpip_if, ip_info);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_ip_info_obj, 2, mp_tcpip_adapter_get_ip_info, tcpip_adapter_get_ip_info);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_set_ip_info(tcpip_adapter_if_t tcpip_if, const tcpip_adapter_ip_info_t *ip_info)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_set_ip_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    const tcpip_adapter_ip_info_t *ip_info = mp_write_ptr_tcpip_adapter_ip_info_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, const tcpip_adapter_ip_info_t *))lv_func_ptr)(tcpip_if, ip_info);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_set_ip_info_obj, 2, mp_tcpip_adapter_set_ip_info, tcpip_adapter_set_ip_info);
    

/*
 * Struct tcpip_adapter_dns_info_t
 */

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_dns_info_t_type();

STATIC inline tcpip_adapter_dns_info_t* mp_write_ptr_tcpip_adapter_dns_info_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_tcpip_adapter_dns_info_t_type()));
    return (tcpip_adapter_dns_info_t*)self->data;
}

#define mp_write_tcpip_adapter_dns_info_t(struct_obj) *mp_write_ptr_tcpip_adapter_dns_info_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_tcpip_adapter_dns_info_t(tcpip_adapter_dns_info_t *field)
{
    return lv_to_mp_struct(get_mp_tcpip_adapter_dns_info_t_type(), (void*)field);
}

#define mp_read_tcpip_adapter_dns_info_t(field) mp_read_ptr_tcpip_adapter_dns_info_t(copy_buffer(&field, sizeof(tcpip_adapter_dns_info_t)))
#define mp_read_byref_tcpip_adapter_dns_info_t(field) mp_read_ptr_tcpip_adapter_dns_info_t(&field)

STATIC void mp_tcpip_adapter_dns_info_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    tcpip_adapter_dns_info_t *data = (tcpip_adapter_dns_info_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_ip: dest[0] = mp_read_byref_ip_addr_t(data->ip); break; // converting from ip_addr_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_ip: data->ip = mp_write_ip_addr_t(dest[1]); break; // converting to ip_addr_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_tcpip_adapter_dns_info_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct tcpip_adapter_dns_info_t");
}

STATIC const mp_obj_dict_t mp_tcpip_adapter_dns_info_t_locals_dict;

STATIC const mp_obj_type_t mp_tcpip_adapter_dns_info_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_tcpip_adapter_dns_info_t,
    .print = mp_tcpip_adapter_dns_info_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_tcpip_adapter_dns_info_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_tcpip_adapter_dns_info_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_dns_info_t_type()
{
    return &mp_tcpip_adapter_dns_info_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_set_dns_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_dns_type_t type, tcpip_adapter_dns_info_t *dns)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_set_dns_info(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    tcpip_adapter_dns_type_t type = (int)mp_obj_get_int(mp_args[1]);
    tcpip_adapter_dns_info_t *dns = mp_write_ptr_tcpip_adapter_dns_info_t(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, tcpip_adapter_dns_type_t, tcpip_adapter_dns_info_t *))lv_func_ptr)(tcpip_if, type, dns);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_set_dns_info_obj, 3, mp_tcpip_adapter_set_dns_info, tcpip_adapter_set_dns_info);
    

STATIC const mp_rom_map_elem_t mp_tcpip_adapter_dns_info_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(tcpip_adapter_dns_info_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_tcpip_adapter_dns_info_t_locals_dict, mp_tcpip_adapter_dns_info_t_locals_dict_table);
        
/* Reusing tcpip_adapter_set_dns_info for tcpip_adapter_get_dns_info */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_dns_info_obj, 3, mp_tcpip_adapter_set_dns_info, tcpip_adapter_get_dns_info);
    
/* Reusing tcpip_adapter_get_ip_info for tcpip_adapter_get_old_ip_info */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_old_ip_info_obj, 2, mp_tcpip_adapter_get_ip_info, tcpip_adapter_get_old_ip_info);
    
/* Reusing tcpip_adapter_set_ip_info for tcpip_adapter_set_old_ip_info */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_set_old_ip_info_obj, 2, mp_tcpip_adapter_set_ip_info, tcpip_adapter_set_old_ip_info);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_create_ip6_linklocal */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_create_ip6_linklocal_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_create_ip6_linklocal);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_get_ip6_linklocal(tcpip_adapter_if_t tcpip_if, ip6_addr_t *if_ip6)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_ip6_linklocal(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    ip6_addr_t *if_ip6 = mp_write_ptr_ip6_addr_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, ip6_addr_t *))lv_func_ptr)(tcpip_if, if_ip6);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_ip6_linklocal_obj, 2, mp_tcpip_adapter_get_ip6_linklocal, tcpip_adapter_get_ip6_linklocal);
    
/* Reusing tcpip_adapter_get_ip6_linklocal for tcpip_adapter_get_ip6_global */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_ip6_global_obj, 2, mp_tcpip_adapter_get_ip6_linklocal, tcpip_adapter_get_ip6_global);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_dhcps_get_status(tcpip_adapter_if_t tcpip_if, tcpip_adapter_dhcp_status_t *status)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_dhcps_get_status(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    tcpip_adapter_dhcp_status_t *status = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, tcpip_adapter_dhcp_status_t *))lv_func_ptr)(tcpip_if, status);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcps_get_status_obj, 2, mp_tcpip_adapter_dhcps_get_status, tcpip_adapter_dhcps_get_status);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_dhcps_option(tcpip_adapter_dhcp_option_mode_t opt_op, tcpip_adapter_dhcp_option_id_t opt_id, void *opt_val, uint32_t opt_len)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_dhcps_option(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_dhcp_option_mode_t opt_op = (int)mp_obj_get_int(mp_args[0]);
    tcpip_adapter_dhcp_option_id_t opt_id = (int)mp_obj_get_int(mp_args[1]);
    void *opt_val = mp_to_ptr(mp_args[2]);
    uint32_t opt_len = (uint32_t)mp_obj_get_int(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_dhcp_option_mode_t, tcpip_adapter_dhcp_option_id_t, void *, uint32_t))lv_func_ptr)(opt_op, opt_id, opt_val, opt_len);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcps_option_obj, 4, mp_tcpip_adapter_dhcps_option, tcpip_adapter_dhcps_option);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_dhcps_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcps_start_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_dhcps_start);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_dhcps_stop */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcps_stop_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_dhcps_stop);
    
/* Reusing tcpip_adapter_dhcps_get_status for tcpip_adapter_dhcpc_get_status */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcpc_get_status_obj, 2, mp_tcpip_adapter_dhcps_get_status, tcpip_adapter_dhcpc_get_status);
    
/* Reusing tcpip_adapter_dhcps_option for tcpip_adapter_dhcpc_option */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcpc_option_obj, 4, mp_tcpip_adapter_dhcps_option, tcpip_adapter_dhcpc_option);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_dhcpc_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcpc_start_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_dhcpc_start);
    
/* Reusing tcpip_adapter_stop for tcpip_adapter_dhcpc_stop */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_dhcpc_stop_obj, 1, mp_tcpip_adapter_stop, tcpip_adapter_dhcpc_stop);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_eth_input(void *buffer, uint16_t len, void *eb)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_eth_input(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *buffer = mp_to_ptr(mp_args[0]);
    uint16_t len = (uint16_t)mp_obj_get_int(mp_args[1]);
    void *eb = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(void *, uint16_t, void *))lv_func_ptr)(buffer, len, eb);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_eth_input_obj, 3, mp_tcpip_adapter_eth_input, tcpip_adapter_eth_input);
    
/* Reusing tcpip_adapter_eth_input for tcpip_adapter_sta_input */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_sta_input_obj, 3, mp_tcpip_adapter_eth_input, tcpip_adapter_sta_input);
    
/* Reusing tcpip_adapter_eth_input for tcpip_adapter_ap_input */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_ap_input_obj, 3, mp_tcpip_adapter_eth_input, tcpip_adapter_ap_input);
    

/*
 * espidf extension definition for:
 * esp_interface_t tcpip_adapter_get_esp_if(void *dev)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_esp_if(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *dev = mp_to_ptr(mp_args[0]);
    esp_interface_t _res = ((esp_interface_t (*)(void *))lv_func_ptr)(dev);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_esp_if_obj, 1, mp_tcpip_adapter_get_esp_if, tcpip_adapter_get_esp_if);
    

/*
 * Struct tcpip_adapter_sta_info_t
 */

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_sta_info_t_type();

STATIC inline tcpip_adapter_sta_info_t* mp_write_ptr_tcpip_adapter_sta_info_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_tcpip_adapter_sta_info_t_type()));
    return (tcpip_adapter_sta_info_t*)self->data;
}

#define mp_write_tcpip_adapter_sta_info_t(struct_obj) *mp_write_ptr_tcpip_adapter_sta_info_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_tcpip_adapter_sta_info_t(tcpip_adapter_sta_info_t *field)
{
    return lv_to_mp_struct(get_mp_tcpip_adapter_sta_info_t_type(), (void*)field);
}

#define mp_read_tcpip_adapter_sta_info_t(field) mp_read_ptr_tcpip_adapter_sta_info_t(copy_buffer(&field, sizeof(tcpip_adapter_sta_info_t)))
#define mp_read_byref_tcpip_adapter_sta_info_t(field) mp_read_ptr_tcpip_adapter_sta_info_t(&field)

STATIC void mp_tcpip_adapter_sta_info_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    tcpip_adapter_sta_info_t *data = (tcpip_adapter_sta_info_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_mac: dest[0] = mp_arr_from_uint8_t___6__(data->mac); break; // converting from uint8_t [6];
            case MP_QSTR_ip: dest[0] = mp_read_byref_ip4_addr_t(data->ip); break; // converting from ip4_addr_t;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_mac: memcpy(&data->mac, mp_arr_to_uint8_t___6__(dest[1]), sizeof(uint8_t)*6); break; // converting to uint8_t [6];
                case MP_QSTR_ip: data->ip = mp_write_ip4_addr_t(dest[1]); break; // converting to ip4_addr_t;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_tcpip_adapter_sta_info_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct tcpip_adapter_sta_info_t");
}

STATIC const mp_obj_dict_t mp_tcpip_adapter_sta_info_t_locals_dict;

STATIC const mp_obj_type_t mp_tcpip_adapter_sta_info_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_tcpip_adapter_sta_info_t,
    .print = mp_tcpip_adapter_sta_info_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_tcpip_adapter_sta_info_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_tcpip_adapter_sta_info_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_sta_info_t_type()
{
    return &mp_tcpip_adapter_sta_info_t_type;
}
    

/*
 * Array convertors for tcpip_adapter_sta_info_t [10]
 */

STATIC tcpip_adapter_sta_info_t *mp_arr_to_tcpip_adapter_sta_info_t___10__(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    //TODO check dim!
    tcpip_adapter_sta_info_t *lv_arr = (tcpip_adapter_sta_info_t*)m_malloc(len * sizeof(tcpip_adapter_sta_info_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = mp_write_tcpip_adapter_sta_info_t(item);
    }
    return (tcpip_adapter_sta_info_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_tcpip_adapter_sta_info_t___10__(tcpip_adapter_sta_info_t *arr)
{
    mp_obj_t obj_arr[10];
    for (size_t i=0; i<10; i++){
        obj_arr[i] = mp_read_tcpip_adapter_sta_info_t(arr[i]);
    }
    return mp_obj_new_list(10, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * Struct tcpip_adapter_sta_list_t
 */

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_sta_list_t_type();

STATIC inline tcpip_adapter_sta_list_t* mp_write_ptr_tcpip_adapter_sta_list_t(mp_obj_t self_in)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(cast(self_in, get_mp_tcpip_adapter_sta_list_t_type()));
    return (tcpip_adapter_sta_list_t*)self->data;
}

#define mp_write_tcpip_adapter_sta_list_t(struct_obj) *mp_write_ptr_tcpip_adapter_sta_list_t(struct_obj)

STATIC inline mp_obj_t mp_read_ptr_tcpip_adapter_sta_list_t(tcpip_adapter_sta_list_t *field)
{
    return lv_to_mp_struct(get_mp_tcpip_adapter_sta_list_t_type(), (void*)field);
}

#define mp_read_tcpip_adapter_sta_list_t(field) mp_read_ptr_tcpip_adapter_sta_list_t(copy_buffer(&field, sizeof(tcpip_adapter_sta_list_t)))
#define mp_read_byref_tcpip_adapter_sta_list_t(field) mp_read_ptr_tcpip_adapter_sta_list_t(&field)

STATIC void mp_tcpip_adapter_sta_list_t_attr(mp_obj_t self_in, qstr attr, mp_obj_t *dest)
{
    mp_lv_struct_t *self = MP_OBJ_TO_PTR(self_in);
    tcpip_adapter_sta_list_t *data = (tcpip_adapter_sta_list_t*)self->data;

    if (dest[0] == MP_OBJ_NULL) {
        // load attribute
        switch(attr)
        {
            case MP_QSTR_sta: dest[0] = mp_arr_from_tcpip_adapter_sta_info_t___10__(data->sta); break; // converting from tcpip_adapter_sta_info_t [10];
            case MP_QSTR_num: dest[0] = mp_obj_new_int(data->num); break; // converting from int;
            default: call_parent_methods(self_in, attr, dest); // fallback to locals_dict lookup
        }
    } else {
        if (dest[1])
        {
            // store attribute
            switch(attr)
            {
                case MP_QSTR_sta: memcpy(&data->sta, mp_arr_to_tcpip_adapter_sta_info_t___10__(dest[1]), sizeof(tcpip_adapter_sta_info_t)*10); break; // converting to tcpip_adapter_sta_info_t [10];
                case MP_QSTR_num: data->num = (int)mp_obj_get_int(dest[1]); break; // converting to int;
                default: return;
            }

            dest[0] = MP_OBJ_NULL; // indicate success
        }
    }
}

STATIC void mp_tcpip_adapter_sta_list_t_print(const mp_print_t *print,
    mp_obj_t self_in,
    mp_print_kind_t kind)
{
    mp_printf(print, "struct tcpip_adapter_sta_list_t");
}

STATIC const mp_obj_dict_t mp_tcpip_adapter_sta_list_t_locals_dict;

STATIC const mp_obj_type_t mp_tcpip_adapter_sta_list_t_type = {
    { &mp_type_type },
    .name = MP_QSTR_tcpip_adapter_sta_list_t,
    .print = mp_tcpip_adapter_sta_list_t_print,
    .make_new = make_new_lv_struct,
    .attr = mp_tcpip_adapter_sta_list_t_attr,
    .locals_dict = (mp_obj_dict_t*)&mp_tcpip_adapter_sta_list_t_locals_dict,
    .buffer_p = { .get_buffer = mp_blob_get_buffer }
};

STATIC inline const mp_obj_type_t *get_mp_tcpip_adapter_sta_list_t_type()
{
    return &mp_tcpip_adapter_sta_list_t_type;
}
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_get_sta_list(const wifi_sta_list_t *wifi_sta_list, tcpip_adapter_sta_list_t *tcpip_sta_list)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_sta_list(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const wifi_sta_list_t *wifi_sta_list = mp_write_ptr_wifi_sta_list_t(mp_args[0]);
    tcpip_adapter_sta_list_t *tcpip_sta_list = mp_write_ptr_tcpip_adapter_sta_list_t(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(const wifi_sta_list_t *, tcpip_adapter_sta_list_t *))lv_func_ptr)(wifi_sta_list, tcpip_sta_list);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_sta_list_obj, 2, mp_tcpip_adapter_get_sta_list, tcpip_adapter_get_sta_list);
    

STATIC const mp_rom_map_elem_t mp_tcpip_adapter_sta_list_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(tcpip_adapter_sta_list_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_tcpip_adapter_sta_list_t_locals_dict, mp_tcpip_adapter_sta_list_t_locals_dict_table);
        

STATIC const mp_rom_map_elem_t mp_tcpip_adapter_sta_info_t_locals_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_SIZE), MP_ROM_PTR(MP_ROM_INT(sizeof(tcpip_adapter_sta_info_t))) },
    { MP_ROM_QSTR(MP_QSTR_cast), MP_ROM_PTR(&mp_lv_cast_class_method) },
    { MP_ROM_QSTR(MP_QSTR_cast_instance), MP_ROM_PTR(&mp_lv_cast_instance_obj) },
    { MP_ROM_QSTR(MP_QSTR___dereference__), MP_ROM_PTR(&mp_lv_dereference_obj) },
    
};

STATIC MP_DEFINE_CONST_DICT(mp_tcpip_adapter_sta_info_t_locals_dict, mp_tcpip_adapter_sta_info_t_locals_dict_table);
        

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_set_hostname(tcpip_adapter_if_t tcpip_if, const char *hostname)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_set_hostname(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    const char *hostname = (char*)convert_from_str(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, const char *))lv_func_ptr)(tcpip_if, hostname);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_set_hostname_obj, 2, mp_tcpip_adapter_set_hostname, tcpip_adapter_set_hostname);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_get_hostname(tcpip_adapter_if_t tcpip_if, const char **hostname)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_hostname(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    const char **hostname = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, const char **))lv_func_ptr)(tcpip_if, hostname);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_hostname_obj, 2, mp_tcpip_adapter_get_hostname, tcpip_adapter_get_hostname);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_get_netif(tcpip_adapter_if_t tcpip_if, void **netif)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_netif(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    void **netif = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(tcpip_adapter_if_t, void **))lv_func_ptr)(tcpip_if, netif);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_netif_obj, 2, mp_tcpip_adapter_get_netif, tcpip_adapter_get_netif);
    

/*
 * espidf extension definition for:
 * bool tcpip_adapter_is_netif_up(tcpip_adapter_if_t tcpip_if)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_is_netif_up(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    bool _res = ((bool (*)(tcpip_adapter_if_t))lv_func_ptr)(tcpip_if);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_is_netif_up_obj, 1, mp_tcpip_adapter_is_netif_up, tcpip_adapter_is_netif_up);
    
/* Reusing tcpip_adapter_sta_start for tcpip_adapter_test_start */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_test_start_obj, 2, mp_tcpip_adapter_sta_start, tcpip_adapter_test_start);
    

/*
 * espidf extension definition for:
 * esp_err_t tcpip_adapter_set_default_eth_handlers()
 */
 
STATIC mp_obj_t mp_tcpip_adapter_set_default_eth_handlers(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    esp_err_t _res = ((esp_err_t (*)())lv_func_ptr)();
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_set_default_eth_handlers_obj, 0, mp_tcpip_adapter_set_default_eth_handlers, tcpip_adapter_set_default_eth_handlers);
    
/* Reusing tcpip_adapter_set_default_eth_handlers for tcpip_adapter_clear_default_eth_handlers */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_clear_default_eth_handlers_obj, 0, mp_tcpip_adapter_set_default_eth_handlers, tcpip_adapter_clear_default_eth_handlers);
    
/* Reusing tcpip_adapter_set_default_eth_handlers for tcpip_adapter_set_default_wifi_handlers */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_set_default_wifi_handlers_obj, 0, mp_tcpip_adapter_set_default_eth_handlers, tcpip_adapter_set_default_wifi_handlers);
    
/* Reusing tcpip_adapter_set_default_eth_handlers for tcpip_adapter_clear_default_wifi_handlers */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_clear_default_wifi_handlers_obj, 0, mp_tcpip_adapter_set_default_eth_handlers, tcpip_adapter_clear_default_wifi_handlers);
    

/*
 * espidf extension definition for:
 * int tcpip_adapter_get_netif_index(tcpip_adapter_if_t tcpip_if)
 */
 
STATIC mp_obj_t mp_tcpip_adapter_get_netif_index(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    tcpip_adapter_if_t tcpip_if = (int)mp_obj_get_int(mp_args[0]);
    int _res = ((int (*)(tcpip_adapter_if_t))lv_func_ptr)(tcpip_if);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_tcpip_adapter_get_netif_index_obj, 1, mp_tcpip_adapter_get_netif_index, tcpip_adapter_get_netif_index);
    
/* Reusing tcpip_adapter_set_default_eth_handlers for mdns_init */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_init_obj, 0, mp_tcpip_adapter_set_default_eth_handlers, mdns_init);
    
/* Reusing esp_intr_noniram_disable for mdns_free */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_free_obj, 0, mp_esp_intr_noniram_disable, mdns_free);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_hostname_set(const char *hostname)
 */
 
STATIC mp_obj_t mp_mdns_hostname_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *hostname = (char*)convert_from_str(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(const char *))lv_func_ptr)(hostname);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_hostname_set_obj, 1, mp_mdns_hostname_set, mdns_hostname_set);
    
/* Reusing mdns_hostname_set for mdns_instance_name_set */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_instance_name_set_obj, 1, mp_mdns_hostname_set, mdns_instance_name_set);
    

/*
 * Array convertors for mdns_txt_item_t []
 */

STATIC mdns_txt_item_t *mp_arr_to_mdns_txt_item_t_____(mp_obj_t mp_arr)
{
    mp_obj_t mp_len = mp_obj_len_maybe(mp_arr);
    if (mp_len == MP_OBJ_NULL) return mp_to_ptr(mp_arr);
    mp_int_t len = mp_obj_get_int(mp_len);
    
    mdns_txt_item_t *lv_arr = (mdns_txt_item_t*)m_malloc(len * sizeof(mdns_txt_item_t));
    mp_obj_t iter = mp_getiter(mp_arr, NULL);
    mp_obj_t item;
    size_t i = 0;
    while ((item = mp_iternext(iter)) != MP_OBJ_STOP_ITERATION) {
        lv_arr[i++] = mp_write_mdns_txt_item_t(item);
    }
    return (mdns_txt_item_t *)lv_arr;
}
    
STATIC mp_obj_t mp_arr_from_mdns_txt_item_t_____(mdns_txt_item_t *arr)
{
    mp_obj_t obj_arr[1];
    for (size_t i=0; i<1; i++){
        obj_arr[i] = mp_read_mdns_txt_item_t(arr[i]);
    }
    return mp_obj_new_list(1, obj_arr); // TODO: return custom iterable object!
}
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_service_add(const char *instance_name, const char *service_type, const char *proto, uint16_t port, mdns_txt_item_t txt[], size_t num_items)
 */
 
STATIC mp_obj_t mp_mdns_service_add(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *instance_name = (char*)convert_from_str(mp_args[0]);
    const char *service_type = (char*)convert_from_str(mp_args[1]);
    const char *proto = (char*)convert_from_str(mp_args[2]);
    uint16_t port = (uint16_t)mp_obj_get_int(mp_args[3]);
    mdns_txt_item_t *txt = mp_arr_to_mdns_txt_item_t_____(mp_args[4]);
    size_t num_items = (size_t)mp_obj_get_int(mp_args[5]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, const char *, uint16_t, mdns_txt_item_t [], size_t))lv_func_ptr)(instance_name, service_type, proto, port, txt, num_items);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_add_obj, 6, mp_mdns_service_add, mdns_service_add);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_service_remove(const char *service_type, const char *proto)
 */
 
STATIC mp_obj_t mp_mdns_service_remove(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *service_type = (char*)convert_from_str(mp_args[0]);
    const char *proto = (char*)convert_from_str(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *))lv_func_ptr)(service_type, proto);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_remove_obj, 2, mp_mdns_service_remove, mdns_service_remove);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_service_instance_name_set(const char *service_type, const char *proto, const char *instance_name)
 */
 
STATIC mp_obj_t mp_mdns_service_instance_name_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *service_type = (char*)convert_from_str(mp_args[0]);
    const char *proto = (char*)convert_from_str(mp_args[1]);
    const char *instance_name = (char*)convert_from_str(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, const char *))lv_func_ptr)(service_type, proto, instance_name);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_instance_name_set_obj, 3, mp_mdns_service_instance_name_set, mdns_service_instance_name_set);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_service_port_set(const char *service_type, const char *proto, uint16_t port)
 */
 
STATIC mp_obj_t mp_mdns_service_port_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *service_type = (char*)convert_from_str(mp_args[0]);
    const char *proto = (char*)convert_from_str(mp_args[1]);
    uint16_t port = (uint16_t)mp_obj_get_int(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, uint16_t))lv_func_ptr)(service_type, proto, port);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_port_set_obj, 3, mp_mdns_service_port_set, mdns_service_port_set);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_service_txt_set(const char *service_type, const char *proto, mdns_txt_item_t txt[], uint8_t num_items)
 */
 
STATIC mp_obj_t mp_mdns_service_txt_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *service_type = (char*)convert_from_str(mp_args[0]);
    const char *proto = (char*)convert_from_str(mp_args[1]);
    mdns_txt_item_t *txt = mp_arr_to_mdns_txt_item_t_____(mp_args[2]);
    uint8_t num_items = (uint8_t)mp_obj_get_int(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, mdns_txt_item_t [], uint8_t))lv_func_ptr)(service_type, proto, txt, num_items);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_txt_set_obj, 4, mp_mdns_service_txt_set, mdns_service_txt_set);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_service_txt_item_set(const char *service_type, const char *proto, const char *key, const char *value)
 */
 
STATIC mp_obj_t mp_mdns_service_txt_item_set(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *service_type = (char*)convert_from_str(mp_args[0]);
    const char *proto = (char*)convert_from_str(mp_args[1]);
    const char *key = (char*)convert_from_str(mp_args[2]);
    const char *value = (char*)convert_from_str(mp_args[3]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, const char *, const char *))lv_func_ptr)(service_type, proto, key, value);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_txt_item_set_obj, 4, mp_mdns_service_txt_item_set, mdns_service_txt_item_set);
    
/* Reusing mdns_service_instance_name_set for mdns_service_txt_item_remove */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_txt_item_remove_obj, 3, mp_mdns_service_instance_name_set, mdns_service_txt_item_remove);
    
/* Reusing tcpip_adapter_set_default_eth_handlers for mdns_service_remove_all */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_service_remove_all_obj, 0, mp_tcpip_adapter_set_default_eth_handlers, mdns_service_remove_all);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_query(const char *name, const char *service_type, const char *proto, uint16_t type, uint32_t timeout, size_t max_results, mdns_result_t **results)
 */
 
STATIC mp_obj_t mp_mdns_query(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *name = (char*)convert_from_str(mp_args[0]);
    const char *service_type = (char*)convert_from_str(mp_args[1]);
    const char *proto = (char*)convert_from_str(mp_args[2]);
    uint16_t type = (uint16_t)mp_obj_get_int(mp_args[3]);
    uint32_t timeout = (uint32_t)mp_obj_get_int(mp_args[4]);
    size_t max_results = (size_t)mp_obj_get_int(mp_args[5]);
    mdns_result_t **results = mp_to_ptr(mp_args[6]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, const char *, uint16_t, uint32_t, size_t, mdns_result_t **))lv_func_ptr)(name, service_type, proto, type, timeout, max_results, results);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_query_obj, 7, mp_mdns_query, mdns_query);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_query_ptr(const char *service_type, const char *proto, uint32_t timeout, size_t max_results, mdns_result_t **results)
 */
 
STATIC mp_obj_t mp_mdns_query_ptr(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *service_type = (char*)convert_from_str(mp_args[0]);
    const char *proto = (char*)convert_from_str(mp_args[1]);
    uint32_t timeout = (uint32_t)mp_obj_get_int(mp_args[2]);
    size_t max_results = (size_t)mp_obj_get_int(mp_args[3]);
    mdns_result_t **results = mp_to_ptr(mp_args[4]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, uint32_t, size_t, mdns_result_t **))lv_func_ptr)(service_type, proto, timeout, max_results, results);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_query_ptr_obj, 5, mp_mdns_query_ptr, mdns_query_ptr);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_query_srv(const char *instance_name, const char *service_type, const char *proto, uint32_t timeout, mdns_result_t **result)
 */
 
STATIC mp_obj_t mp_mdns_query_srv(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *instance_name = (char*)convert_from_str(mp_args[0]);
    const char *service_type = (char*)convert_from_str(mp_args[1]);
    const char *proto = (char*)convert_from_str(mp_args[2]);
    uint32_t timeout = (uint32_t)mp_obj_get_int(mp_args[3]);
    mdns_result_t **result = mp_to_ptr(mp_args[4]);
    esp_err_t _res = ((esp_err_t (*)(const char *, const char *, const char *, uint32_t, mdns_result_t **))lv_func_ptr)(instance_name, service_type, proto, timeout, result);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_query_srv_obj, 5, mp_mdns_query_srv, mdns_query_srv);
    
/* Reusing mdns_query_srv for mdns_query_txt */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_query_txt_obj, 5, mp_mdns_query_srv, mdns_query_txt);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_query_a(const char *host_name, uint32_t timeout, ip4_addr_t *addr)
 */
 
STATIC mp_obj_t mp_mdns_query_a(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *host_name = (char*)convert_from_str(mp_args[0]);
    uint32_t timeout = (uint32_t)mp_obj_get_int(mp_args[1]);
    ip4_addr_t *addr = mp_write_ptr_ip4_addr_t(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(const char *, uint32_t, ip4_addr_t *))lv_func_ptr)(host_name, timeout, addr);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_query_a_obj, 3, mp_mdns_query_a, mdns_query_a);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_query_aaaa(const char *host_name, uint32_t timeout, ip6_addr_t *addr)
 */
 
STATIC mp_obj_t mp_mdns_query_aaaa(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *host_name = (char*)convert_from_str(mp_args[0]);
    uint32_t timeout = (uint32_t)mp_obj_get_int(mp_args[1]);
    ip6_addr_t *addr = mp_write_ptr_ip6_addr_t(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(const char *, uint32_t, ip6_addr_t *))lv_func_ptr)(host_name, timeout, addr);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_query_aaaa_obj, 3, mp_mdns_query_aaaa, mdns_query_aaaa);
    

/*
 * espidf extension definition for:
 * esp_err_t mdns_handle_system_event(void *ctx, system_event_t *event)
 */
 
STATIC mp_obj_t mp_mdns_handle_system_event(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *ctx = mp_to_ptr(mp_args[0]);
    system_event_t *event = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(void *, system_event_t *))lv_func_ptr)(ctx, event);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_mdns_handle_system_event_obj, 2, mp_mdns_handle_system_event, mdns_handle_system_event);
    

/*
 * espidf extension definition for:
 * unsigned long http_parser_version(void)
 */
 
STATIC mp_obj_t mp_http_parser_version(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    
    unsigned long _res = ((unsigned long (*)(void))lv_func_ptr)();
    return mp_obj_new_int_from_uint(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_http_parser_version_obj, 0, mp_http_parser_version, http_parser_version);
    

/*
 * espidf extension definition for:
 * const char *http_method_str(enum http_method m)
 */
 
STATIC mp_obj_t mp_http_method_str(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    enum http_method m = (int)mp_obj_get_int(mp_args[0]);
    const char * _res = ((const char *(*)(enum http_method))lv_func_ptr)(m);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_http_method_str_obj, 1, mp_http_method_str, http_method_str);
    

/*
 * espidf extension definition for:
 * const char *http_errno_name(enum http_errno err)
 */
 
STATIC mp_obj_t mp_http_errno_name(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    enum http_errno err = (int)mp_obj_get_int(mp_args[0]);
    const char * _res = ((const char *(*)(enum http_errno))lv_func_ptr)(err);
    return convert_to_str((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_http_errno_name_obj, 1, mp_http_errno_name, http_errno_name);
    
/* Reusing http_errno_name for http_errno_description */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_http_errno_description_obj, 1, mp_http_errno_name, http_errno_description);
    

/*
 * espidf extension definition for:
 * void http_parser_url_init(struct http_parser_url *u)
 */
 
STATIC mp_obj_t mp_http_parser_url_init(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    struct http_parser_url *u = mp_to_ptr(mp_args[0]);
    ((void (*)(struct http_parser_url *))lv_func_ptr)(u);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_VAR(mp_http_parser_url_init_obj, 1, mp_http_parser_url_init, http_parser_url_init);
    

/*
 * espidf extension definition for:
 * int http_parser_parse_url(const char *buf, size_t buflen, int is_connect, struct http_parser_url *u)
 */
 
STATIC mp_obj_t mp_http_parser_parse_url(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    const char *buf = (char*)convert_from_str(mp_args[0]);
    size_t buflen = (size_t)mp_obj_get_int(mp_args[1]);
    int is_connect = (int)mp_obj_get_int(mp_args[2]);
    struct http_parser_url *u = mp_to_ptr(mp_args[3]);
    int _res = ((int (*)(const char *, size_t, int, struct http_parser_url *))lv_func_ptr)(buf, buflen, is_connect, u);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_http_parser_parse_url_obj, 4, mp_http_parser_parse_url, http_parser_parse_url);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_perform(esp_http_client_handle_t client)
 */
 
STATIC mp_obj_t mp_esp_http_client_perform(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t))lv_func_ptr)(client);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_perform_obj, 1, mp_esp_http_client_perform, esp_http_client_perform);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_set_url(esp_http_client_handle_t client, const char *url)
 */
 
STATIC mp_obj_t mp_esp_http_client_set_url(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    const char *url = (char*)convert_from_str(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, const char *))lv_func_ptr)(client, url);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_url_obj, 2, mp_esp_http_client_set_url, esp_http_client_set_url);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_set_post_field(esp_http_client_handle_t client, const char *data, int len)
 */
 
STATIC mp_obj_t mp_esp_http_client_set_post_field(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    const char *data = (char*)convert_from_str(mp_args[1]);
    int len = (int)mp_obj_get_int(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, const char *, int))lv_func_ptr)(client, data, len);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_post_field_obj, 3, mp_esp_http_client_set_post_field, esp_http_client_set_post_field);
    

/*
 * espidf extension definition for:
 * int esp_http_client_get_post_field(esp_http_client_handle_t client, char **data)
 */
 
STATIC mp_obj_t mp_esp_http_client_get_post_field(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    char **data = mp_to_ptr(mp_args[1]);
    int _res = ((int (*)(esp_http_client_handle_t, char **))lv_func_ptr)(client, data);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_post_field_obj, 2, mp_esp_http_client_get_post_field, esp_http_client_get_post_field);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_set_header(esp_http_client_handle_t client, const char *key, const char *value)
 */
 
STATIC mp_obj_t mp_esp_http_client_set_header(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    const char *key = (char*)convert_from_str(mp_args[1]);
    const char *value = (char*)convert_from_str(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, const char *, const char *))lv_func_ptr)(client, key, value);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_header_obj, 3, mp_esp_http_client_set_header, esp_http_client_set_header);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_get_header(esp_http_client_handle_t client, const char *key, char **value)
 */
 
STATIC mp_obj_t mp_esp_http_client_get_header(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    const char *key = (char*)convert_from_str(mp_args[1]);
    char **value = mp_to_ptr(mp_args[2]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, const char *, char **))lv_func_ptr)(client, key, value);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_header_obj, 3, mp_esp_http_client_get_header, esp_http_client_get_header);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_get_username(esp_http_client_handle_t client, char **value)
 */
 
STATIC mp_obj_t mp_esp_http_client_get_username(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    char **value = mp_to_ptr(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, char **))lv_func_ptr)(client, value);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_username_obj, 2, mp_esp_http_client_get_username, esp_http_client_get_username);
    
/* Reusing esp_http_client_set_url for esp_http_client_set_username */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_username_obj, 2, mp_esp_http_client_set_url, esp_http_client_set_username);
    
/* Reusing esp_http_client_get_username for esp_http_client_get_password */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_password_obj, 2, mp_esp_http_client_get_username, esp_http_client_get_password);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_set_password(esp_http_client_handle_t client, char *password)
 */
 
STATIC mp_obj_t mp_esp_http_client_set_password(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    char *password = (char*)convert_from_str(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, char *))lv_func_ptr)(client, password);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_password_obj, 2, mp_esp_http_client_set_password, esp_http_client_set_password);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_set_method(esp_http_client_handle_t client, esp_http_client_method_t method)
 */
 
STATIC mp_obj_t mp_esp_http_client_set_method(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    esp_http_client_method_t method = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, esp_http_client_method_t))lv_func_ptr)(client, method);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_method_obj, 2, mp_esp_http_client_set_method, esp_http_client_set_method);
    
/* Reusing esp_http_client_set_url for esp_http_client_delete_header */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_delete_header_obj, 2, mp_esp_http_client_set_url, esp_http_client_delete_header);
    

/*
 * espidf extension definition for:
 * esp_err_t esp_http_client_open(esp_http_client_handle_t client, int write_len)
 */
 
STATIC mp_obj_t mp_esp_http_client_open(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    int write_len = (int)mp_obj_get_int(mp_args[1]);
    esp_err_t _res = ((esp_err_t (*)(esp_http_client_handle_t, int))lv_func_ptr)(client, write_len);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_open_obj, 2, mp_esp_http_client_open, esp_http_client_open);
    

/*
 * espidf extension definition for:
 * int esp_http_client_write(esp_http_client_handle_t client, const char *buffer, int len)
 */
 
STATIC mp_obj_t mp_esp_http_client_write(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    const char *buffer = (char*)convert_from_str(mp_args[1]);
    int len = (int)mp_obj_get_int(mp_args[2]);
    int _res = ((int (*)(esp_http_client_handle_t, const char *, int))lv_func_ptr)(client, buffer, len);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_write_obj, 3, mp_esp_http_client_write, esp_http_client_write);
    

/*
 * espidf extension definition for:
 * int esp_http_client_fetch_headers(esp_http_client_handle_t client)
 */
 
STATIC mp_obj_t mp_esp_http_client_fetch_headers(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    int _res = ((int (*)(esp_http_client_handle_t))lv_func_ptr)(client);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_fetch_headers_obj, 1, mp_esp_http_client_fetch_headers, esp_http_client_fetch_headers);
    

/*
 * espidf extension definition for:
 * bool esp_http_client_is_chunked_response(esp_http_client_handle_t client)
 */
 
STATIC mp_obj_t mp_esp_http_client_is_chunked_response(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    bool _res = ((bool (*)(esp_http_client_handle_t))lv_func_ptr)(client);
    return convert_to_bool(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_is_chunked_response_obj, 1, mp_esp_http_client_is_chunked_response, esp_http_client_is_chunked_response);
    

/*
 * espidf extension definition for:
 * int esp_http_client_read(esp_http_client_handle_t client, char *buffer, int len)
 */
 
STATIC mp_obj_t mp_esp_http_client_read(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    char *buffer = (char*)convert_from_str(mp_args[1]);
    int len = (int)mp_obj_get_int(mp_args[2]);
    int _res = ((int (*)(esp_http_client_handle_t, char *, int))lv_func_ptr)(client, buffer, len);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_read_obj, 3, mp_esp_http_client_read, esp_http_client_read);
    
/* Reusing esp_http_client_fetch_headers for esp_http_client_get_status_code */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_status_code_obj, 1, mp_esp_http_client_fetch_headers, esp_http_client_get_status_code);
    
/* Reusing esp_http_client_fetch_headers for esp_http_client_get_content_length */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_content_length_obj, 1, mp_esp_http_client_fetch_headers, esp_http_client_get_content_length);
    
/* Reusing esp_http_client_perform for esp_http_client_close */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_close_obj, 1, mp_esp_http_client_perform, esp_http_client_close);
    
/* Reusing esp_http_client_perform for esp_http_client_cleanup */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_cleanup_obj, 1, mp_esp_http_client_perform, esp_http_client_cleanup);
    

/*
 * espidf extension definition for:
 * esp_http_client_transport_t esp_http_client_get_transport_type(esp_http_client_handle_t client)
 */
 
STATIC mp_obj_t mp_esp_http_client_get_transport_type(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    esp_http_client_transport_t _res = ((esp_http_client_transport_t (*)(esp_http_client_handle_t))lv_func_ptr)(client);
    return mp_obj_new_int(_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_get_transport_type_obj, 1, mp_esp_http_client_get_transport_type, esp_http_client_get_transport_type);
    
/* Reusing esp_http_client_perform for esp_http_client_set_redirection */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_set_redirection_obj, 1, mp_esp_http_client_perform, esp_http_client_set_redirection);
    

/*
 * espidf extension definition for:
 * void esp_http_client_add_auth(esp_http_client_handle_t client)
 */
 
STATIC mp_obj_t mp_esp_http_client_add_auth(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    esp_http_client_handle_t client = mp_to_ptr(mp_args[0]);
    ((void (*)(esp_http_client_handle_t))lv_func_ptr)(client);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_add_auth_obj, 1, mp_esp_http_client_add_auth, esp_http_client_add_auth);
    
/* Reusing esp_http_client_is_chunked_response for esp_http_client_is_complete_data_received */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_esp_http_client_is_complete_data_received_obj, 1, mp_esp_http_client_is_chunked_response, esp_http_client_is_complete_data_received);
    
/* Reusing SPH0645_WORKAROUND for task_delay_ms */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_task_delay_ms_obj, 1, mp_SPH0645_WORKAROUND, task_delay_ms);
    

/*
 * espidf extension definition for:
 * void *spi_transaction_set_cb(mp_obj_t pre_cb, mp_obj_t post_cb)
 */
 
STATIC mp_obj_t mp_spi_transaction_set_cb(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    mp_obj_t pre_cb = (mp_obj_t)(mp_args[0]);
    mp_obj_t post_cb = (mp_obj_t)(mp_args[1]);
    void * _res = ((void *(*)(mp_obj_t, mp_obj_t))lv_func_ptr)(pre_cb, post_cb);
    return ptr_to_mp((void*)_res);
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_spi_transaction_set_cb_obj, 2, mp_spi_transaction_set_cb, spi_transaction_set_cb);
    
/* Reusing funcptr_transaction_cb_t for ex_spi_pre_cb_isr */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ex_spi_pre_cb_isr_obj, 1, mp_funcptr_transaction_cb_t, ex_spi_pre_cb_isr);
    
/* Reusing funcptr_transaction_cb_t for ex_spi_post_cb_isr */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ex_spi_post_cb_isr_obj, 1, mp_funcptr_transaction_cb_t, ex_spi_post_cb_isr);
    
/* Reusing funcptr_transaction_cb_t for ili9xxx_post_cb_isr */

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ili9xxx_post_cb_isr_obj, 1, mp_funcptr_transaction_cb_t, ili9xxx_post_cb_isr);
    

/*
 * espidf extension definition for:
 * void ili9xxx_flush(void *disp_drv, const void *area, void *color_p)
 */
 
STATIC mp_obj_t mp_ili9xxx_flush(size_t mp_n_args, const mp_obj_t *mp_args, void *lv_func_ptr)
{
    void *disp_drv = mp_to_ptr(mp_args[0]);
    const void *area = mp_to_ptr(mp_args[1]);
    void *color_p = mp_to_ptr(mp_args[2]);
    ((void (*)(void *, const void *, void *))lv_func_ptr)(disp_drv, area, color_p);
    return mp_const_none;
}

 

STATIC MP_DEFINE_CONST_LV_FUN_OBJ_STATIC_VAR(mp_ili9xxx_flush_obj, 3, mp_ili9xxx_flush, ili9xxx_flush);
    

/*
 * Function NOT generated:
 * Missing conversion to esp_event_base_t when generating global WIFI_EVENT
 * WIFI_EVENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_FPU
 * Xthal_cp_id_FPU
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_FPU
 * Xthal_cp_mask_FPU
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP1_IDENT
 * Xthal_cp_id_XCHAL_CP1_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP1_IDENT
 * Xthal_cp_mask_XCHAL_CP1_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP2_IDENT
 * Xthal_cp_id_XCHAL_CP2_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP2_IDENT
 * Xthal_cp_mask_XCHAL_CP2_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP3_IDENT
 * Xthal_cp_id_XCHAL_CP3_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP3_IDENT
 * Xthal_cp_mask_XCHAL_CP3_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP4_IDENT
 * Xthal_cp_id_XCHAL_CP4_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP4_IDENT
 * Xthal_cp_mask_XCHAL_CP4_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP5_IDENT
 * Xthal_cp_id_XCHAL_CP5_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP5_IDENT
 * Xthal_cp_mask_XCHAL_CP5_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP6_IDENT
 * Xthal_cp_id_XCHAL_CP6_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP6_IDENT
 * Xthal_cp_mask_XCHAL_CP6_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned char when generating global Xthal_cp_id_XCHAL_CP7_IDENT
 * Xthal_cp_id_XCHAL_CP7_IDENT
 */
    

/*
 * Function NOT generated:
 * Missing conversion to unsigned int when generating global Xthal_cp_mask_XCHAL_CP7_IDENT
 * Xthal_cp_mask_XCHAL_CP7_IDENT
 */
    

/*
 * espidf ip_addr_any_type global definitions
 */

STATIC const mp_lv_struct_t mp_ip_addr_any_type = {
    { &mp_ip_addr_t_type },
    (ip_addr_t*)&ip_addr_any_type
};
    

/*
 * espidf ip_addr_any global definitions
 */

STATIC const mp_lv_struct_t mp_ip_addr_any = {
    { &mp_ip_addr_t_type },
    (ip_addr_t*)&ip_addr_any
};
    

/*
 * espidf ip_addr_broadcast global definitions
 */

STATIC const mp_lv_struct_t mp_ip_addr_broadcast = {
    { &mp_ip_addr_t_type },
    (ip_addr_t*)&ip_addr_broadcast
};
    

/*
 * espidf ip6_addr_any global definitions
 */

STATIC const mp_lv_struct_t mp_ip6_addr_any = {
    { &mp_ip_addr_t_type },
    (ip_addr_t*)&ip6_addr_any
};
    

/*
 * Function NOT generated:
 * Missing conversion to esp_event_base_t when generating global IP_EVENT
 * IP_EVENT
 */
    

/*
 * Callback function esp_http_client_config_t_event_handler
 * esp_err_t http_event_handle_cb(esp_http_client_event_t *evt)
 */

STATIC esp_err_t esp_http_client_config_t_event_handler_callback(esp_http_client_event_t * arg0)
{
    mp_obj_t mp_args[1];
    mp_args[0] = mp_read_ptr_esp_http_client_event_t((void*)arg0);
    mp_obj_t callbacks = get_callback_dict_from_user_data(arg0->user_data);
    mp_obj_t callback_result = mp_call_function_n_kw(mp_obj_dict_get(callbacks, MP_OBJ_NEW_QSTR(MP_QSTR_esp_http_client_config_t_event_handler)) , 1, 0, mp_args);
    return (int32_t)mp_obj_get_int(callback_result);
}


/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_cb(http_parser *)
 * int http_cb(http_parser *)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_data_cb(http_parser *, const char *at, size_t length)
 * int http_data_cb(http_parser *, const char *at, size_t length)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_data_cb(http_parser *, const char *at, size_t length)
 * int http_data_cb(http_parser *, const char *at, size_t length)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_data_cb(http_parser *, const char *at, size_t length)
 * int http_data_cb(http_parser *, const char *at, size_t length)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_data_cb(http_parser *, const char *at, size_t length)
 * int http_data_cb(http_parser *, const char *at, size_t length)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_cb(http_parser *)
 * int http_cb(http_parser *)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_data_cb(http_parser *, const char *at, size_t length)
 * int http_data_cb(http_parser *, const char *at, size_t length)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_cb(http_parser *)
 * int http_cb(http_parser *)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_cb(http_parser *)
 * int http_cb(http_parser *)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! int http_cb(http_parser *)
 * int http_cb(http_parser *)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! void transaction_cb_t(spi_transaction_t *trans)
 * void transaction_cb_t(spi_transaction_t *trans)
 */
    

/*
 * Function NOT generated:
 * Callback: user_data NOT FOUND! void transaction_cb_t(spi_transaction_t *trans)
 * void transaction_cb_t(spi_transaction_t *trans)
 */
    


/*
 * espidf module definitions
 */

STATIC const mp_rom_map_elem_t espidf_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_espidf) },
    
    { MP_ROM_QSTR(MP_QSTR_dhcps_router_enabled), MP_ROM_PTR(&mp_dhcps_router_enabled_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_dns_enabled), MP_ROM_PTR(&mp_dhcps_dns_enabled_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_get_idf_version), MP_ROM_PTR(&mp_esp_get_idf_version_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPH0645_WORKAROUND), MP_ROM_PTR(&mp_SPH0645_WORKAROUND_obj) },
    { MP_ROM_QSTR(MP_QSTR_get_ccount), MP_ROM_PTR(&mp_get_ccount_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_clk_slowclk_cal_get), MP_ROM_PTR(&mp_esp_clk_slowclk_cal_get_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_clk_slowclk_cal_set), MP_ROM_PTR(&mp_esp_clk_slowclk_cal_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_clk_cpu_freq), MP_ROM_PTR(&mp_esp_clk_cpu_freq_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_clk_apb_freq), MP_ROM_PTR(&mp_esp_clk_apb_freq_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_clk_xtal_freq), MP_ROM_PTR(&mp_esp_clk_xtal_freq_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_clk_rtc_time), MP_ROM_PTR(&mp_esp_clk_rtc_time_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_err_to_name), MP_ROM_PTR(&mp_esp_err_to_name_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_err_to_name_r), MP_ROM_PTR(&mp_esp_err_to_name_r_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_init), MP_ROM_PTR(&mp_gpio_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_output_set), MP_ROM_PTR(&mp_gpio_output_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_output_set_high), MP_ROM_PTR(&mp_gpio_output_set_high_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_input_get), MP_ROM_PTR(&mp_gpio_input_get_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_input_get_high), MP_ROM_PTR(&mp_gpio_input_get_high_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_handler_register), MP_ROM_PTR(&mp_gpio_intr_handler_register_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_pending), MP_ROM_PTR(&mp_gpio_intr_pending_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_pending_high), MP_ROM_PTR(&mp_gpio_intr_pending_high_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_ack), MP_ROM_PTR(&mp_gpio_intr_ack_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_ack_high), MP_ROM_PTR(&mp_gpio_intr_ack_high_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pin_wakeup_enable), MP_ROM_PTR(&mp_gpio_pin_wakeup_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pin_wakeup_disable), MP_ROM_PTR(&mp_gpio_pin_wakeup_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_matrix_in), MP_ROM_PTR(&mp_gpio_matrix_in_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_matrix_out), MP_ROM_PTR(&mp_gpio_matrix_out_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pad_select_gpio), MP_ROM_PTR(&mp_gpio_pad_select_gpio_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pad_set_drv), MP_ROM_PTR(&mp_gpio_pad_set_drv_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pad_pullup), MP_ROM_PTR(&mp_gpio_pad_pullup_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pad_pulldown), MP_ROM_PTR(&mp_gpio_pad_pulldown_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pad_unhold), MP_ROM_PTR(&mp_gpio_pad_unhold_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pad_hold), MP_ROM_PTR(&mp_gpio_pad_hold_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_mark_shared), MP_ROM_PTR(&mp_esp_intr_mark_shared_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_reserve), MP_ROM_PTR(&mp_esp_intr_reserve_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_alloc), MP_ROM_PTR(&mp_esp_intr_alloc_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_alloc_intrstatus), MP_ROM_PTR(&mp_esp_intr_alloc_intrstatus_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_free), MP_ROM_PTR(&mp_esp_intr_free_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_get_cpu), MP_ROM_PTR(&mp_esp_intr_get_cpu_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_get_intno), MP_ROM_PTR(&mp_esp_intr_get_intno_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_disable), MP_ROM_PTR(&mp_esp_intr_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_enable), MP_ROM_PTR(&mp_esp_intr_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_set_in_iram), MP_ROM_PTR(&mp_esp_intr_set_in_iram_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_noniram_disable), MP_ROM_PTR(&mp_esp_intr_noniram_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_intr_noniram_enable), MP_ROM_PTR(&mp_esp_intr_noniram_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_reset_pin), MP_ROM_PTR(&mp_gpio_reset_pin_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_set_intr_type), MP_ROM_PTR(&mp_gpio_set_intr_type_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_enable), MP_ROM_PTR(&mp_gpio_intr_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_intr_disable), MP_ROM_PTR(&mp_gpio_intr_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_set_level), MP_ROM_PTR(&mp_gpio_set_level_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_get_level), MP_ROM_PTR(&mp_gpio_get_level_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_set_direction), MP_ROM_PTR(&mp_gpio_set_direction_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_set_pull_mode), MP_ROM_PTR(&mp_gpio_set_pull_mode_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_wakeup_enable), MP_ROM_PTR(&mp_gpio_wakeup_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_wakeup_disable), MP_ROM_PTR(&mp_gpio_wakeup_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_isr_register), MP_ROM_PTR(&mp_gpio_isr_register_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pullup_en), MP_ROM_PTR(&mp_gpio_pullup_en_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pullup_dis), MP_ROM_PTR(&mp_gpio_pullup_dis_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pulldown_en), MP_ROM_PTR(&mp_gpio_pulldown_en_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_pulldown_dis), MP_ROM_PTR(&mp_gpio_pulldown_dis_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_install_isr_service), MP_ROM_PTR(&mp_gpio_install_isr_service_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_uninstall_isr_service), MP_ROM_PTR(&mp_gpio_uninstall_isr_service_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_isr_handler_add), MP_ROM_PTR(&mp_gpio_isr_handler_add_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_isr_handler_remove), MP_ROM_PTR(&mp_gpio_isr_handler_remove_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_set_drive_capability), MP_ROM_PTR(&mp_gpio_set_drive_capability_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_get_drive_capability), MP_ROM_PTR(&mp_gpio_get_drive_capability_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_hold_en), MP_ROM_PTR(&mp_gpio_hold_en_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_hold_dis), MP_ROM_PTR(&mp_gpio_hold_dis_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_deep_sleep_hold_en), MP_ROM_PTR(&mp_gpio_deep_sleep_hold_en_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_deep_sleep_hold_dis), MP_ROM_PTR(&mp_gpio_deep_sleep_hold_dis_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_iomux_in), MP_ROM_PTR(&mp_gpio_iomux_in_obj) },
    { MP_ROM_QSTR(MP_QSTR_gpio_iomux_out), MP_ROM_PTR(&mp_gpio_iomux_out_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_bus_initialize), MP_ROM_PTR(&mp_spi_bus_initialize_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_bus_free), MP_ROM_PTR(&mp_spi_bus_free_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_bus_add_device), MP_ROM_PTR(&mp_spi_bus_add_device_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_bus_remove_device), MP_ROM_PTR(&mp_spi_bus_remove_device_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_queue_trans), MP_ROM_PTR(&mp_spi_device_queue_trans_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_get_trans_result), MP_ROM_PTR(&mp_spi_device_get_trans_result_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_transmit), MP_ROM_PTR(&mp_spi_device_transmit_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_polling_start), MP_ROM_PTR(&mp_spi_device_polling_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_polling_end), MP_ROM_PTR(&mp_spi_device_polling_end_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_polling_transmit), MP_ROM_PTR(&mp_spi_device_polling_transmit_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_acquire_bus), MP_ROM_PTR(&mp_spi_device_acquire_bus_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_release_bus), MP_ROM_PTR(&mp_spi_device_release_bus_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_cal_clock), MP_ROM_PTR(&mp_spi_cal_clock_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_get_actual_clock), MP_ROM_PTR(&mp_spi_get_actual_clock_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_get_timing), MP_ROM_PTR(&mp_spi_get_timing_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_get_freq_limit), MP_ROM_PTR(&mp_spi_get_freq_limit_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_malloc), MP_ROM_PTR(&mp_multi_heap_malloc_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_free), MP_ROM_PTR(&mp_multi_heap_free_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_realloc), MP_ROM_PTR(&mp_multi_heap_realloc_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_get_allocated_size), MP_ROM_PTR(&mp_multi_heap_get_allocated_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_register), MP_ROM_PTR(&mp_multi_heap_register_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_set_lock), MP_ROM_PTR(&mp_multi_heap_set_lock_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_dump), MP_ROM_PTR(&mp_multi_heap_dump_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_check), MP_ROM_PTR(&mp_multi_heap_check_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_free_size), MP_ROM_PTR(&mp_multi_heap_free_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_minimum_free_size), MP_ROM_PTR(&mp_multi_heap_minimum_free_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_get_info), MP_ROM_PTR(&mp_multi_heap_get_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_malloc), MP_ROM_PTR(&mp_heap_caps_malloc_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_free), MP_ROM_PTR(&mp_heap_caps_free_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_realloc), MP_ROM_PTR(&mp_heap_caps_realloc_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_calloc), MP_ROM_PTR(&mp_heap_caps_calloc_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_get_free_size), MP_ROM_PTR(&mp_heap_caps_get_free_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_get_minimum_free_size), MP_ROM_PTR(&mp_heap_caps_get_minimum_free_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_get_largest_free_block), MP_ROM_PTR(&mp_heap_caps_get_largest_free_block_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_get_info), MP_ROM_PTR(&mp_heap_caps_get_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_print_heap_info), MP_ROM_PTR(&mp_heap_caps_print_heap_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_check_integrity_all), MP_ROM_PTR(&mp_heap_caps_check_integrity_all_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_check_integrity), MP_ROM_PTR(&mp_heap_caps_check_integrity_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_check_integrity_addr), MP_ROM_PTR(&mp_heap_caps_check_integrity_addr_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_malloc_extmem_enable), MP_ROM_PTR(&mp_heap_caps_malloc_extmem_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_dump), MP_ROM_PTR(&mp_heap_caps_dump_obj) },
    { MP_ROM_QSTR(MP_QSTR_heap_caps_dump_all), MP_ROM_PTR(&mp_heap_caps_dump_all_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_run), MP_ROM_PTR(&mp_ets_run_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_set_idle_cb), MP_ROM_PTR(&mp_ets_set_idle_cb_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_task), MP_ROM_PTR(&mp_ets_task_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_post), MP_ROM_PTR(&mp_ets_post_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_set_user_start), MP_ROM_PTR(&mp_ets_set_user_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_set_startup_callback), MP_ROM_PTR(&mp_ets_set_startup_callback_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_set_appcpu_boot_addr), MP_ROM_PTR(&mp_ets_set_appcpu_boot_addr_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_unpack_flash_code_legacy), MP_ROM_PTR(&mp_ets_unpack_flash_code_legacy_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_unpack_flash_code), MP_ROM_PTR(&mp_ets_unpack_flash_code_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_write_char_uart), MP_ROM_PTR(&mp_ets_write_char_uart_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_install_putc1), MP_ROM_PTR(&mp_ets_install_putc1_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_install_putc2), MP_ROM_PTR(&mp_ets_install_putc2_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_install_uart_printf), MP_ROM_PTR(&mp_ets_install_uart_printf_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_init), MP_ROM_PTR(&mp_ets_timer_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_deinit), MP_ROM_PTR(&mp_ets_timer_deinit_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_arm), MP_ROM_PTR(&mp_ets_timer_arm_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_arm_us), MP_ROM_PTR(&mp_ets_timer_arm_us_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_disarm), MP_ROM_PTR(&mp_ets_timer_disarm_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_setfn), MP_ROM_PTR(&mp_ets_timer_setfn_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_timer_done), MP_ROM_PTR(&mp_ets_timer_done_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_delay_us), MP_ROM_PTR(&mp_ets_delay_us_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_update_cpu_frequency), MP_ROM_PTR(&mp_ets_update_cpu_frequency_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_update_cpu_frequency_rom), MP_ROM_PTR(&mp_ets_update_cpu_frequency_rom_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_get_cpu_frequency), MP_ROM_PTR(&mp_ets_get_cpu_frequency_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_get_xtal_scale), MP_ROM_PTR(&mp_ets_get_xtal_scale_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_get_detected_xtal_freq), MP_ROM_PTR(&mp_ets_get_detected_xtal_freq_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_isr_attach), MP_ROM_PTR(&mp_ets_isr_attach_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_isr_mask), MP_ROM_PTR(&mp_ets_isr_mask_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_isr_unmask), MP_ROM_PTR(&mp_ets_isr_unmask_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_intr_lock), MP_ROM_PTR(&mp_ets_intr_lock_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_intr_unlock), MP_ROM_PTR(&mp_ets_intr_unlock_obj) },
    { MP_ROM_QSTR(MP_QSTR_ets_waiti0), MP_ROM_PTR(&mp_ets_waiti0_obj) },
    { MP_ROM_QSTR(MP_QSTR_intr_matrix_set), MP_ROM_PTR(&mp_intr_matrix_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_level_set), MP_ROM_PTR(&mp_esp_log_level_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_set_vprintf), MP_ROM_PTR(&mp_esp_log_set_vprintf_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_timestamp), MP_ROM_PTR(&mp_esp_log_timestamp_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_early_timestamp), MP_ROM_PTR(&mp_esp_log_early_timestamp_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_buffer_hex_internal), MP_ROM_PTR(&mp_esp_log_buffer_hex_internal_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_buffer_char_internal), MP_ROM_PTR(&mp_esp_log_buffer_char_internal_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_log_buffer_hexdump_internal), MP_ROM_PTR(&mp_esp_log_buffer_hexdump_internal_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc1_pad_get_io_num), MP_ROM_PTR(&mp_adc1_pad_get_io_num_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc1_config_width), MP_ROM_PTR(&mp_adc1_config_width_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_set_data_width), MP_ROM_PTR(&mp_adc_set_data_width_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc1_config_channel_atten), MP_ROM_PTR(&mp_adc1_config_channel_atten_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc1_get_raw), MP_ROM_PTR(&mp_adc1_get_raw_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_power_on), MP_ROM_PTR(&mp_adc_power_on_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_power_off), MP_ROM_PTR(&mp_adc_power_off_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_gpio_init), MP_ROM_PTR(&mp_adc_gpio_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_set_data_inv), MP_ROM_PTR(&mp_adc_set_data_inv_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_set_clk_div), MP_ROM_PTR(&mp_adc_set_clk_div_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_set_i2s_data_source), MP_ROM_PTR(&mp_adc_set_i2s_data_source_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc_i2s_mode_init), MP_ROM_PTR(&mp_adc_i2s_mode_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc1_ulp_enable), MP_ROM_PTR(&mp_adc1_ulp_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_hall_sensor_read), MP_ROM_PTR(&mp_hall_sensor_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc2_pad_get_io_num), MP_ROM_PTR(&mp_adc2_pad_get_io_num_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc2_config_channel_atten), MP_ROM_PTR(&mp_adc2_config_channel_atten_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc2_get_raw), MP_ROM_PTR(&mp_adc2_get_raw_obj) },
    { MP_ROM_QSTR(MP_QSTR_adc2_vref_to_gpio), MP_ROM_PTR(&mp_adc2_vref_to_gpio_obj) },
    { MP_ROM_QSTR(MP_QSTR_periph_module_enable), MP_ROM_PTR(&mp_periph_module_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_periph_module_disable), MP_ROM_PTR(&mp_periph_module_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_periph_module_reset), MP_ROM_PTR(&mp_periph_module_reset_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_set_pin), MP_ROM_PTR(&mp_i2s_set_pin_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_set_pdm_rx_down_sample), MP_ROM_PTR(&mp_i2s_set_pdm_rx_down_sample_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_set_dac_mode), MP_ROM_PTR(&mp_i2s_set_dac_mode_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_driver_install), MP_ROM_PTR(&mp_i2s_driver_install_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_driver_uninstall), MP_ROM_PTR(&mp_i2s_driver_uninstall_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_write), MP_ROM_PTR(&mp_i2s_write_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_write_expand), MP_ROM_PTR(&mp_i2s_write_expand_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_read), MP_ROM_PTR(&mp_i2s_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_set_sample_rates), MP_ROM_PTR(&mp_i2s_set_sample_rates_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_stop), MP_ROM_PTR(&mp_i2s_stop_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_start), MP_ROM_PTR(&mp_i2s_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_zero_dma_buffer), MP_ROM_PTR(&mp_i2s_zero_dma_buffer_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_set_clk), MP_ROM_PTR(&mp_i2s_set_clk_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_get_clk), MP_ROM_PTR(&mp_i2s_get_clk_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_set_adc_mode), MP_ROM_PTR(&mp_i2s_set_adc_mode_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_adc_enable), MP_ROM_PTR(&mp_i2s_adc_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_i2s_adc_disable), MP_ROM_PTR(&mp_i2s_adc_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_get_counter_value), MP_ROM_PTR(&mp_pcnt_get_counter_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_counter_pause), MP_ROM_PTR(&mp_pcnt_counter_pause_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_counter_resume), MP_ROM_PTR(&mp_pcnt_counter_resume_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_counter_clear), MP_ROM_PTR(&mp_pcnt_counter_clear_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_intr_enable), MP_ROM_PTR(&mp_pcnt_intr_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_intr_disable), MP_ROM_PTR(&mp_pcnt_intr_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_event_enable), MP_ROM_PTR(&mp_pcnt_event_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_event_disable), MP_ROM_PTR(&mp_pcnt_event_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_set_event_value), MP_ROM_PTR(&mp_pcnt_set_event_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_get_event_value), MP_ROM_PTR(&mp_pcnt_get_event_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_isr_register), MP_ROM_PTR(&mp_pcnt_isr_register_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_set_pin), MP_ROM_PTR(&mp_pcnt_set_pin_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_filter_enable), MP_ROM_PTR(&mp_pcnt_filter_enable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_filter_disable), MP_ROM_PTR(&mp_pcnt_filter_disable_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_set_filter_value), MP_ROM_PTR(&mp_pcnt_set_filter_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_get_filter_value), MP_ROM_PTR(&mp_pcnt_get_filter_value_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_set_mode), MP_ROM_PTR(&mp_pcnt_set_mode_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_isr_handler_add), MP_ROM_PTR(&mp_pcnt_isr_handler_add_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_isr_service_install), MP_ROM_PTR(&mp_pcnt_isr_service_install_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_isr_service_uninstall), MP_ROM_PTR(&mp_pcnt_isr_service_uninstall_obj) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_isr_handler_remove), MP_ROM_PTR(&mp_pcnt_isr_handler_remove_obj) },
    { MP_ROM_QSTR(MP_QSTR_xt_clock_freq), MP_ROM_PTR(&mp_xt_clock_freq_obj) },
    { MP_ROM_QSTR(MP_QSTR_vPortCleanUpTCB), MP_ROM_PTR(&mp_vPortCleanUpTCB_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_register_shutdown_handler), MP_ROM_PTR(&mp_esp_register_shutdown_handler_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_unregister_shutdown_handler), MP_ROM_PTR(&mp_esp_unregister_shutdown_handler_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_restart), MP_ROM_PTR(&mp_esp_restart_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_reset_reason), MP_ROM_PTR(&mp_esp_reset_reason_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_get_free_heap_size), MP_ROM_PTR(&mp_esp_get_free_heap_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_get_minimum_free_heap_size), MP_ROM_PTR(&mp_esp_get_minimum_free_heap_size_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_random), MP_ROM_PTR(&mp_esp_random_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_fill_random), MP_ROM_PTR(&mp_esp_fill_random_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_base_mac_addr_set), MP_ROM_PTR(&mp_esp_base_mac_addr_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_base_mac_addr_get), MP_ROM_PTR(&mp_esp_base_mac_addr_get_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_efuse_mac_get_custom), MP_ROM_PTR(&mp_esp_efuse_mac_get_custom_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_efuse_mac_get_default), MP_ROM_PTR(&mp_esp_efuse_mac_get_default_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_read_mac), MP_ROM_PTR(&mp_esp_read_mac_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_derive_local_mac), MP_ROM_PTR(&mp_esp_derive_local_mac_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcp_ip_addr_restore), MP_ROM_PTR(&mp_dhcp_ip_addr_restore_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcp_ip_addr_store), MP_ROM_PTR(&mp_dhcp_ip_addr_store_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcp_ip_addr_erase), MP_ROM_PTR(&mp_dhcp_ip_addr_erase_obj) },
    { MP_ROM_QSTR(MP_QSTR_lwip_htons), MP_ROM_PTR(&mp_lwip_htons_obj) },
    { MP_ROM_QSTR(MP_QSTR_lwip_htonl), MP_ROM_PTR(&mp_lwip_htonl_obj) },
    { MP_ROM_QSTR(MP_QSTR_lwip_itoa), MP_ROM_PTR(&mp_lwip_itoa_obj) },
    { MP_ROM_QSTR(MP_QSTR_lwip_strnicmp), MP_ROM_PTR(&mp_lwip_strnicmp_obj) },
    { MP_ROM_QSTR(MP_QSTR_lwip_stricmp), MP_ROM_PTR(&mp_lwip_stricmp_obj) },
    { MP_ROM_QSTR(MP_QSTR_lwip_strnstr), MP_ROM_PTR(&mp_lwip_strnstr_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip4_addr_isbroadcast_u32), MP_ROM_PTR(&mp_ip4_addr_isbroadcast_u32_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip4_addr_netmask_valid), MP_ROM_PTR(&mp_ip4_addr_netmask_valid_obj) },
    { MP_ROM_QSTR(MP_QSTR_ipaddr_addr), MP_ROM_PTR(&mp_ipaddr_addr_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip4addr_aton), MP_ROM_PTR(&mp_ip4addr_aton_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip4addr_ntoa), MP_ROM_PTR(&mp_ip4addr_ntoa_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip4addr_ntoa_r), MP_ROM_PTR(&mp_ip4addr_ntoa_r_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip6addr_aton), MP_ROM_PTR(&mp_ip6addr_aton_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip6addr_ntoa), MP_ROM_PTR(&mp_ip6addr_ntoa_obj) },
    { MP_ROM_QSTR(MP_QSTR_ip6addr_ntoa_r), MP_ROM_PTR(&mp_ip6addr_ntoa_r_obj) },
    { MP_ROM_QSTR(MP_QSTR_ipaddr_aton), MP_ROM_PTR(&mp_ipaddr_aton_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_start), MP_ROM_PTR(&mp_dhcps_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_stop), MP_ROM_PTR(&mp_dhcps_stop_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_option_info), MP_ROM_PTR(&mp_dhcps_option_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_set_option_info), MP_ROM_PTR(&mp_dhcps_set_option_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcp_search_ip_on_mac), MP_ROM_PTR(&mp_dhcp_search_ip_on_mac_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_dns_setserver), MP_ROM_PTR(&mp_dhcps_dns_setserver_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_dns_getserver), MP_ROM_PTR(&mp_dhcps_dns_getserver_obj) },
    { MP_ROM_QSTR(MP_QSTR_dhcps_set_new_lease_cb), MP_ROM_PTR(&mp_dhcps_set_new_lease_cb_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_init), MP_ROM_PTR(&mp_tcpip_adapter_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_eth_start), MP_ROM_PTR(&mp_tcpip_adapter_eth_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_sta_start), MP_ROM_PTR(&mp_tcpip_adapter_sta_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_ap_start), MP_ROM_PTR(&mp_tcpip_adapter_ap_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_stop), MP_ROM_PTR(&mp_tcpip_adapter_stop_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_up), MP_ROM_PTR(&mp_tcpip_adapter_up_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_down), MP_ROM_PTR(&mp_tcpip_adapter_down_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_ip_info), MP_ROM_PTR(&mp_tcpip_adapter_get_ip_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_set_ip_info), MP_ROM_PTR(&mp_tcpip_adapter_set_ip_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_set_dns_info), MP_ROM_PTR(&mp_tcpip_adapter_set_dns_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_dns_info), MP_ROM_PTR(&mp_tcpip_adapter_get_dns_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_old_ip_info), MP_ROM_PTR(&mp_tcpip_adapter_get_old_ip_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_set_old_ip_info), MP_ROM_PTR(&mp_tcpip_adapter_set_old_ip_info_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_create_ip6_linklocal), MP_ROM_PTR(&mp_tcpip_adapter_create_ip6_linklocal_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_ip6_linklocal), MP_ROM_PTR(&mp_tcpip_adapter_get_ip6_linklocal_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_ip6_global), MP_ROM_PTR(&mp_tcpip_adapter_get_ip6_global_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcps_get_status), MP_ROM_PTR(&mp_tcpip_adapter_dhcps_get_status_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcps_option), MP_ROM_PTR(&mp_tcpip_adapter_dhcps_option_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcps_start), MP_ROM_PTR(&mp_tcpip_adapter_dhcps_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcps_stop), MP_ROM_PTR(&mp_tcpip_adapter_dhcps_stop_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcpc_get_status), MP_ROM_PTR(&mp_tcpip_adapter_dhcpc_get_status_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcpc_option), MP_ROM_PTR(&mp_tcpip_adapter_dhcpc_option_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcpc_start), MP_ROM_PTR(&mp_tcpip_adapter_dhcpc_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dhcpc_stop), MP_ROM_PTR(&mp_tcpip_adapter_dhcpc_stop_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_eth_input), MP_ROM_PTR(&mp_tcpip_adapter_eth_input_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_sta_input), MP_ROM_PTR(&mp_tcpip_adapter_sta_input_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_ap_input), MP_ROM_PTR(&mp_tcpip_adapter_ap_input_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_esp_if), MP_ROM_PTR(&mp_tcpip_adapter_get_esp_if_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_sta_list), MP_ROM_PTR(&mp_tcpip_adapter_get_sta_list_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_set_hostname), MP_ROM_PTR(&mp_tcpip_adapter_set_hostname_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_hostname), MP_ROM_PTR(&mp_tcpip_adapter_get_hostname_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_netif), MP_ROM_PTR(&mp_tcpip_adapter_get_netif_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_is_netif_up), MP_ROM_PTR(&mp_tcpip_adapter_is_netif_up_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_test_start), MP_ROM_PTR(&mp_tcpip_adapter_test_start_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_set_default_eth_handlers), MP_ROM_PTR(&mp_tcpip_adapter_set_default_eth_handlers_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_clear_default_eth_handlers), MP_ROM_PTR(&mp_tcpip_adapter_clear_default_eth_handlers_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_set_default_wifi_handlers), MP_ROM_PTR(&mp_tcpip_adapter_set_default_wifi_handlers_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_clear_default_wifi_handlers), MP_ROM_PTR(&mp_tcpip_adapter_clear_default_wifi_handlers_obj) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_get_netif_index), MP_ROM_PTR(&mp_tcpip_adapter_get_netif_index_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_init), MP_ROM_PTR(&mp_mdns_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_free), MP_ROM_PTR(&mp_mdns_free_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_hostname_set), MP_ROM_PTR(&mp_mdns_hostname_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_instance_name_set), MP_ROM_PTR(&mp_mdns_instance_name_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_add), MP_ROM_PTR(&mp_mdns_service_add_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_remove), MP_ROM_PTR(&mp_mdns_service_remove_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_instance_name_set), MP_ROM_PTR(&mp_mdns_service_instance_name_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_port_set), MP_ROM_PTR(&mp_mdns_service_port_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_txt_set), MP_ROM_PTR(&mp_mdns_service_txt_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_txt_item_set), MP_ROM_PTR(&mp_mdns_service_txt_item_set_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_txt_item_remove), MP_ROM_PTR(&mp_mdns_service_txt_item_remove_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_service_remove_all), MP_ROM_PTR(&mp_mdns_service_remove_all_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_query), MP_ROM_PTR(&mp_mdns_query_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_query_ptr), MP_ROM_PTR(&mp_mdns_query_ptr_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_query_srv), MP_ROM_PTR(&mp_mdns_query_srv_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_query_txt), MP_ROM_PTR(&mp_mdns_query_txt_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_query_a), MP_ROM_PTR(&mp_mdns_query_a_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_query_aaaa), MP_ROM_PTR(&mp_mdns_query_aaaa_obj) },
    { MP_ROM_QSTR(MP_QSTR_mdns_handle_system_event), MP_ROM_PTR(&mp_mdns_handle_system_event_obj) },
    { MP_ROM_QSTR(MP_QSTR_http_parser_version), MP_ROM_PTR(&mp_http_parser_version_obj) },
    { MP_ROM_QSTR(MP_QSTR_http_method_str), MP_ROM_PTR(&mp_http_method_str_obj) },
    { MP_ROM_QSTR(MP_QSTR_http_errno_name), MP_ROM_PTR(&mp_http_errno_name_obj) },
    { MP_ROM_QSTR(MP_QSTR_http_errno_description), MP_ROM_PTR(&mp_http_errno_description_obj) },
    { MP_ROM_QSTR(MP_QSTR_http_parser_url_init), MP_ROM_PTR(&mp_http_parser_url_init_obj) },
    { MP_ROM_QSTR(MP_QSTR_http_parser_parse_url), MP_ROM_PTR(&mp_http_parser_parse_url_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_perform), MP_ROM_PTR(&mp_esp_http_client_perform_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_url), MP_ROM_PTR(&mp_esp_http_client_set_url_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_post_field), MP_ROM_PTR(&mp_esp_http_client_set_post_field_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_post_field), MP_ROM_PTR(&mp_esp_http_client_get_post_field_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_header), MP_ROM_PTR(&mp_esp_http_client_set_header_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_header), MP_ROM_PTR(&mp_esp_http_client_get_header_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_username), MP_ROM_PTR(&mp_esp_http_client_get_username_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_username), MP_ROM_PTR(&mp_esp_http_client_set_username_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_password), MP_ROM_PTR(&mp_esp_http_client_get_password_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_password), MP_ROM_PTR(&mp_esp_http_client_set_password_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_method), MP_ROM_PTR(&mp_esp_http_client_set_method_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_delete_header), MP_ROM_PTR(&mp_esp_http_client_delete_header_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_open), MP_ROM_PTR(&mp_esp_http_client_open_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_write), MP_ROM_PTR(&mp_esp_http_client_write_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_fetch_headers), MP_ROM_PTR(&mp_esp_http_client_fetch_headers_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_is_chunked_response), MP_ROM_PTR(&mp_esp_http_client_is_chunked_response_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_read), MP_ROM_PTR(&mp_esp_http_client_read_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_status_code), MP_ROM_PTR(&mp_esp_http_client_get_status_code_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_content_length), MP_ROM_PTR(&mp_esp_http_client_get_content_length_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_close), MP_ROM_PTR(&mp_esp_http_client_close_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_cleanup), MP_ROM_PTR(&mp_esp_http_client_cleanup_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_get_transport_type), MP_ROM_PTR(&mp_esp_http_client_get_transport_type_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_set_redirection), MP_ROM_PTR(&mp_esp_http_client_set_redirection_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_add_auth), MP_ROM_PTR(&mp_esp_http_client_add_auth_obj) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_is_complete_data_received), MP_ROM_PTR(&mp_esp_http_client_is_complete_data_received_obj) },
    { MP_ROM_QSTR(MP_QSTR_task_delay_ms), MP_ROM_PTR(&mp_task_delay_ms_obj) },
    { MP_ROM_QSTR(MP_QSTR_spi_transaction_set_cb), MP_ROM_PTR(&mp_spi_transaction_set_cb_obj) },
    { MP_ROM_QSTR(MP_QSTR_ex_spi_pre_cb_isr), MP_ROM_PTR(&mp_ex_spi_pre_cb_isr_obj) },
    { MP_ROM_QSTR(MP_QSTR_ex_spi_post_cb_isr), MP_ROM_PTR(&mp_ex_spi_post_cb_isr_obj) },
    { MP_ROM_QSTR(MP_QSTR_ili9xxx_post_cb_isr), MP_ROM_PTR(&mp_ili9xxx_post_cb_isr_obj) },
    { MP_ROM_QSTR(MP_QSTR_ili9xxx_flush), MP_ROM_PTR(&mp_ili9xxx_flush_obj) },
    
    { MP_ROM_QSTR(MP_QSTR_IP6), MP_ROM_PTR(&mp_IP6_type) },
    { MP_ROM_QSTR(MP_QSTR_IPADDR_TYPE), MP_ROM_PTR(&mp_IPADDR_TYPE_type) },
    { MP_ROM_QSTR(MP_QSTR_OFFER), MP_ROM_PTR(&mp_OFFER_type) },
    { MP_ROM_QSTR(MP_QSTR_HTTP), MP_ROM_PTR(&mp_HTTP_type) },
    { MP_ROM_QSTR(MP_QSTR_F), MP_ROM_PTR(&mp_F_type) },
    { MP_ROM_QSTR(MP_QSTR_HPE), MP_ROM_PTR(&mp_HPE_type) },
    { MP_ROM_QSTR(MP_QSTR_UF), MP_ROM_PTR(&mp_UF_type) },
    { MP_ROM_QSTR(MP_QSTR_portMAX), MP_ROM_PTR(&mp_ENUM_portMAX_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_PIN_NO), MP_ROM_PTR(&mp_ENUM_I2S_PIN_NO_type) },
    { MP_ROM_QSTR(MP_QSTR_SPI_DEVICE), MP_ROM_PTR(&mp_ENUM_SPI_DEVICE_type) },
    { MP_ROM_QSTR(MP_QSTR_SPI_TRANS), MP_ROM_PTR(&mp_ENUM_SPI_TRANS_type) },
    { MP_ROM_QSTR(MP_QSTR_MALLOC_CAP), MP_ROM_PTR(&mp_ENUM_MALLOC_CAP_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_PIN_INTR), MP_ROM_PTR(&mp_GPIO_PIN_INTR_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_NUM), MP_ROM_PTR(&mp_GPIO_NUM_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_INTR), MP_ROM_PTR(&mp_GPIO_INTR_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_MODE), MP_ROM_PTR(&mp_GPIO_MODE_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_PULLUP), MP_ROM_PTR(&mp_GPIO_PULLUP_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_PULLDOWN), MP_ROM_PTR(&mp_GPIO_PULLDOWN_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO), MP_ROM_PTR(&mp_GPIO_type) },
    { MP_ROM_QSTR(MP_QSTR_GPIO_DRIVE_CAP), MP_ROM_PTR(&mp_GPIO_DRIVE_CAP_type) },
    { MP_ROM_QSTR(MP_QSTR_PERIPH), MP_ROM_PTR(&mp_PERIPH_type) },
    { MP_ROM_QSTR(MP_QSTR_ETS), MP_ROM_PTR(&mp_ETS_type) },
    { MP_ROM_QSTR(MP_QSTR_ESP_LOG), MP_ROM_PTR(&mp_ESP_LOG_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC_ATTEN), MP_ROM_PTR(&mp_ADC_ATTEN_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC_WIDTH), MP_ROM_PTR(&mp_ADC_WIDTH_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC1_CHANNEL), MP_ROM_PTR(&mp_ADC1_CHANNEL_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC2_CHANNEL), MP_ROM_PTR(&mp_ADC2_CHANNEL_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC_CHANNEL), MP_ROM_PTR(&mp_ADC_CHANNEL_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC_UNIT), MP_ROM_PTR(&mp_ADC_UNIT_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC_ENCODE), MP_ROM_PTR(&mp_ADC_ENCODE_type) },
    { MP_ROM_QSTR(MP_QSTR_ADC_I2S_DATA_SRC), MP_ROM_PTR(&mp_ADC_I2S_DATA_SRC_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_BITS_PER_SAMPLE), MP_ROM_PTR(&mp_I2S_BITS_PER_SAMPLE_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_CHANNEL), MP_ROM_PTR(&mp_I2S_CHANNEL_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_COMM_FORMAT), MP_ROM_PTR(&mp_I2S_COMM_FORMAT_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_CHANNEL_FMT), MP_ROM_PTR(&mp_I2S_CHANNEL_FMT_type) },
    { MP_ROM_QSTR(MP_QSTR_PDM_SAMPLE_RATE_RATIO), MP_ROM_PTR(&mp_PDM_SAMPLE_RATE_RATIO_type) },
    { MP_ROM_QSTR(MP_QSTR_PDM_PCM_CONV), MP_ROM_PTR(&mp_PDM_PCM_CONV_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_NUM), MP_ROM_PTR(&mp_I2S_NUM_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_MODE), MP_ROM_PTR(&mp_I2S_MODE_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_EVENT), MP_ROM_PTR(&mp_I2S_EVENT_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_DAC_CHANNEL), MP_ROM_PTR(&mp_I2S_DAC_CHANNEL_type) },
    { MP_ROM_QSTR(MP_QSTR_I2S_PDM_DSR), MP_ROM_PTR(&mp_I2S_PDM_DSR_type) },
    { MP_ROM_QSTR(MP_QSTR_PCNT_MODE), MP_ROM_PTR(&mp_PCNT_MODE_type) },
    { MP_ROM_QSTR(MP_QSTR_PCNT_COUNT), MP_ROM_PTR(&mp_PCNT_COUNT_type) },
    { MP_ROM_QSTR(MP_QSTR_PCNT_UNIT), MP_ROM_PTR(&mp_PCNT_UNIT_type) },
    { MP_ROM_QSTR(MP_QSTR_PCNT_CHANNEL), MP_ROM_PTR(&mp_PCNT_CHANNEL_type) },
    { MP_ROM_QSTR(MP_QSTR_PCNT_EVT), MP_ROM_PTR(&mp_PCNT_EVT_type) },
    { MP_ROM_QSTR(MP_QSTR_ESP_IF), MP_ROM_PTR(&mp_ESP_IF_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_MODE), MP_ROM_PTR(&mp_WIFI_MODE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_COUNTRY_POLICY), MP_ROM_PTR(&mp_WIFI_COUNTRY_POLICY_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_AUTH), MP_ROM_PTR(&mp_WIFI_AUTH_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_REASON), MP_ROM_PTR(&mp_WIFI_REASON_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_SECOND_CHAN), MP_ROM_PTR(&mp_WIFI_SECOND_CHAN_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_SCAN_TYPE), MP_ROM_PTR(&mp_WIFI_SCAN_TYPE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_CIPHER_TYPE), MP_ROM_PTR(&mp_WIFI_CIPHER_TYPE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_ANT), MP_ROM_PTR(&mp_WIFI_ANT_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI), MP_ROM_PTR(&mp_WIFI_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_CONNECT_AP_BY), MP_ROM_PTR(&mp_WIFI_CONNECT_AP_BY_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_PS), MP_ROM_PTR(&mp_WIFI_PS_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_BW), MP_ROM_PTR(&mp_WIFI_BW_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_STORAGE), MP_ROM_PTR(&mp_WIFI_STORAGE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_VND_IE_TYPE), MP_ROM_PTR(&mp_WIFI_VND_IE_TYPE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_VND_IE_ID), MP_ROM_PTR(&mp_WIFI_VND_IE_ID_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_PKT), MP_ROM_PTR(&mp_WIFI_PKT_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_ANT_MODE), MP_ROM_PTR(&mp_WIFI_ANT_MODE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_PHY_RATE), MP_ROM_PTR(&mp_WIFI_PHY_RATE_type) },
    { MP_ROM_QSTR(MP_QSTR_WIFI_EVENT), MP_ROM_PTR(&mp_WIFI_EVENT_type) },
    { MP_ROM_QSTR(MP_QSTR_WPS_FAIL_REASON), MP_ROM_PTR(&mp_WPS_FAIL_REASON_type) },
    { MP_ROM_QSTR(MP_QSTR_ESP_MAC), MP_ROM_PTR(&mp_ESP_MAC_type) },
    { MP_ROM_QSTR(MP_QSTR_ESP_RST), MP_ROM_PTR(&mp_ESP_RST_type) },
    { MP_ROM_QSTR(MP_QSTR_CHIP), MP_ROM_PTR(&mp_CHIP_type) },
    { MP_ROM_QSTR(MP_QSTR_TCPIP_ADAPTER_IF), MP_ROM_PTR(&mp_TCPIP_ADAPTER_IF_type) },
    { MP_ROM_QSTR(MP_QSTR_TCPIP_ADAPTER_DNS), MP_ROM_PTR(&mp_TCPIP_ADAPTER_DNS_type) },
    { MP_ROM_QSTR(MP_QSTR_TCPIP_ADAPTER_DHCP), MP_ROM_PTR(&mp_TCPIP_ADAPTER_DHCP_type) },
    { MP_ROM_QSTR(MP_QSTR_TCPIP_ADAPTER_OP), MP_ROM_PTR(&mp_TCPIP_ADAPTER_OP_type) },
    { MP_ROM_QSTR(MP_QSTR_TCPIP_ADAPTER), MP_ROM_PTR(&mp_TCPIP_ADAPTER_type) },
    { MP_ROM_QSTR(MP_QSTR_IP_EVENT), MP_ROM_PTR(&mp_IP_EVENT_type) },
    { MP_ROM_QSTR(MP_QSTR_MDNS_IP_PROTOCOL), MP_ROM_PTR(&mp_MDNS_IP_PROTOCOL_type) },
    { MP_ROM_QSTR(MP_QSTR_HTTP_EVENT), MP_ROM_PTR(&mp_HTTP_EVENT_type) },
    { MP_ROM_QSTR(MP_QSTR_HTTP_TRANSPORT), MP_ROM_PTR(&mp_HTTP_TRANSPORT_type) },
    { MP_ROM_QSTR(MP_QSTR_HTTP_METHOD), MP_ROM_PTR(&mp_HTTP_METHOD_type) },
    { MP_ROM_QSTR(MP_QSTR_HTTP_AUTH_TYPE), MP_ROM_PTR(&mp_HTTP_AUTH_TYPE_type) },
    { MP_ROM_QSTR(MP_QSTR_HttpStatus), MP_ROM_PTR(&mp_HttpStatus_type) },
    { MP_ROM_QSTR(MP_QSTR_SH2LIB_ERR), MP_ROM_PTR(&mp_SH2LIB_ERR_type) },
    { MP_ROM_QSTR(MP_QSTR_SH2LIB_NV_FLAG), MP_ROM_PTR(&mp_SH2LIB_NV_FLAG_type) },
    { MP_ROM_QSTR(MP_QSTR_SH2LIB_DATA_FLAG), MP_ROM_PTR(&mp_SH2LIB_DATA_FLAG_type) },
    { MP_ROM_QSTR(MP_QSTR_SH2LIB_DATA_RECV), MP_ROM_PTR(&mp_SH2LIB_DATA_RECV_type) },
    
    { MP_ROM_QSTR(MP_QSTR_C_Pointer), MP_ROM_PTR(&mp_C_Pointer_type) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_config_t), MP_ROM_PTR(&mp_esp_http_client_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_esp_http_client_event_t), MP_ROM_PTR(&mp_esp_http_client_event_t_type) },
    { MP_ROM_QSTR(MP_QSTR_spi_transaction_ext_t), MP_ROM_PTR(&mp_spi_transaction_ext_t_type) },
    { MP_ROM_QSTR(MP_QSTR_spi_transaction_t), MP_ROM_PTR(&mp_spi_transaction_t_type) },
    { MP_ROM_QSTR(MP_QSTR_gpio_config_t), MP_ROM_PTR(&mp_gpio_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_multi_heap_info_t), MP_ROM_PTR(&mp_multi_heap_info_t_type) },
    { MP_ROM_QSTR(MP_QSTR_ETSTimer), MP_ROM_PTR(&mp_ETSTimer_type) },
    { MP_ROM_QSTR(MP_QSTR_pcnt_config_t), MP_ROM_PTR(&mp_pcnt_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_esp_chip_info_t), MP_ROM_PTR(&mp_esp_chip_info_t_type) },
    { MP_ROM_QSTR(MP_QSTR_ip_addr_t), MP_ROM_PTR(&mp_ip_addr_t_type) },
    { MP_ROM_QSTR(MP_QSTR_ip_addr_u_addr_t), MP_ROM_PTR(&mp_ip_addr_u_addr_t_type) },
    { MP_ROM_QSTR(MP_QSTR_ip6_addr_t), MP_ROM_PTR(&mp_ip6_addr_t_type) },
    { MP_ROM_QSTR(MP_QSTR_ip4_addr_t), MP_ROM_PTR(&mp_ip4_addr_t_type) },
    { MP_ROM_QSTR(MP_QSTR_wifi_sta_list_t), MP_ROM_PTR(&mp_wifi_sta_list_t_type) },
    { MP_ROM_QSTR(MP_QSTR_wifi_sta_info_t), MP_ROM_PTR(&mp_wifi_sta_info_t_type) },
    { MP_ROM_QSTR(MP_QSTR_mdns_result_t), MP_ROM_PTR(&mp_mdns_result_t_type) },
    { MP_ROM_QSTR(MP_QSTR_mdns_txt_item_t), MP_ROM_PTR(&mp_mdns_txt_item_t_type) },
    { MP_ROM_QSTR(MP_QSTR_mdns_ip_addr_t), MP_ROM_PTR(&mp_mdns_ip_addr_t_type) },
    { MP_ROM_QSTR(MP_QSTR_http_parser), MP_ROM_PTR(&mp_http_parser_type) },
    { MP_ROM_QSTR(MP_QSTR_http_parser_settings), MP_ROM_PTR(&mp_http_parser_settings_type) },
    { MP_ROM_QSTR(MP_QSTR_sh2lib_handle), MP_ROM_PTR(&mp_sh2lib_handle_type) },
    { MP_ROM_QSTR(MP_QSTR_sh2lib_nv), MP_ROM_PTR(&mp_sh2lib_nv_type) },
    { MP_ROM_QSTR(MP_QSTR_spi_bus_config_t), MP_ROM_PTR(&mp_spi_bus_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_spi_device_interface_config_t), MP_ROM_PTR(&mp_spi_device_interface_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_i2s_pin_config_t), MP_ROM_PTR(&mp_i2s_pin_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_i2s_config_t), MP_ROM_PTR(&mp_i2s_config_t_type) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_ip_info_t), MP_ROM_PTR(&mp_tcpip_adapter_ip_info_t_type) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_dns_info_t), MP_ROM_PTR(&mp_tcpip_adapter_dns_info_t_type) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_sta_list_t), MP_ROM_PTR(&mp_tcpip_adapter_sta_list_t_type) },
    { MP_ROM_QSTR(MP_QSTR_tcpip_adapter_sta_info_t), MP_ROM_PTR(&mp_tcpip_adapter_sta_info_t_type) },
    
    
    { MP_ROM_QSTR(MP_QSTR_ip_addr_any_type), MP_ROM_PTR(&mp_ip_addr_any_type) },
    { MP_ROM_QSTR(MP_QSTR_ip_addr_any), MP_ROM_PTR(&mp_ip_addr_any) },
    { MP_ROM_QSTR(MP_QSTR_ip_addr_broadcast), MP_ROM_PTR(&mp_ip_addr_broadcast) },
    { MP_ROM_QSTR(MP_QSTR_ip6_addr_any), MP_ROM_PTR(&mp_ip6_addr_any) },
    
    { MP_ROM_QSTR(MP_QSTR_SPI_HOST), MP_ROM_PTR(MP_ROM_INT(ENUM_SPI_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_HSPI_HOST), MP_ROM_PTR(MP_ROM_INT(ENUM_HSPI_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_VSPI_HOST), MP_ROM_PTR(MP_ROM_INT(ENUM_VSPI_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_SPI1_HOST), MP_ROM_PTR(MP_ROM_INT(SPI1_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_SPI2_HOST), MP_ROM_PTR(MP_ROM_INT(SPI2_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_SPI3_HOST), MP_ROM_PTR(MP_ROM_INT(SPI3_HOST)) },
    { MP_ROM_QSTR(MP_QSTR_OK), MP_ROM_PTR(MP_ROM_INT(OK)) },
    { MP_ROM_QSTR(MP_QSTR_FAIL), MP_ROM_PTR(MP_ROM_INT(FAIL)) },
    { MP_ROM_QSTR(MP_QSTR_PENDING), MP_ROM_PTR(MP_ROM_INT(PENDING)) },
    { MP_ROM_QSTR(MP_QSTR_BUSY), MP_ROM_PTR(MP_ROM_INT(BUSY)) },
    { MP_ROM_QSTR(MP_QSTR_CANCEL), MP_ROM_PTR(MP_ROM_INT(CANCEL)) },
    
};


STATIC MP_DEFINE_CONST_DICT (
    mp_module_espidf_globals,
    espidf_globals_table
);

const mp_obj_module_t mp_module_espidf = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mp_module_espidf_globals
};

