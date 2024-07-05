#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParameterDefinitionsSubscription.hpp"
_Script_CoreUObject::Class* _Script_Niagara::ParameterDefinitionsSubscription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.ParameterDefinitionsSubscription");
    return result;
}
