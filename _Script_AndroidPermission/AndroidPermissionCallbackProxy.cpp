#include "..\FUObjectArray.hpp"
#include "AndroidPermissionCallbackProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AndroidPermission::AndroidPermissionCallbackProxy::get_OnPermissionsGrantedDynamicDelegate() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AndroidPermission::AndroidPermissionCallbackProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AndroidPermission.AndroidPermissionCallbackProxy");
    return result;
}
