#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BrushStampData.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::BrushStampData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/InteractiveToolsFramework.BrushStampData");
    return result;
}
