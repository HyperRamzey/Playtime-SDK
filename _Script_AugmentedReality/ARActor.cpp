#include "..\FUObjectArray.hpp"
#include "ARActor.hpp"
#include "ARComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARActor");
    return result;
}
_Script_AugmentedReality::ARComponent* _Script_AugmentedReality::ARActor::AddARComponent(void* InComponentClass, _Script_CoreUObject::Guid& NativeID) {
    return;
}
