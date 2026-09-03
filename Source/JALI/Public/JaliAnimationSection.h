#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JaliBaseSection.h"
#include "JaliAnimationSection.generated.h"

class UJSync;

UCLASS(Blueprintable)
class JALI_API UJaliAnimationSection : public UJaliBaseSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJSync* JSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UJaliAnimationSection();

};

