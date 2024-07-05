#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
struct VaRestJsonValue;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestJsonObject : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    bool WriteToFilePath(void* Path, bool bIsRelativeToProjectDir);
    void SetStringField(void* FieldName, void* StringValue);
    void SetStringArrayField(void* FieldName, void*& StringArray);
    void SetObjectField(void* FieldName, _Script_VaRest::VaRestJsonObject* JsonObject);
    void SetObjectArrayField(void* FieldName, void*& ObjectArray);
    void SetNumberField(void* FieldName, float Number);
    void SetNumberArrayField(void* FieldName, void*& NumberArray);
    void SetMapFields_uint8(void*& Fields);
    void SetMapFields_string(void*& Fields);
    void SetMapFields_int64(void*& Fields);
    void SetMapFields_int32(void*& Fields);
    void SetMapFields_bool(void*& Fields);
    void SetIntegerField(void* FieldName, int32_t Number);
    void SetInt64Field(void* FieldName, void* Number);
    void SetField(void* FieldName, _Script_VaRest::VaRestJsonValue* JsonValue);
    void SetBoolField(void* FieldName, bool InValue);
    void SetBoolArrayField(void* FieldName, void*& BoolArray);
    void SetArrayField(void* FieldName, void*& inArray);
    void Reset();
    void RemoveField(void* FieldName);
    void MergeJsonObject(_Script_VaRest::VaRestJsonObject* InJsonObject, bool Overwrite);
    bool HasField(void* FieldName);
    void* GetStringField(void* FieldName);
    void* GetStringArrayField(void* FieldName);
    _Script_VaRest::VaRestJsonObject* GetObjectField(void* FieldName);
    void* GetObjectArrayField(void* FieldName);
    float GetNumberField(void* FieldName);
    void* GetNumberArrayField(void* FieldName);
    int32_t GetIntegerField(void* FieldName);
    void* GetIntegerArrayField(void* FieldName);
    void* GetInt64Field(void* FieldName);
    void* GetFieldNames();
    _Script_VaRest::VaRestJsonValue* GetField(void* FieldName);
    bool GetBoolField(void* FieldName);
    void* GetBoolArrayField(void* FieldName);
    void* GetArrayField(void* FieldName);
    void* EncodeJsonToSingleString();
    void* EncodeJson();
    bool DecodeJson(void* JsonString, bool bUseIncrementalParser);
}; // Size: 0x38
#pragma pack(pop)
}
