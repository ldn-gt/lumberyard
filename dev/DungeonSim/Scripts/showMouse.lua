local DisplayMouseCursor = 
{
    Properties = 
    {
    },
}

function DisplayMouseCursor:OnActivate()
    -- Display the mouse cursor
    LyShineLua.ShowMouseCursor(true)
end

function DisplayMouseCursor:OnDeactivate()
	-- Hide the mouse cursor
    LyShineLua.ShowMouseCursor(false)
end

print("hello world");
return DisplayMouseCursor