package com.gs.configuration;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.data.redis.connection.RedisConnectionFactory;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.data.redis.serializer.JdkSerializationRedisSerializer;

/**
 * @Configuration相当于spring-context.xml配置文件中的beans标签
 * <beans>
 *     <bean id="redisConnectionFactory"></bean>
 *     <bean class="org.springframework.data.redis.core.RedisTemplate">
 *         <property="connectionFactory" value="redisConnectionFactory"/>
 *         <property="keySerializer" value="JdkSerializationRedisSerializer"/>
 *         <property="valueSerializer" value="JdkSerializationRedisSerializer"/>
 *     </bean>
 * </beans>
 */
@Configuration
public class RedisConfig {

    @Bean
    public RedisTemplate redisTemplate(RedisConnectionFactory factory) {
        RedisTemplate<String, Object> redisTemplate = new RedisTemplate<>();
        redisTemplate.setConnectionFactory(factory);
        redisTemplate.setKeySerializer(new JdkSerializationRedisSerializer());
        redisTemplate.setValueSerializer(new JdkSerializationRedisSerializer());
        return redisTemplate;
    }

}
