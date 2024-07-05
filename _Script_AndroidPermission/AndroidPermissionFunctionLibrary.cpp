#include "..\FUObjectArray.hpp"
#include "AndroidPermissionCallbackProxy.hpp"
#include "AndroidPermissionFunctionLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AndroidPermission::AndroidPermissionFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary");
    return result;
}
bool _Script_AndroidPermission::AndroidPermissionFunctionLibrary::CheckPermission(void* permission) {
    return;
}
_Script_AndroidPermission::AndroidPermissionCallbackProxy* _Script_AndroidPermission::AndroidPermissionFunctionLibrary::AcquirePermissions(void*& Permissions) {
    return;
}
