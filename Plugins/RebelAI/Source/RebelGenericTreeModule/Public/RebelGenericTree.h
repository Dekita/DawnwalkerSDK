#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Engine/DataAsset.h"
#include "RebelGenericTreeBindingData.h"
#include "Templates/SubclassOf.h"
#include "RebelGenericTree.generated.h"

class URebelGenericTreeSchema;

UCLASS(Blueprintable)
class REBELGENERICTREEMODULE_API URebelGenericTree : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> InstanceDataTemplates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, uint16> InstanceDataIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelGenericTreeBindingData> BindingData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelGenericTreeSchema> SchemaClass;
    
public:
    URebelGenericTree();

};

