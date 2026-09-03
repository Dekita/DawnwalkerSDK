#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMetaHumanConfigType.h"
#include "MetaHumanConfig.generated.h"

UCLASS(Blueprintable)
class METAHUMANCONFIG_API UMetaHumanConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanConfigType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InternalVersion;
    
public:
    UMetaHumanConfig();

    UFUNCTION(BlueprintCallable)
    bool ReadFromDirectory(const FString& InPath);
    
};

