#include "..\FUObjectArray.hpp"
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARBaseAsyncTaskBlueprintProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
    return result;
}
