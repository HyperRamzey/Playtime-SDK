#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ListViewDesignerPreviewItem.hpp"
_Script_CoreUObject::Class* _Script_UMG::ListViewDesignerPreviewItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ListViewDesignerPreviewItem");
    return result;
}