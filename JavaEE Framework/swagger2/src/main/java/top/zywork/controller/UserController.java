package top.zywork.controller;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import org.springframework.web.bind.annotation.*;
import top.zywork.bean.Response;
import top.zywork.bean.User;

import javax.servlet.http.HttpServletRequest;

@RestController
@RequestMapping("/user")
@Api(value = "UserController")
public class UserController {

    @ApiOperation(value = "add")
    @PostMapping("/add")
    public Response save(HttpServletRequest request, User user) {
        Response response = new Response();
        response.setCode(1001);
        response.setMessage("ok");
        response.setData(user);
        return response;
    }

    @ApiOperation(value = "add1")
    @PostMapping("/add1")
    public Response save1(@RequestBody User user) {
        Response response = new Response();
        response.setCode(1001);
        response.setMessage("ok");
        response.setData(user);
        return response;
    }

    @ApiOperation(value = "one")
    @GetMapping("/one/{id}")
    public Response get(@PathVariable("id") Long id) {
        Response response = new Response();
        User user = new User();
        user.setId(id);
        user.setUsername("test");
        response.setCode(1001);
        response.setMessage("ok");
        response.setData(user);
        return response;
    }

    @ApiOperation(value = "remove")
    @GetMapping("/remove")
    public Response remove(Long id) {
        Response response = new Response();
        response.setCode(1001);
        response.setMessage("ok");
        response.setData(null);
        return response;
    }


}
