#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MagicLeapPrivilegesFunctionLibrary.hpp"
bool _Script_MagicLeapPrivileges::MagicLeapPrivilegesFunctionLibrary::CheckPrivilege(void* Privilege) {
    return;
}
_Script_CoreUObject::Class* _Script_MagicLeapPrivileges::MagicLeapPrivilegesFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary");
    return result;
}
bool _Script_MagicLeapPrivileges::MagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(void* Privilege, void*& ResultDelegate) {
    return;
}
bool _Script_MagicLeapPrivileges::MagicLeapPrivilegesFunctionLibrary::RequestPrivilege(void* Privilege) {
    return;
}
