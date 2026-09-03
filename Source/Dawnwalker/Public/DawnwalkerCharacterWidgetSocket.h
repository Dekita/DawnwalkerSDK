#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerCharacterSocket.h"
#include "DawnwalkerCharacterWidgetSocket.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerCharacterWidgetSocket : public FDawnwalkerCharacterSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    FDawnwalkerCharacterWidgetSocket();
};

