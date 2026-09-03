#include "HoudiniToolData.h"

UHoudiniToolData::UHoudiniToolData() {
    this->Type = EHoudiniToolType::HTOOLTYPE_GENERATOR;
    this->DefaultTool = false;
    this->SelectionType = EHoudiniToolSelectionType::HTOOL_SELECTION_ALL;
}

bool UHoudiniToolData::SaveToJSONFile(const FString& JsonFilePath) {
    return false;
}

bool UHoudiniToolData::PopulateFromJSONFile(const FString& JsonFilePath) {
    return false;
}

bool UHoudiniToolData::PopulateFromJSONData(const FString& JSONData) {
    return false;
}

bool UHoudiniToolData::ConvertToJSONData(FString& JSONData) const {
    return false;
}


