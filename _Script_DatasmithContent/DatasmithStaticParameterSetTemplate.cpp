#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithStaticParameterSetTemplate.hpp"
void* _Script_DatasmithContent::DatasmithStaticParameterSetTemplate::get_StaticSwitchParameters() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticParameterSetTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate");
    return result;
}
