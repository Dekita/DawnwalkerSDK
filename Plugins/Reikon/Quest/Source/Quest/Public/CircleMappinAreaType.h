#pragma once
#include "CoreMinimal.h"
#include "MappinAreaType.h"
#include "CircleMappinAreaType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class QUEST_API UCircleMappinAreaType : public UMappinAreaType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UCircleMappinAreaType();

};

