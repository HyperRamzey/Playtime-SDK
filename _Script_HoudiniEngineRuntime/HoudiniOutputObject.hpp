#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniOutputObject {
    private: char pad_0[0xf8]; public:
    _Script_CoreUObject::Object*& get_OutputObject();
    _Script_CoreUObject::Object*& get_OutputComponent();
    _Script_CoreUObject::Object*& get_ProxyObject();
    _Script_CoreUObject::Object*& get_ProxyComponent();
    bool get_bProxyIsCurrent();
    void set_bProxyIsCurrent(bool value);
    bool get_bIsImplicit();
    void set_bIsImplicit(bool value);
    bool get_bIsGeometryCollectionPiece();
    void set_bIsGeometryCollectionPiece(bool value);
    void* get_GeometryCollectionPieceName();
    void* get_BakeName();
    void* get_CurveOutputProperty();
    void* get_CachedAttributes();
    void* get_CachedTokens();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
