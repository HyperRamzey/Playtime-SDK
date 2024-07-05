#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BrushStampIndicatorBuilder.hpp"
#include "InteractiveGizmoBuilder.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::BrushStampIndicatorBuilder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder");
    return result;
}
