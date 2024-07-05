#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshSurfacePointTool.hpp"
#include "SingleSelectionTool.hpp"
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::MeshSurfacePointTool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.MeshSurfacePointTool");
    return result;
}
