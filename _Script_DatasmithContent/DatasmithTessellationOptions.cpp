#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithTessellationOptions.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithTessellationOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithTessellationOptions");
    return result;
}
float& _Script_DatasmithContent::DatasmithTessellationOptions::get_NormalTolerance() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_DatasmithContent::DatasmithTessellationOptions::get_ChordTolerance() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_DatasmithContent::DatasmithTessellationOptions::get_MaxEdgeLength() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_DatasmithContent::DatasmithTessellationOptions::get_StitchingTechnique() {
    return (void*)((uintptr_t)this + 0xc);
}
