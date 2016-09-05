
function firstRender()
{
    $("#Menu").load("View/Shared/Menu.html");
    $("#Render").load("View/Home/Index.html");
}
function ActionClick(e)
{
    $("#Render").load("View/Home/"+e+".html");
}