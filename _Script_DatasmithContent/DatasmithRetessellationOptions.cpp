#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithRetessellationOptions.hpp"
#include "DatasmithTessellationOptions.hpp"
void* _Script_DatasmithContent::DatasmithRetessellationOptions::get_RetessellationRule() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithRetessellationOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithRetessellationOptions");
    return result;
}
