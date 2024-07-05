#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "MagicLeapRaycastComponent.hpp"
#include "MagicLeapRaycastQueryParams.hpp"
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapRaycastComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.MagicLeapRaycastComponent");
    return result;
}
bool _Script_MagicLeap::MagicLeapRaycastComponent::RequestRaycast(_Script_MagicLeap::MagicLeapRaycastQueryParams& RequestParams, void*& ResultDelegate) {
    return;
}
