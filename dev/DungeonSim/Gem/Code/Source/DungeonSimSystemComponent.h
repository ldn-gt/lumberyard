
#pragma once

#include <AzCore/Component/Component.h>

#include <DungeonSim/DungeonSimBus.h>

namespace DungeonSim
{
    class DungeonSimSystemComponent
        : public AZ::Component
        , protected DungeonSimRequestBus::Handler
    {
    public:
        AZ_COMPONENT(DungeonSimSystemComponent, "{3F10AE68-07E2-4DE5-B5B2-37EC96775E75}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // DungeonSimRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };

} // namespace DungeonSim
