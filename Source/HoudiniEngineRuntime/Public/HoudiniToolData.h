#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EHoudiniToolSelectionType.h"
#include "EHoudiniToolType.h"
#include "HImageData.h"
#include "HoudiniToolData.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniToolData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHImageData IconImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath IconSourcePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HelpURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniToolType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniToolSelectionType SelectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath SourceAssetPath;
    
    UHoudiniToolData();

    UFUNCTION(BlueprintCallable)
    bool SaveToJSONFile(const FString& JsonFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool PopulateFromJSONFile(const FString& JsonFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool PopulateFromJSONData(const FString& JSONData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConvertToJSONData(FString& JSONData) const;
    
};

