<%@page language="java" contentType="text/html; charset=utf-8" pageEncoding="utf-8" %>
<%
    String path = request.getContextPath();
%>
<!doctype>
<html>
    <head>
        <%--
            如果访问的静态文件跟之前的web项目的位置一样，web目录下，则引用的形式与之前的web 项目一致
            <link href="<%=path%>/static/css/main.css" ref="stylesheet"/>

            如果访问的静态文件在springboot项目的static目录中，则引用的形式与之前的web项目不一样
            <link href="<%=path%>/css/main.css" rel="stylesheet"/>
         --%>
        <link href="<%=path%>/css/main.css" rel="stylesheet"/>
    </head>
    <body>index</body>
</html>