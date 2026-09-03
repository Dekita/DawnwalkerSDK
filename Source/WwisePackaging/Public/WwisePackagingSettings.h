#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WwisePackagingSettings.generated.h"

class UWwiseAssetLibrary;
class UWwiseAssetLibraryGroup;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class WWISEPACKAGING_API UWwisePackagingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPackageAsBulkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWwiseAssetLibrary*> AssetLibrariesKeepAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWwiseAssetLibraryGroup>> AssetLibraryGroupsToKeepAlive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWwiseAssetLibraryGroup> TemplateAssetLibraryGroup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameplayModuleWithoutGroups;
    
    UWwisePackagingSettings();

};

