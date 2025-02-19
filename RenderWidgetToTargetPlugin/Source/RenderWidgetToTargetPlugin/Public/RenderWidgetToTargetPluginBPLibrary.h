#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Engine/TextureDefines.h"
#include "Engine/TextureRenderTarget2D.h"    
#include "Blueprint/UserWidget.h"           
#include "Widgets/SWidget.h"               
#include "Slate/WidgetRenderer.h"            

#include "RenderingThread.h"

#include "RenderWidgetToTargetPluginBPLibrary.generated.h"

UCLASS()
class URenderWidgetToTargetPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(Category = "RenderWidgetToTargetPlugin", BlueprintCallable)
		static bool DrawWidgetToTarget(UTextureRenderTarget2D * Target, UUserWidget * WidgetToRender, FVector2D DrawSize, bool UseGamma, TextureFilter Filter, float DeltaTime);
};
