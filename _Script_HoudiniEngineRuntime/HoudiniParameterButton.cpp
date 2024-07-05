#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterButton.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterButton::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterButton");
    return result;
}
